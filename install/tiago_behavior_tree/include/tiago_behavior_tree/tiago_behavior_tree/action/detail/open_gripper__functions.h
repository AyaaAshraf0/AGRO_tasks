// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tiago_behavior_tree:action/OpenGripper.idl
// generated code does not contain a copyright notice

#ifndef TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__FUNCTIONS_H_
#define TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tiago_behavior_tree/msg/rosidl_generator_c__visibility_control.h"

#include "tiago_behavior_tree/action/detail/open_gripper__struct.h"

/// Initialize action/OpenGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tiago_behavior_tree__action__OpenGripper_Goal
 * )) before or use
 * tiago_behavior_tree__action__OpenGripper_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Goal__init(tiago_behavior_tree__action__OpenGripper_Goal * msg);

/// Finalize action/OpenGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Goal__fini(tiago_behavior_tree__action__OpenGripper_Goal * msg);

/// Create action/OpenGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tiago_behavior_tree__action__OpenGripper_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_Goal *
tiago_behavior_tree__action__OpenGripper_Goal__create();

/// Destroy action/OpenGripper message.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Goal__destroy(tiago_behavior_tree__action__OpenGripper_Goal * msg);

/// Check for action/OpenGripper message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Goal__are_equal(const tiago_behavior_tree__action__OpenGripper_Goal * lhs, const tiago_behavior_tree__action__OpenGripper_Goal * rhs);

/// Copy a action/OpenGripper message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Goal__copy(
  const tiago_behavior_tree__action__OpenGripper_Goal * input,
  tiago_behavior_tree__action__OpenGripper_Goal * output);

/// Initialize array of action/OpenGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * tiago_behavior_tree__action__OpenGripper_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__init(tiago_behavior_tree__action__OpenGripper_Goal__Sequence * array, size_t size);

/// Finalize array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__fini(tiago_behavior_tree__action__OpenGripper_Goal__Sequence * array);

/// Create array of action/OpenGripper messages.
/**
 * It allocates the memory for the array and calls
 * tiago_behavior_tree__action__OpenGripper_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_Goal__Sequence *
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__create(size_t size);

/// Destroy array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_Goal__Sequence * array);

/// Check for action/OpenGripper message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_Goal__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_Goal__Sequence * rhs);

/// Copy an array of action/OpenGripper messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_Goal__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_Goal__Sequence * output);

/// Initialize action/OpenGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tiago_behavior_tree__action__OpenGripper_Result
 * )) before or use
 * tiago_behavior_tree__action__OpenGripper_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Result__init(tiago_behavior_tree__action__OpenGripper_Result * msg);

/// Finalize action/OpenGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Result__fini(tiago_behavior_tree__action__OpenGripper_Result * msg);

/// Create action/OpenGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tiago_behavior_tree__action__OpenGripper_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_Result *
tiago_behavior_tree__action__OpenGripper_Result__create();

/// Destroy action/OpenGripper message.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Result__destroy(tiago_behavior_tree__action__OpenGripper_Result * msg);

/// Check for action/OpenGripper message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Result__are_equal(const tiago_behavior_tree__action__OpenGripper_Result * lhs, const tiago_behavior_tree__action__OpenGripper_Result * rhs);

/// Copy a action/OpenGripper message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Result__copy(
  const tiago_behavior_tree__action__OpenGripper_Result * input,
  tiago_behavior_tree__action__OpenGripper_Result * output);

/// Initialize array of action/OpenGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * tiago_behavior_tree__action__OpenGripper_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Result__Sequence__init(tiago_behavior_tree__action__OpenGripper_Result__Sequence * array, size_t size);

/// Finalize array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Result__Sequence__fini(tiago_behavior_tree__action__OpenGripper_Result__Sequence * array);

/// Create array of action/OpenGripper messages.
/**
 * It allocates the memory for the array and calls
 * tiago_behavior_tree__action__OpenGripper_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_Result__Sequence *
tiago_behavior_tree__action__OpenGripper_Result__Sequence__create(size_t size);

/// Destroy array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Result__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_Result__Sequence * array);

/// Check for action/OpenGripper message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Result__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_Result__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_Result__Sequence * rhs);

/// Copy an array of action/OpenGripper messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Result__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_Result__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_Result__Sequence * output);

/// Initialize action/OpenGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tiago_behavior_tree__action__OpenGripper_Feedback
 * )) before or use
 * tiago_behavior_tree__action__OpenGripper_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Feedback__init(tiago_behavior_tree__action__OpenGripper_Feedback * msg);

/// Finalize action/OpenGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Feedback__fini(tiago_behavior_tree__action__OpenGripper_Feedback * msg);

/// Create action/OpenGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tiago_behavior_tree__action__OpenGripper_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_Feedback *
tiago_behavior_tree__action__OpenGripper_Feedback__create();

/// Destroy action/OpenGripper message.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Feedback__destroy(tiago_behavior_tree__action__OpenGripper_Feedback * msg);

/// Check for action/OpenGripper message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Feedback__are_equal(const tiago_behavior_tree__action__OpenGripper_Feedback * lhs, const tiago_behavior_tree__action__OpenGripper_Feedback * rhs);

/// Copy a action/OpenGripper message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Feedback__copy(
  const tiago_behavior_tree__action__OpenGripper_Feedback * input,
  tiago_behavior_tree__action__OpenGripper_Feedback * output);

/// Initialize array of action/OpenGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * tiago_behavior_tree__action__OpenGripper_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__init(tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * array, size_t size);

/// Finalize array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__fini(tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * array);

/// Create array of action/OpenGripper messages.
/**
 * It allocates the memory for the array and calls
 * tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence *
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__create(size_t size);

/// Destroy array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * array);

/// Check for action/OpenGripper message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * rhs);

/// Copy an array of action/OpenGripper messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * output);

/// Initialize action/OpenGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Request
 * )) before or use
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__init(tiago_behavior_tree__action__OpenGripper_SendGoal_Request * msg);

/// Finalize action/OpenGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini(tiago_behavior_tree__action__OpenGripper_SendGoal_Request * msg);

/// Create action/OpenGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_SendGoal_Request *
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__create();

/// Destroy action/OpenGripper message.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__destroy(tiago_behavior_tree__action__OpenGripper_SendGoal_Request * msg);

/// Check for action/OpenGripper message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__are_equal(const tiago_behavior_tree__action__OpenGripper_SendGoal_Request * lhs, const tiago_behavior_tree__action__OpenGripper_SendGoal_Request * rhs);

/// Copy a action/OpenGripper message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__copy(
  const tiago_behavior_tree__action__OpenGripper_SendGoal_Request * input,
  tiago_behavior_tree__action__OpenGripper_SendGoal_Request * output);

/// Initialize array of action/OpenGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__init(tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__fini(tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * array);

/// Create array of action/OpenGripper messages.
/**
 * It allocates the memory for the array and calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence *
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * array);

/// Check for action/OpenGripper message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/OpenGripper messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * output);

/// Initialize action/OpenGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Response
 * )) before or use
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__init(tiago_behavior_tree__action__OpenGripper_SendGoal_Response * msg);

/// Finalize action/OpenGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__fini(tiago_behavior_tree__action__OpenGripper_SendGoal_Response * msg);

/// Create action/OpenGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_SendGoal_Response *
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__create();

/// Destroy action/OpenGripper message.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__destroy(tiago_behavior_tree__action__OpenGripper_SendGoal_Response * msg);

/// Check for action/OpenGripper message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__are_equal(const tiago_behavior_tree__action__OpenGripper_SendGoal_Response * lhs, const tiago_behavior_tree__action__OpenGripper_SendGoal_Response * rhs);

/// Copy a action/OpenGripper message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__copy(
  const tiago_behavior_tree__action__OpenGripper_SendGoal_Response * input,
  tiago_behavior_tree__action__OpenGripper_SendGoal_Response * output);

/// Initialize array of action/OpenGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__init(tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__fini(tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * array);

/// Create array of action/OpenGripper messages.
/**
 * It allocates the memory for the array and calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence *
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * array);

/// Check for action/OpenGripper message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/OpenGripper messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * output);

/// Initialize action/OpenGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tiago_behavior_tree__action__OpenGripper_GetResult_Request
 * )) before or use
 * tiago_behavior_tree__action__OpenGripper_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__init(tiago_behavior_tree__action__OpenGripper_GetResult_Request * msg);

/// Finalize action/OpenGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_GetResult_Request__fini(tiago_behavior_tree__action__OpenGripper_GetResult_Request * msg);

/// Create action/OpenGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_GetResult_Request *
tiago_behavior_tree__action__OpenGripper_GetResult_Request__create();

/// Destroy action/OpenGripper message.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_GetResult_Request__destroy(tiago_behavior_tree__action__OpenGripper_GetResult_Request * msg);

/// Check for action/OpenGripper message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__are_equal(const tiago_behavior_tree__action__OpenGripper_GetResult_Request * lhs, const tiago_behavior_tree__action__OpenGripper_GetResult_Request * rhs);

/// Copy a action/OpenGripper message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__copy(
  const tiago_behavior_tree__action__OpenGripper_GetResult_Request * input,
  tiago_behavior_tree__action__OpenGripper_GetResult_Request * output);

/// Initialize array of action/OpenGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__init(tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__fini(tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * array);

/// Create array of action/OpenGripper messages.
/**
 * It allocates the memory for the array and calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence *
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * array);

/// Check for action/OpenGripper message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * rhs);

/// Copy an array of action/OpenGripper messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * output);

/// Initialize action/OpenGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tiago_behavior_tree__action__OpenGripper_GetResult_Response
 * )) before or use
 * tiago_behavior_tree__action__OpenGripper_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__init(tiago_behavior_tree__action__OpenGripper_GetResult_Response * msg);

/// Finalize action/OpenGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_GetResult_Response__fini(tiago_behavior_tree__action__OpenGripper_GetResult_Response * msg);

/// Create action/OpenGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_GetResult_Response *
tiago_behavior_tree__action__OpenGripper_GetResult_Response__create();

/// Destroy action/OpenGripper message.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_GetResult_Response__destroy(tiago_behavior_tree__action__OpenGripper_GetResult_Response * msg);

/// Check for action/OpenGripper message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__are_equal(const tiago_behavior_tree__action__OpenGripper_GetResult_Response * lhs, const tiago_behavior_tree__action__OpenGripper_GetResult_Response * rhs);

/// Copy a action/OpenGripper message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__copy(
  const tiago_behavior_tree__action__OpenGripper_GetResult_Response * input,
  tiago_behavior_tree__action__OpenGripper_GetResult_Response * output);

/// Initialize array of action/OpenGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__init(tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__fini(tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * array);

/// Create array of action/OpenGripper messages.
/**
 * It allocates the memory for the array and calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence *
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * array);

/// Check for action/OpenGripper message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * rhs);

/// Copy an array of action/OpenGripper messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * output);

/// Initialize action/OpenGripper message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tiago_behavior_tree__action__OpenGripper_FeedbackMessage
 * )) before or use
 * tiago_behavior_tree__action__OpenGripper_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__init(tiago_behavior_tree__action__OpenGripper_FeedbackMessage * msg);

/// Finalize action/OpenGripper message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini(tiago_behavior_tree__action__OpenGripper_FeedbackMessage * msg);

/// Create action/OpenGripper message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tiago_behavior_tree__action__OpenGripper_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_FeedbackMessage *
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__create();

/// Destroy action/OpenGripper message.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__destroy(tiago_behavior_tree__action__OpenGripper_FeedbackMessage * msg);

/// Check for action/OpenGripper message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__are_equal(const tiago_behavior_tree__action__OpenGripper_FeedbackMessage * lhs, const tiago_behavior_tree__action__OpenGripper_FeedbackMessage * rhs);

/// Copy a action/OpenGripper message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__copy(
  const tiago_behavior_tree__action__OpenGripper_FeedbackMessage * input,
  tiago_behavior_tree__action__OpenGripper_FeedbackMessage * output);

/// Initialize array of action/OpenGripper messages.
/**
 * It allocates the memory for the number of elements and calls
 * tiago_behavior_tree__action__OpenGripper_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__init(tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__fini(tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * array);

/// Create array of action/OpenGripper messages.
/**
 * It allocates the memory for the array and calls
 * tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence *
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/OpenGripper messages.
/**
 * It calls
 * tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
void
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * array);

/// Check for action/OpenGripper message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/OpenGripper messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tiago_behavior_tree
bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIAGO_BEHAVIOR_TREE__ACTION__DETAIL__OPEN_GRIPPER__FUNCTIONS_H_
