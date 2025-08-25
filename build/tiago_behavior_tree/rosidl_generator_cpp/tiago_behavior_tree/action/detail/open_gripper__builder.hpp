// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tiago_behavior_tree:action/OpenGripper.idl
// generated code does not contain a copyright notice

#ifndef TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__BUILDER_HPP_
#define TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tiago_behavior_tree/action/detail/open_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tiago_behavior_tree
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tiago_behavior_tree::action::OpenGripper_Goal>()
{
  return ::tiago_behavior_tree::action::OpenGripper_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tiago_behavior_tree


namespace tiago_behavior_tree
{

namespace action
{

namespace builder
{

class Init_OpenGripper_Result_message
{
public:
  explicit Init_OpenGripper_Result_message(::tiago_behavior_tree::action::OpenGripper_Result & msg)
  : msg_(msg)
  {}
  ::tiago_behavior_tree::action::OpenGripper_Result message(::tiago_behavior_tree::action::OpenGripper_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_Result msg_;
};

class Init_OpenGripper_Result_success
{
public:
  Init_OpenGripper_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenGripper_Result_message success(::tiago_behavior_tree::action::OpenGripper_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_OpenGripper_Result_message(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tiago_behavior_tree::action::OpenGripper_Result>()
{
  return tiago_behavior_tree::action::builder::Init_OpenGripper_Result_success();
}

}  // namespace tiago_behavior_tree


namespace tiago_behavior_tree
{

namespace action
{

namespace builder
{

class Init_OpenGripper_Feedback_feedback
{
public:
  Init_OpenGripper_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tiago_behavior_tree::action::OpenGripper_Feedback feedback(::tiago_behavior_tree::action::OpenGripper_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tiago_behavior_tree::action::OpenGripper_Feedback>()
{
  return tiago_behavior_tree::action::builder::Init_OpenGripper_Feedback_feedback();
}

}  // namespace tiago_behavior_tree


namespace tiago_behavior_tree
{

namespace action
{

namespace builder
{

class Init_OpenGripper_SendGoal_Request_goal
{
public:
  explicit Init_OpenGripper_SendGoal_Request_goal(::tiago_behavior_tree::action::OpenGripper_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tiago_behavior_tree::action::OpenGripper_SendGoal_Request goal(::tiago_behavior_tree::action::OpenGripper_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_SendGoal_Request msg_;
};

class Init_OpenGripper_SendGoal_Request_goal_id
{
public:
  Init_OpenGripper_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenGripper_SendGoal_Request_goal goal_id(::tiago_behavior_tree::action::OpenGripper_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OpenGripper_SendGoal_Request_goal(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tiago_behavior_tree::action::OpenGripper_SendGoal_Request>()
{
  return tiago_behavior_tree::action::builder::Init_OpenGripper_SendGoal_Request_goal_id();
}

}  // namespace tiago_behavior_tree


namespace tiago_behavior_tree
{

namespace action
{

namespace builder
{

class Init_OpenGripper_SendGoal_Response_stamp
{
public:
  explicit Init_OpenGripper_SendGoal_Response_stamp(::tiago_behavior_tree::action::OpenGripper_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tiago_behavior_tree::action::OpenGripper_SendGoal_Response stamp(::tiago_behavior_tree::action::OpenGripper_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_SendGoal_Response msg_;
};

class Init_OpenGripper_SendGoal_Response_accepted
{
public:
  Init_OpenGripper_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenGripper_SendGoal_Response_stamp accepted(::tiago_behavior_tree::action::OpenGripper_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_OpenGripper_SendGoal_Response_stamp(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tiago_behavior_tree::action::OpenGripper_SendGoal_Response>()
{
  return tiago_behavior_tree::action::builder::Init_OpenGripper_SendGoal_Response_accepted();
}

}  // namespace tiago_behavior_tree


namespace tiago_behavior_tree
{

namespace action
{

namespace builder
{

class Init_OpenGripper_GetResult_Request_goal_id
{
public:
  Init_OpenGripper_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tiago_behavior_tree::action::OpenGripper_GetResult_Request goal_id(::tiago_behavior_tree::action::OpenGripper_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tiago_behavior_tree::action::OpenGripper_GetResult_Request>()
{
  return tiago_behavior_tree::action::builder::Init_OpenGripper_GetResult_Request_goal_id();
}

}  // namespace tiago_behavior_tree


namespace tiago_behavior_tree
{

namespace action
{

namespace builder
{

class Init_OpenGripper_GetResult_Response_result
{
public:
  explicit Init_OpenGripper_GetResult_Response_result(::tiago_behavior_tree::action::OpenGripper_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tiago_behavior_tree::action::OpenGripper_GetResult_Response result(::tiago_behavior_tree::action::OpenGripper_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_GetResult_Response msg_;
};

class Init_OpenGripper_GetResult_Response_status
{
public:
  Init_OpenGripper_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenGripper_GetResult_Response_result status(::tiago_behavior_tree::action::OpenGripper_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OpenGripper_GetResult_Response_result(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tiago_behavior_tree::action::OpenGripper_GetResult_Response>()
{
  return tiago_behavior_tree::action::builder::Init_OpenGripper_GetResult_Response_status();
}

}  // namespace tiago_behavior_tree


namespace tiago_behavior_tree
{

namespace action
{

namespace builder
{

class Init_OpenGripper_FeedbackMessage_feedback
{
public:
  explicit Init_OpenGripper_FeedbackMessage_feedback(::tiago_behavior_tree::action::OpenGripper_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tiago_behavior_tree::action::OpenGripper_FeedbackMessage feedback(::tiago_behavior_tree::action::OpenGripper_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_FeedbackMessage msg_;
};

class Init_OpenGripper_FeedbackMessage_goal_id
{
public:
  Init_OpenGripper_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenGripper_FeedbackMessage_feedback goal_id(::tiago_behavior_tree::action::OpenGripper_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_OpenGripper_FeedbackMessage_feedback(msg_);
  }

private:
  ::tiago_behavior_tree::action::OpenGripper_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tiago_behavior_tree::action::OpenGripper_FeedbackMessage>()
{
  return tiago_behavior_tree::action::builder::Init_OpenGripper_FeedbackMessage_goal_id();
}

}  // namespace tiago_behavior_tree

#endif  // TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__BUILDER_HPP_
