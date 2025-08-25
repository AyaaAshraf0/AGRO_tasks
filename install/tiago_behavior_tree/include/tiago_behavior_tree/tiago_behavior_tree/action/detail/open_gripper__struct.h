// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tiago_behavior_tree:action/OpenGripper.idl
// generated code does not contain a copyright notice

#ifndef TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__STRUCT_H_
#define TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/OpenGripper in the package tiago_behavior_tree.
typedef struct tiago_behavior_tree__action__OpenGripper_Goal
{
  uint8_t structure_needs_at_least_one_member;
} tiago_behavior_tree__action__OpenGripper_Goal;

// Struct for a sequence of tiago_behavior_tree__action__OpenGripper_Goal.
typedef struct tiago_behavior_tree__action__OpenGripper_Goal__Sequence
{
  tiago_behavior_tree__action__OpenGripper_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tiago_behavior_tree__action__OpenGripper_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/OpenGripper in the package tiago_behavior_tree.
typedef struct tiago_behavior_tree__action__OpenGripper_Result
{
  bool success;
  rosidl_runtime_c__String message;
} tiago_behavior_tree__action__OpenGripper_Result;

// Struct for a sequence of tiago_behavior_tree__action__OpenGripper_Result.
typedef struct tiago_behavior_tree__action__OpenGripper_Result__Sequence
{
  tiago_behavior_tree__action__OpenGripper_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tiago_behavior_tree__action__OpenGripper_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/OpenGripper in the package tiago_behavior_tree.
typedef struct tiago_behavior_tree__action__OpenGripper_Feedback
{
  rosidl_runtime_c__String feedback;
} tiago_behavior_tree__action__OpenGripper_Feedback;

// Struct for a sequence of tiago_behavior_tree__action__OpenGripper_Feedback.
typedef struct tiago_behavior_tree__action__OpenGripper_Feedback__Sequence
{
  tiago_behavior_tree__action__OpenGripper_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tiago_behavior_tree__action__OpenGripper_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tiago_behavior_tree/action/detail/open_gripper__struct.h"

/// Struct defined in action/OpenGripper in the package tiago_behavior_tree.
typedef struct tiago_behavior_tree__action__OpenGripper_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tiago_behavior_tree__action__OpenGripper_Goal goal;
} tiago_behavior_tree__action__OpenGripper_SendGoal_Request;

// Struct for a sequence of tiago_behavior_tree__action__OpenGripper_SendGoal_Request.
typedef struct tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence
{
  tiago_behavior_tree__action__OpenGripper_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/OpenGripper in the package tiago_behavior_tree.
typedef struct tiago_behavior_tree__action__OpenGripper_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tiago_behavior_tree__action__OpenGripper_SendGoal_Response;

// Struct for a sequence of tiago_behavior_tree__action__OpenGripper_SendGoal_Response.
typedef struct tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence
{
  tiago_behavior_tree__action__OpenGripper_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/OpenGripper in the package tiago_behavior_tree.
typedef struct tiago_behavior_tree__action__OpenGripper_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tiago_behavior_tree__action__OpenGripper_GetResult_Request;

// Struct for a sequence of tiago_behavior_tree__action__OpenGripper_GetResult_Request.
typedef struct tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence
{
  tiago_behavior_tree__action__OpenGripper_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tiago_behavior_tree/action/detail/open_gripper__struct.h"

/// Struct defined in action/OpenGripper in the package tiago_behavior_tree.
typedef struct tiago_behavior_tree__action__OpenGripper_GetResult_Response
{
  int8_t status;
  tiago_behavior_tree__action__OpenGripper_Result result;
} tiago_behavior_tree__action__OpenGripper_GetResult_Response;

// Struct for a sequence of tiago_behavior_tree__action__OpenGripper_GetResult_Response.
typedef struct tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence
{
  tiago_behavior_tree__action__OpenGripper_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tiago_behavior_tree/action/detail/open_gripper__struct.h"

/// Struct defined in action/OpenGripper in the package tiago_behavior_tree.
typedef struct tiago_behavior_tree__action__OpenGripper_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tiago_behavior_tree__action__OpenGripper_Feedback feedback;
} tiago_behavior_tree__action__OpenGripper_FeedbackMessage;

// Struct for a sequence of tiago_behavior_tree__action__OpenGripper_FeedbackMessage.
typedef struct tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence
{
  tiago_behavior_tree__action__OpenGripper_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__STRUCT_H_
