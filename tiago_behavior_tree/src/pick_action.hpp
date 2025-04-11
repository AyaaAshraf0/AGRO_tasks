
// pick_action_node.hpp
#ifndef PICK_ACTION_HPP
#define PICK_ACTION_HPP

#include "behaviortree_cpp_v3/action_node.h"
#include "behaviortree_cpp_v3/bt_factory.h"

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp" // For Pose message, if you want to pass target poses

#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <moveit/move_group_interface/move_group_interface.h>


using namespace BT;

// without ports.
class ApproachObject : public BT::SyncActionNode
{
public:
    ApproachObject(const std::string& name) :
    BT::SyncActionNode(name, {})
    {}

    // You must override the virtual function tick()
    NodeStatus tick() override
    {
    std::cout << "ApproachObject: " << this->name() << std::endl;
    return NodeStatus::SUCCESS;
    }
};


class OpenGripperAction : public SyncActionNode
{
public:
    OpenGripperAction(const std::string& name) : SyncActionNode(name, {})
    {
    }

    NodeStatus tick() override
    {
        rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("gripper_action_node");

        // Initialize MoveGroupInterface to control the gripper
        using moveit::planning_interface::MoveGroupInterface;
        MoveGroupInterface gripper_group(node, "gripper");

        // Set joint targets for opening the gripper
        gripper_group.setJointValueTarget({{"gripper_left_finger_joint", 0.04},
                                           {"gripper_right_finger_joint", 0.04}});  // Open
        gripper_group.move();

        RCLCPP_INFO(node->get_logger(), "Gripper opened.");

        // Return success once the gripper is opened
        return NodeStatus::SUCCESS;
    }
};

// class GripperInterface
// {
// public:
//   GripperInterface(): _open(true){}

//   NodeStatus open()
//   {
//     _open = true;
//     int argc =0;
//     char** argv = nullptr;

//     rclcpp::init(argc, argv);
//     auto node = rclcpp::Node::make_shared("gripper_open");
    
//     using moveit::planning_interface::MoveGroupInterface; 
//    auto gripper_group = MoveGroupInterface (node, "gripper");

//     gripper_group.setJointValueTarget({{"gripper_left_finger_joint", 0.04}, 
//                                       {"gripper_right_finger_joint", 0.04}});  // Open
//     gripper_group.move();

//     std::cout << "Gripper open" << std::endl;
//     return NodeStatus::SUCCESS; 

//   }

// //   NodeStatus close()
// //   {
// //     _open = false;
// //     std::cout << "Gripper close" << std::endl;
// //     return NodeStatus::SUCCESS;
// //   }

// private:
//   bool _open;
//   rclcpp::Node::SharedPtr node_;

// };

#endif  // PICK_ACTION_NODE_HPP