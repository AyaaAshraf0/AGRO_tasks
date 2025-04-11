#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <moveit/move_group_interface/move_group_interface.h>

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto const node = std::make_shared<rclcpp::Node>(
    "pick_place",
    rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true)
  );

  rclcpp::Logger logger = rclcpp::get_logger("go_to_pose");

  using moveit::planning_interface::MoveGroupInterface;
  MoveGroupInterface move_group(node, "arm_torso");

  move_group.setPlanningPipelineId("ompl");
  move_group.setPlanningTime(5.0);

  geometry_msgs::msg::PoseStamped target_pose;
  target_pose.header.frame_id = "base_link";
  target_pose.header.stamp = node->now();

  // Set your desired pose here
  target_pose.pose.position.x = 0.4;
  target_pose.pose.position.y = 0.0;
  target_pose.pose.position.z = 0.8;
  target_pose.pose.orientation.w = 1.0;

  move_group.setPoseTarget(target_pose);

  moveit::planning_interface::MoveGroupInterface::Plan plan;
  bool success = static_cast<bool>(move_group.plan(plan));

  if (success)
  {
    RCLCPP_INFO(logger, "Plan successful. Executing...");
    move_group.execute(plan);
  }
  else
  {
    RCLCPP_ERROR(logger, "Planning failed!");
  }

  using moveit::planning_interface::MoveGroupInterface; 
  MoveGroupInterface gripper_group(node, "gripper");

  gripper_group.setJointValueTarget({{"gripper_left_finger_joint", 0.04}, 
                                     {"gripper_right_finger_joint", 0.04}});  // Open
  gripper_group.move();



  

  rclcpp::shutdown();
  return 0;
}