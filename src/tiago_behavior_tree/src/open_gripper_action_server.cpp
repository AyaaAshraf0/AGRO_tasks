#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "tiago_behavior_tree/action/open_gripper.hpp"  

class OpenGripperServer : public rclcpp::Node
{
public:
  using OpenGripper = tiago_behavior_tree::action::OpenGripper;
  using GoalHandle = rclcpp_action::ServerGoalHandle<OpenGripper>;

  OpenGripperServer() : Node("open_gripper_server")
  {
    action_server_ = rclcpp_action::create_server<OpenGripper>(
      this,
      "open_gripper",  // must match the BT action node name
      std::bind(&OpenGripperServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&OpenGripperServer::handle_cancel, this, std::placeholders::_1),
      std::bind(&OpenGripperServer::handle_accepted, this, std::placeholders::_1));
  }

private:
  rclcpp_action::Server<OpenGripper>::SharedPtr action_server_;

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID &,
    std::shared_ptr<const OpenGripper::Goal>)
  {
    RCLCPP_INFO(this->get_logger(), "✅ Goal accepted.");
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandle>)
  {
    RCLCPP_INFO(this->get_logger(), "⚠️ Cancel request received.");
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
  {
    std::thread{[goal_handle]() {
      rclcpp::Rate rate(1);
      rate.sleep();  // Simulate doing something
      auto result = std::make_shared<OpenGripper::Result>();
      goal_handle->succeed(result);
      RCLCPP_INFO(rclcpp::get_logger("open_gripper_server"), "🎉 Action succeeded.");
    }}.detach();
  }
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<OpenGripperServer>());
  rclcpp::shutdown();
  return 0;
}