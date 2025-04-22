// pick_action_node.cpp
#include "pick_action.hpp"

#define DEFAULT_BT_XML "/home/ayaa/Agro2/src/tiago_behavior_tree/bt_xml/navigation_pick_place.xml"


int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
  // We use the BehaviorTreeFactory to register our custom nodes
  BehaviorTreeFactory factory;

  // The recommended way to create a Node is through inheritance.
  factory.registerNodeType<OpenGripperAction>("OpenGripper");


   // You can also create SimpleActionNodes using methods of a class.
//   OpenGripperAction gripper;
  factory.registerNodeType<ApproachObject>("ApproachObject");

//   factory.registerSimpleAction(
//       "OpenGripper",
//       std::bind(&GripperInterface::open, &gripper));

   auto tree = factory.createTreeFromFile(DEFAULT_BT_XML);

   tree.tickRoot();

   rclcpp::shutdown();
    return 0;
}
