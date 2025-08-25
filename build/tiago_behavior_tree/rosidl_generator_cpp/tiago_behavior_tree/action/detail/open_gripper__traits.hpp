// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tiago_behavior_tree:action/OpenGripper.idl
// generated code does not contain a copyright notice

#ifndef TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__TRAITS_HPP_
#define TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tiago_behavior_tree/action/detail/open_gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tiago_behavior_tree
{

namespace action
{

inline void to_flow_style_yaml(
  const OpenGripper_Goal & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenGripper_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenGripper_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_generator_traits
{

[[deprecated("use tiago_behavior_tree::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tiago_behavior_tree::action::OpenGripper_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  tiago_behavior_tree::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tiago_behavior_tree::action::to_yaml() instead")]]
inline std::string to_yaml(const tiago_behavior_tree::action::OpenGripper_Goal & msg)
{
  return tiago_behavior_tree::action::to_yaml(msg);
}

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_Goal>()
{
  return "tiago_behavior_tree::action::OpenGripper_Goal";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_Goal>()
{
  return "tiago_behavior_tree/action/OpenGripper_Goal";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tiago_behavior_tree::action::OpenGripper_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tiago_behavior_tree
{

namespace action
{

inline void to_flow_style_yaml(
  const OpenGripper_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenGripper_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenGripper_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_generator_traits
{

[[deprecated("use tiago_behavior_tree::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tiago_behavior_tree::action::OpenGripper_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  tiago_behavior_tree::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tiago_behavior_tree::action::to_yaml() instead")]]
inline std::string to_yaml(const tiago_behavior_tree::action::OpenGripper_Result & msg)
{
  return tiago_behavior_tree::action::to_yaml(msg);
}

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_Result>()
{
  return "tiago_behavior_tree::action::OpenGripper_Result";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_Result>()
{
  return "tiago_behavior_tree/action/OpenGripper_Result";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tiago_behavior_tree::action::OpenGripper_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tiago_behavior_tree
{

namespace action
{

inline void to_flow_style_yaml(
  const OpenGripper_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenGripper_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenGripper_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_generator_traits
{

[[deprecated("use tiago_behavior_tree::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tiago_behavior_tree::action::OpenGripper_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  tiago_behavior_tree::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tiago_behavior_tree::action::to_yaml() instead")]]
inline std::string to_yaml(const tiago_behavior_tree::action::OpenGripper_Feedback & msg)
{
  return tiago_behavior_tree::action::to_yaml(msg);
}

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_Feedback>()
{
  return "tiago_behavior_tree::action::OpenGripper_Feedback";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_Feedback>()
{
  return "tiago_behavior_tree/action/OpenGripper_Feedback";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tiago_behavior_tree::action::OpenGripper_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "tiago_behavior_tree/action/detail/open_gripper__traits.hpp"

namespace tiago_behavior_tree
{

namespace action
{

inline void to_flow_style_yaml(
  const OpenGripper_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenGripper_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenGripper_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_generator_traits
{

[[deprecated("use tiago_behavior_tree::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tiago_behavior_tree::action::OpenGripper_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tiago_behavior_tree::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tiago_behavior_tree::action::to_yaml() instead")]]
inline std::string to_yaml(const tiago_behavior_tree::action::OpenGripper_SendGoal_Request & msg)
{
  return tiago_behavior_tree::action::to_yaml(msg);
}

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_SendGoal_Request>()
{
  return "tiago_behavior_tree::action::OpenGripper_SendGoal_Request";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_SendGoal_Request>()
{
  return "tiago_behavior_tree/action/OpenGripper_SendGoal_Request";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tiago_behavior_tree::action::OpenGripper_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tiago_behavior_tree::action::OpenGripper_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tiago_behavior_tree::action::OpenGripper_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace tiago_behavior_tree
{

namespace action
{

inline void to_flow_style_yaml(
  const OpenGripper_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenGripper_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenGripper_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_generator_traits
{

[[deprecated("use tiago_behavior_tree::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tiago_behavior_tree::action::OpenGripper_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tiago_behavior_tree::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tiago_behavior_tree::action::to_yaml() instead")]]
inline std::string to_yaml(const tiago_behavior_tree::action::OpenGripper_SendGoal_Response & msg)
{
  return tiago_behavior_tree::action::to_yaml(msg);
}

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_SendGoal_Response>()
{
  return "tiago_behavior_tree::action::OpenGripper_SendGoal_Response";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_SendGoal_Response>()
{
  return "tiago_behavior_tree/action/OpenGripper_SendGoal_Response";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tiago_behavior_tree::action::OpenGripper_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_SendGoal>()
{
  return "tiago_behavior_tree::action::OpenGripper_SendGoal";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_SendGoal>()
{
  return "tiago_behavior_tree/action/OpenGripper_SendGoal";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tiago_behavior_tree::action::OpenGripper_SendGoal_Request>::value &&
    has_fixed_size<tiago_behavior_tree::action::OpenGripper_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tiago_behavior_tree::action::OpenGripper_SendGoal_Request>::value &&
    has_bounded_size<tiago_behavior_tree::action::OpenGripper_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<tiago_behavior_tree::action::OpenGripper_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<tiago_behavior_tree::action::OpenGripper_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tiago_behavior_tree::action::OpenGripper_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace tiago_behavior_tree
{

namespace action
{

inline void to_flow_style_yaml(
  const OpenGripper_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenGripper_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenGripper_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_generator_traits
{

[[deprecated("use tiago_behavior_tree::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tiago_behavior_tree::action::OpenGripper_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tiago_behavior_tree::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tiago_behavior_tree::action::to_yaml() instead")]]
inline std::string to_yaml(const tiago_behavior_tree::action::OpenGripper_GetResult_Request & msg)
{
  return tiago_behavior_tree::action::to_yaml(msg);
}

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_GetResult_Request>()
{
  return "tiago_behavior_tree::action::OpenGripper_GetResult_Request";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_GetResult_Request>()
{
  return "tiago_behavior_tree/action/OpenGripper_GetResult_Request";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tiago_behavior_tree::action::OpenGripper_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tiago_behavior_tree/action/detail/open_gripper__traits.hpp"

namespace tiago_behavior_tree
{

namespace action
{

inline void to_flow_style_yaml(
  const OpenGripper_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenGripper_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenGripper_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_generator_traits
{

[[deprecated("use tiago_behavior_tree::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tiago_behavior_tree::action::OpenGripper_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tiago_behavior_tree::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tiago_behavior_tree::action::to_yaml() instead")]]
inline std::string to_yaml(const tiago_behavior_tree::action::OpenGripper_GetResult_Response & msg)
{
  return tiago_behavior_tree::action::to_yaml(msg);
}

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_GetResult_Response>()
{
  return "tiago_behavior_tree::action::OpenGripper_GetResult_Response";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_GetResult_Response>()
{
  return "tiago_behavior_tree/action/OpenGripper_GetResult_Response";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tiago_behavior_tree::action::OpenGripper_Result>::value> {};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tiago_behavior_tree::action::OpenGripper_Result>::value> {};

template<>
struct is_message<tiago_behavior_tree::action::OpenGripper_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_GetResult>()
{
  return "tiago_behavior_tree::action::OpenGripper_GetResult";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_GetResult>()
{
  return "tiago_behavior_tree/action/OpenGripper_GetResult";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tiago_behavior_tree::action::OpenGripper_GetResult_Request>::value &&
    has_fixed_size<tiago_behavior_tree::action::OpenGripper_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tiago_behavior_tree::action::OpenGripper_GetResult_Request>::value &&
    has_bounded_size<tiago_behavior_tree::action::OpenGripper_GetResult_Response>::value
  >
{
};

template<>
struct is_service<tiago_behavior_tree::action::OpenGripper_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<tiago_behavior_tree::action::OpenGripper_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tiago_behavior_tree::action::OpenGripper_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "tiago_behavior_tree/action/detail/open_gripper__traits.hpp"

namespace tiago_behavior_tree
{

namespace action
{

inline void to_flow_style_yaml(
  const OpenGripper_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OpenGripper_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OpenGripper_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace tiago_behavior_tree

namespace rosidl_generator_traits
{

[[deprecated("use tiago_behavior_tree::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tiago_behavior_tree::action::OpenGripper_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  tiago_behavior_tree::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tiago_behavior_tree::action::to_yaml() instead")]]
inline std::string to_yaml(const tiago_behavior_tree::action::OpenGripper_FeedbackMessage & msg)
{
  return tiago_behavior_tree::action::to_yaml(msg);
}

template<>
inline const char * data_type<tiago_behavior_tree::action::OpenGripper_FeedbackMessage>()
{
  return "tiago_behavior_tree::action::OpenGripper_FeedbackMessage";
}

template<>
inline const char * name<tiago_behavior_tree::action::OpenGripper_FeedbackMessage>()
{
  return "tiago_behavior_tree/action/OpenGripper_FeedbackMessage";
}

template<>
struct has_fixed_size<tiago_behavior_tree::action::OpenGripper_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tiago_behavior_tree::action::OpenGripper_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tiago_behavior_tree::action::OpenGripper_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tiago_behavior_tree::action::OpenGripper_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tiago_behavior_tree::action::OpenGripper_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<tiago_behavior_tree::action::OpenGripper>
  : std::true_type
{
};

template<>
struct is_action_goal<tiago_behavior_tree::action::OpenGripper_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<tiago_behavior_tree::action::OpenGripper_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<tiago_behavior_tree::action::OpenGripper_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__TRAITS_HPP_
