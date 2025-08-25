#include <string>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "nav2_behavior_tree/bt_action_node.hpp"
#include "behaviortree_cpp_v3/bt_factory.h"

// Include the custom action
#include "tiago_behavior_tree/action/open_gripper.hpp"  
#include "tiago_behavior_tree/action/approach_object.hpp"  


#include <moveit/move_group_interface/move_group_interface.h>

namespace nav2_behavior_tree
{

class OpenGripperAction : public nav2_behavior_tree::BtActionNode<tiago_behavior_tree::action::OpenGripper>
{
public:
  using ActionType = tiago_behavior_tree::action::OpenGripper;

  OpenGripperAction(
    const std::string & xml_tag_name,
    const std::string & action_name,
    const BT::NodeConfiguration & conf)
  : BtActionNode<ActionType>(xml_tag_name, action_name, conf)
  {
    gripper_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node_, "gripper");
    gripper_group_->setPlanningPipelineId("ompl");

  }

  // Provide input/output ports if needed
  static BT::PortsList providedPorts()
  {
    return providedBasicPorts({});
  }

  void on_tick() override
  {
     // Set the gripper joint values (open)
    gripper_group_->setJointValueTarget({
      {"gripper_left_finger_joint", 0.044},
      {"gripper_right_finger_joint", 0.044}
    });

    // Plan and execute
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = (gripper_group_->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (success) {
      gripper_group_->execute(plan);
    } else {
      RCLCPP_ERROR(node_->get_logger(), "❌ Failed to plan gripper opening.");
    }

    goal_.structure_needs_at_least_one_member = 0;  // Dummy field (required for empty goals)
  }

  BT::NodeStatus on_success() override
  {
    RCLCPP_INFO(node_->get_logger(), "✅ OpenGripper succeeded");
    return BT::NodeStatus::SUCCESS;
  }

  BT::NodeStatus on_aborted() override
  {
    RCLCPP_ERROR(node_->get_logger(), "❌ OpenGripper aborted");
    return BT::NodeStatus::FAILURE;
  }

  BT::NodeStatus on_cancelled() override
  {
    RCLCPP_WARN(node_->get_logger(), "⚠️ OpenGripper cancelled");
    return BT::NodeStatus::FAILURE;
  }
  private:
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> gripper_group_;
};

class ApproachObjectAction : public nav2_behavior_tree::BtActionNode<tiago_behavior_tree::action::ApproachObject>
{
public:
  using ActionType = tiago_behavior_tree::action::ApproachObject;

  ApproachObjectAction(
    const std::string & xml_tag_name,
    const std::string & action_name,
    const BT::NodeConfiguration & conf)
  : BtActionNode<ActionType>(xml_tag_name, action_name, conf)
  {
    arm_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node_, "arm");
    arm_group_->setPlanningPipelineId("ompl");
  }

  // Provide input/output ports if needed
  static BT::PortsList providedPorts()
  {
    return providedBasicPorts({ BT::InputPort<geometry_msgs::msg::Pose>("target_pose") });

  }

  void on_tick() override
  {
    getInput("target_pose", goal_.target_pose);

    // Set target pose
    geometry_msgs::msg::Pose target = goal_.target_pose;
    arm_group_->setPoseTarget(target);

    // Plan and execute
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = (arm_group_->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);
    if (success) {
      arm_group_->execute(plan);
    } else {
      RCLCPP_ERROR(node_->get_logger(), "Failed to plan arm motion to object.");
    }
  }

  BT::NodeStatus on_success() override
  {
    RCLCPP_INFO(node_->get_logger(), "✅ ApproachObject succeeded");
    return BT::NodeStatus::SUCCESS;
  }

  BT::NodeStatus on_aborted() override
  {
    RCLCPP_ERROR(node_->get_logger(), "❌ ApproachObject aborted");
    return BT::NodeStatus::FAILURE;
  }

  BT::NodeStatus on_cancelled() override
  {
    RCLCPP_WARN(node_->get_logger(), "⚠️ ApproachObject cancelled");
    return BT::NodeStatus::FAILURE;
  }
  private:
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> arm_group_;

 
};

}  // namespace nav2_behavior_tree



extern "C" void BT_RegisterNodesFromPlugin(BT::BehaviorTreeFactory & factory)
{
  BT::NodeBuilder builder = [](const std::string & name, const BT::NodeConfiguration & config)
  {
    return std::make_unique<nav2_behavior_tree::OpenGripperAction>(name, "open_gripper", config);
  };

  factory.registerBuilder<nav2_behavior_tree::OpenGripperAction>("OpenGripperAction", builder);

  factory.registerBuilder<nav2_behavior_tree::ApproachObjectAction>("ApproachObjectAction", builder);

}

