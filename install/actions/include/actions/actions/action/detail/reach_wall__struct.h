// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from actions:action/ReachWall.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS__ACTION__DETAIL__REACH_WALL__STRUCT_H_
#define ACTIONS__ACTION__DETAIL__REACH_WALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ReachWall in the package actions.
typedef struct actions__action__ReachWall_Goal
{
  float target_distance;
} actions__action__ReachWall_Goal;

// Struct for a sequence of actions__action__ReachWall_Goal.
typedef struct actions__action__ReachWall_Goal__Sequence
{
  actions__action__ReachWall_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__ReachWall_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ReachWall in the package actions.
typedef struct actions__action__ReachWall_Result
{
  bool reached;
} actions__action__ReachWall_Result;

// Struct for a sequence of actions__action__ReachWall_Result.
typedef struct actions__action__ReachWall_Result__Sequence
{
  actions__action__ReachWall_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__ReachWall_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ReachWall in the package actions.
typedef struct actions__action__ReachWall_Feedback
{
  float remaining_distance;
} actions__action__ReachWall_Feedback;

// Struct for a sequence of actions__action__ReachWall_Feedback.
typedef struct actions__action__ReachWall_Feedback__Sequence
{
  actions__action__ReachWall_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__ReachWall_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "actions/action/detail/reach_wall__struct.h"

/// Struct defined in action/ReachWall in the package actions.
typedef struct actions__action__ReachWall_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  actions__action__ReachWall_Goal goal;
} actions__action__ReachWall_SendGoal_Request;

// Struct for a sequence of actions__action__ReachWall_SendGoal_Request.
typedef struct actions__action__ReachWall_SendGoal_Request__Sequence
{
  actions__action__ReachWall_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__ReachWall_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ReachWall in the package actions.
typedef struct actions__action__ReachWall_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} actions__action__ReachWall_SendGoal_Response;

// Struct for a sequence of actions__action__ReachWall_SendGoal_Response.
typedef struct actions__action__ReachWall_SendGoal_Response__Sequence
{
  actions__action__ReachWall_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__ReachWall_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ReachWall in the package actions.
typedef struct actions__action__ReachWall_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} actions__action__ReachWall_GetResult_Request;

// Struct for a sequence of actions__action__ReachWall_GetResult_Request.
typedef struct actions__action__ReachWall_GetResult_Request__Sequence
{
  actions__action__ReachWall_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__ReachWall_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "actions/action/detail/reach_wall__struct.h"

/// Struct defined in action/ReachWall in the package actions.
typedef struct actions__action__ReachWall_GetResult_Response
{
  int8_t status;
  actions__action__ReachWall_Result result;
} actions__action__ReachWall_GetResult_Response;

// Struct for a sequence of actions__action__ReachWall_GetResult_Response.
typedef struct actions__action__ReachWall_GetResult_Response__Sequence
{
  actions__action__ReachWall_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__ReachWall_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "actions/action/detail/reach_wall__struct.h"

/// Struct defined in action/ReachWall in the package actions.
typedef struct actions__action__ReachWall_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  actions__action__ReachWall_Feedback feedback;
} actions__action__ReachWall_FeedbackMessage;

// Struct for a sequence of actions__action__ReachWall_FeedbackMessage.
typedef struct actions__action__ReachWall_FeedbackMessage__Sequence
{
  actions__action__ReachWall_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} actions__action__ReachWall_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTIONS__ACTION__DETAIL__REACH_WALL__STRUCT_H_
