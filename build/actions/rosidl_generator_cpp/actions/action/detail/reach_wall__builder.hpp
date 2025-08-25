// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actions:action/ReachWall.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS__ACTION__DETAIL__REACH_WALL__BUILDER_HPP_
#define ACTIONS__ACTION__DETAIL__REACH_WALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "actions/action/detail/reach_wall__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace actions
{

namespace action
{

namespace builder
{

class Init_ReachWall_Goal_target_distance
{
public:
  Init_ReachWall_Goal_target_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actions::action::ReachWall_Goal target_distance(::actions::action::ReachWall_Goal::_target_distance_type arg)
  {
    msg_.target_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions::action::ReachWall_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions::action::ReachWall_Goal>()
{
  return actions::action::builder::Init_ReachWall_Goal_target_distance();
}

}  // namespace actions


namespace actions
{

namespace action
{

namespace builder
{

class Init_ReachWall_Result_reached
{
public:
  Init_ReachWall_Result_reached()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actions::action::ReachWall_Result reached(::actions::action::ReachWall_Result::_reached_type arg)
  {
    msg_.reached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions::action::ReachWall_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions::action::ReachWall_Result>()
{
  return actions::action::builder::Init_ReachWall_Result_reached();
}

}  // namespace actions


namespace actions
{

namespace action
{

namespace builder
{

class Init_ReachWall_Feedback_remaining_distance
{
public:
  Init_ReachWall_Feedback_remaining_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actions::action::ReachWall_Feedback remaining_distance(::actions::action::ReachWall_Feedback::_remaining_distance_type arg)
  {
    msg_.remaining_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions::action::ReachWall_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions::action::ReachWall_Feedback>()
{
  return actions::action::builder::Init_ReachWall_Feedback_remaining_distance();
}

}  // namespace actions


namespace actions
{

namespace action
{

namespace builder
{

class Init_ReachWall_SendGoal_Request_goal
{
public:
  explicit Init_ReachWall_SendGoal_Request_goal(::actions::action::ReachWall_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::actions::action::ReachWall_SendGoal_Request goal(::actions::action::ReachWall_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions::action::ReachWall_SendGoal_Request msg_;
};

class Init_ReachWall_SendGoal_Request_goal_id
{
public:
  Init_ReachWall_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachWall_SendGoal_Request_goal goal_id(::actions::action::ReachWall_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReachWall_SendGoal_Request_goal(msg_);
  }

private:
  ::actions::action::ReachWall_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions::action::ReachWall_SendGoal_Request>()
{
  return actions::action::builder::Init_ReachWall_SendGoal_Request_goal_id();
}

}  // namespace actions


namespace actions
{

namespace action
{

namespace builder
{

class Init_ReachWall_SendGoal_Response_stamp
{
public:
  explicit Init_ReachWall_SendGoal_Response_stamp(::actions::action::ReachWall_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::actions::action::ReachWall_SendGoal_Response stamp(::actions::action::ReachWall_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions::action::ReachWall_SendGoal_Response msg_;
};

class Init_ReachWall_SendGoal_Response_accepted
{
public:
  Init_ReachWall_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachWall_SendGoal_Response_stamp accepted(::actions::action::ReachWall_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ReachWall_SendGoal_Response_stamp(msg_);
  }

private:
  ::actions::action::ReachWall_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions::action::ReachWall_SendGoal_Response>()
{
  return actions::action::builder::Init_ReachWall_SendGoal_Response_accepted();
}

}  // namespace actions


namespace actions
{

namespace action
{

namespace builder
{

class Init_ReachWall_GetResult_Request_goal_id
{
public:
  Init_ReachWall_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actions::action::ReachWall_GetResult_Request goal_id(::actions::action::ReachWall_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions::action::ReachWall_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions::action::ReachWall_GetResult_Request>()
{
  return actions::action::builder::Init_ReachWall_GetResult_Request_goal_id();
}

}  // namespace actions


namespace actions
{

namespace action
{

namespace builder
{

class Init_ReachWall_GetResult_Response_result
{
public:
  explicit Init_ReachWall_GetResult_Response_result(::actions::action::ReachWall_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::actions::action::ReachWall_GetResult_Response result(::actions::action::ReachWall_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions::action::ReachWall_GetResult_Response msg_;
};

class Init_ReachWall_GetResult_Response_status
{
public:
  Init_ReachWall_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachWall_GetResult_Response_result status(::actions::action::ReachWall_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ReachWall_GetResult_Response_result(msg_);
  }

private:
  ::actions::action::ReachWall_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions::action::ReachWall_GetResult_Response>()
{
  return actions::action::builder::Init_ReachWall_GetResult_Response_status();
}

}  // namespace actions


namespace actions
{

namespace action
{

namespace builder
{

class Init_ReachWall_FeedbackMessage_feedback
{
public:
  explicit Init_ReachWall_FeedbackMessage_feedback(::actions::action::ReachWall_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::actions::action::ReachWall_FeedbackMessage feedback(::actions::action::ReachWall_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions::action::ReachWall_FeedbackMessage msg_;
};

class Init_ReachWall_FeedbackMessage_goal_id
{
public:
  Init_ReachWall_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachWall_FeedbackMessage_feedback goal_id(::actions::action::ReachWall_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReachWall_FeedbackMessage_feedback(msg_);
  }

private:
  ::actions::action::ReachWall_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions::action::ReachWall_FeedbackMessage>()
{
  return actions::action::builder::Init_ReachWall_FeedbackMessage_goal_id();
}

}  // namespace actions

#endif  // ACTIONS__ACTION__DETAIL__REACH_WALL__BUILDER_HPP_
