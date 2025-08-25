// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tiago_behavior_tree:action/OpenGripper.idl
// generated code does not contain a copyright notice
#include "tiago_behavior_tree/action/detail/open_gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tiago_behavior_tree__action__OpenGripper_Goal__init(tiago_behavior_tree__action__OpenGripper_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_Goal__fini(tiago_behavior_tree__action__OpenGripper_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
tiago_behavior_tree__action__OpenGripper_Goal__are_equal(const tiago_behavior_tree__action__OpenGripper_Goal * lhs, const tiago_behavior_tree__action__OpenGripper_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_Goal__copy(
  const tiago_behavior_tree__action__OpenGripper_Goal * input,
  tiago_behavior_tree__action__OpenGripper_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

tiago_behavior_tree__action__OpenGripper_Goal *
tiago_behavior_tree__action__OpenGripper_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_Goal * msg = (tiago_behavior_tree__action__OpenGripper_Goal *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tiago_behavior_tree__action__OpenGripper_Goal));
  bool success = tiago_behavior_tree__action__OpenGripper_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tiago_behavior_tree__action__OpenGripper_Goal__destroy(tiago_behavior_tree__action__OpenGripper_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tiago_behavior_tree__action__OpenGripper_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__init(tiago_behavior_tree__action__OpenGripper_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_Goal * data = NULL;

  if (size) {
    data = (tiago_behavior_tree__action__OpenGripper_Goal *)allocator.zero_allocate(size, sizeof(tiago_behavior_tree__action__OpenGripper_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tiago_behavior_tree__action__OpenGripper_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tiago_behavior_tree__action__OpenGripper_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__fini(tiago_behavior_tree__action__OpenGripper_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tiago_behavior_tree__action__OpenGripper_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tiago_behavior_tree__action__OpenGripper_Goal__Sequence *
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_Goal__Sequence * array = (tiago_behavior_tree__action__OpenGripper_Goal__Sequence *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tiago_behavior_tree__action__OpenGripper_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tiago_behavior_tree__action__OpenGripper_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_Goal__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_Goal__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_Goal__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tiago_behavior_tree__action__OpenGripper_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tiago_behavior_tree__action__OpenGripper_Goal * data =
      (tiago_behavior_tree__action__OpenGripper_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tiago_behavior_tree__action__OpenGripper_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tiago_behavior_tree__action__OpenGripper_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
tiago_behavior_tree__action__OpenGripper_Result__init(tiago_behavior_tree__action__OpenGripper_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    tiago_behavior_tree__action__OpenGripper_Result__fini(msg);
    return false;
  }
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_Result__fini(tiago_behavior_tree__action__OpenGripper_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
tiago_behavior_tree__action__OpenGripper_Result__are_equal(const tiago_behavior_tree__action__OpenGripper_Result * lhs, const tiago_behavior_tree__action__OpenGripper_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_Result__copy(
  const tiago_behavior_tree__action__OpenGripper_Result * input,
  tiago_behavior_tree__action__OpenGripper_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

tiago_behavior_tree__action__OpenGripper_Result *
tiago_behavior_tree__action__OpenGripper_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_Result * msg = (tiago_behavior_tree__action__OpenGripper_Result *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tiago_behavior_tree__action__OpenGripper_Result));
  bool success = tiago_behavior_tree__action__OpenGripper_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tiago_behavior_tree__action__OpenGripper_Result__destroy(tiago_behavior_tree__action__OpenGripper_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tiago_behavior_tree__action__OpenGripper_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tiago_behavior_tree__action__OpenGripper_Result__Sequence__init(tiago_behavior_tree__action__OpenGripper_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_Result * data = NULL;

  if (size) {
    data = (tiago_behavior_tree__action__OpenGripper_Result *)allocator.zero_allocate(size, sizeof(tiago_behavior_tree__action__OpenGripper_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tiago_behavior_tree__action__OpenGripper_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tiago_behavior_tree__action__OpenGripper_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_Result__Sequence__fini(tiago_behavior_tree__action__OpenGripper_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tiago_behavior_tree__action__OpenGripper_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tiago_behavior_tree__action__OpenGripper_Result__Sequence *
tiago_behavior_tree__action__OpenGripper_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_Result__Sequence * array = (tiago_behavior_tree__action__OpenGripper_Result__Sequence *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tiago_behavior_tree__action__OpenGripper_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tiago_behavior_tree__action__OpenGripper_Result__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tiago_behavior_tree__action__OpenGripper_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tiago_behavior_tree__action__OpenGripper_Result__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_Result__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_Result__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_Result__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tiago_behavior_tree__action__OpenGripper_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tiago_behavior_tree__action__OpenGripper_Result * data =
      (tiago_behavior_tree__action__OpenGripper_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tiago_behavior_tree__action__OpenGripper_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tiago_behavior_tree__action__OpenGripper_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
tiago_behavior_tree__action__OpenGripper_Feedback__init(tiago_behavior_tree__action__OpenGripper_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    tiago_behavior_tree__action__OpenGripper_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_Feedback__fini(tiago_behavior_tree__action__OpenGripper_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
tiago_behavior_tree__action__OpenGripper_Feedback__are_equal(const tiago_behavior_tree__action__OpenGripper_Feedback * lhs, const tiago_behavior_tree__action__OpenGripper_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_Feedback__copy(
  const tiago_behavior_tree__action__OpenGripper_Feedback * input,
  tiago_behavior_tree__action__OpenGripper_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tiago_behavior_tree__action__OpenGripper_Feedback *
tiago_behavior_tree__action__OpenGripper_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_Feedback * msg = (tiago_behavior_tree__action__OpenGripper_Feedback *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tiago_behavior_tree__action__OpenGripper_Feedback));
  bool success = tiago_behavior_tree__action__OpenGripper_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tiago_behavior_tree__action__OpenGripper_Feedback__destroy(tiago_behavior_tree__action__OpenGripper_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tiago_behavior_tree__action__OpenGripper_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__init(tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_Feedback * data = NULL;

  if (size) {
    data = (tiago_behavior_tree__action__OpenGripper_Feedback *)allocator.zero_allocate(size, sizeof(tiago_behavior_tree__action__OpenGripper_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tiago_behavior_tree__action__OpenGripper_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tiago_behavior_tree__action__OpenGripper_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__fini(tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tiago_behavior_tree__action__OpenGripper_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tiago_behavior_tree__action__OpenGripper_Feedback__Sequence *
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * array = (tiago_behavior_tree__action__OpenGripper_Feedback__Sequence *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_Feedback__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tiago_behavior_tree__action__OpenGripper_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tiago_behavior_tree__action__OpenGripper_Feedback * data =
      (tiago_behavior_tree__action__OpenGripper_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tiago_behavior_tree__action__OpenGripper_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tiago_behavior_tree__action__OpenGripper_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "tiago_behavior_tree/action/detail/open_gripper__functions.h"

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__init(tiago_behavior_tree__action__OpenGripper_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tiago_behavior_tree__action__OpenGripper_Goal__init(&msg->goal)) {
    tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini(tiago_behavior_tree__action__OpenGripper_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tiago_behavior_tree__action__OpenGripper_Goal__fini(&msg->goal);
}

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__are_equal(const tiago_behavior_tree__action__OpenGripper_SendGoal_Request * lhs, const tiago_behavior_tree__action__OpenGripper_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!tiago_behavior_tree__action__OpenGripper_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__copy(
  const tiago_behavior_tree__action__OpenGripper_SendGoal_Request * input,
  tiago_behavior_tree__action__OpenGripper_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!tiago_behavior_tree__action__OpenGripper_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

tiago_behavior_tree__action__OpenGripper_SendGoal_Request *
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_SendGoal_Request * msg = (tiago_behavior_tree__action__OpenGripper_SendGoal_Request *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Request));
  bool success = tiago_behavior_tree__action__OpenGripper_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__destroy(tiago_behavior_tree__action__OpenGripper_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__init(tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_SendGoal_Request * data = NULL;

  if (size) {
    data = (tiago_behavior_tree__action__OpenGripper_SendGoal_Request *)allocator.zero_allocate(size, sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tiago_behavior_tree__action__OpenGripper_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__fini(tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence *
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * array = (tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tiago_behavior_tree__action__OpenGripper_SendGoal_Request * data =
      (tiago_behavior_tree__action__OpenGripper_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tiago_behavior_tree__action__OpenGripper_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tiago_behavior_tree__action__OpenGripper_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__init(tiago_behavior_tree__action__OpenGripper_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tiago_behavior_tree__action__OpenGripper_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__fini(tiago_behavior_tree__action__OpenGripper_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__are_equal(const tiago_behavior_tree__action__OpenGripper_SendGoal_Response * lhs, const tiago_behavior_tree__action__OpenGripper_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__copy(
  const tiago_behavior_tree__action__OpenGripper_SendGoal_Response * input,
  tiago_behavior_tree__action__OpenGripper_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

tiago_behavior_tree__action__OpenGripper_SendGoal_Response *
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_SendGoal_Response * msg = (tiago_behavior_tree__action__OpenGripper_SendGoal_Response *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Response));
  bool success = tiago_behavior_tree__action__OpenGripper_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__destroy(tiago_behavior_tree__action__OpenGripper_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tiago_behavior_tree__action__OpenGripper_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__init(tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_SendGoal_Response * data = NULL;

  if (size) {
    data = (tiago_behavior_tree__action__OpenGripper_SendGoal_Response *)allocator.zero_allocate(size, sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tiago_behavior_tree__action__OpenGripper_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tiago_behavior_tree__action__OpenGripper_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__fini(tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tiago_behavior_tree__action__OpenGripper_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence *
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * array = (tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tiago_behavior_tree__action__OpenGripper_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tiago_behavior_tree__action__OpenGripper_SendGoal_Response * data =
      (tiago_behavior_tree__action__OpenGripper_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tiago_behavior_tree__action__OpenGripper_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tiago_behavior_tree__action__OpenGripper_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__init(tiago_behavior_tree__action__OpenGripper_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tiago_behavior_tree__action__OpenGripper_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_GetResult_Request__fini(tiago_behavior_tree__action__OpenGripper_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__are_equal(const tiago_behavior_tree__action__OpenGripper_GetResult_Request * lhs, const tiago_behavior_tree__action__OpenGripper_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__copy(
  const tiago_behavior_tree__action__OpenGripper_GetResult_Request * input,
  tiago_behavior_tree__action__OpenGripper_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

tiago_behavior_tree__action__OpenGripper_GetResult_Request *
tiago_behavior_tree__action__OpenGripper_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_GetResult_Request * msg = (tiago_behavior_tree__action__OpenGripper_GetResult_Request *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Request));
  bool success = tiago_behavior_tree__action__OpenGripper_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tiago_behavior_tree__action__OpenGripper_GetResult_Request__destroy(tiago_behavior_tree__action__OpenGripper_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tiago_behavior_tree__action__OpenGripper_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__init(tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_GetResult_Request * data = NULL;

  if (size) {
    data = (tiago_behavior_tree__action__OpenGripper_GetResult_Request *)allocator.zero_allocate(size, sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tiago_behavior_tree__action__OpenGripper_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tiago_behavior_tree__action__OpenGripper_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__fini(tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tiago_behavior_tree__action__OpenGripper_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence *
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * array = (tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tiago_behavior_tree__action__OpenGripper_GetResult_Request * data =
      (tiago_behavior_tree__action__OpenGripper_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tiago_behavior_tree__action__OpenGripper_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tiago_behavior_tree__action__OpenGripper_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "tiago_behavior_tree/action/detail/open_gripper__functions.h"

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__init(tiago_behavior_tree__action__OpenGripper_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tiago_behavior_tree__action__OpenGripper_Result__init(&msg->result)) {
    tiago_behavior_tree__action__OpenGripper_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_GetResult_Response__fini(tiago_behavior_tree__action__OpenGripper_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tiago_behavior_tree__action__OpenGripper_Result__fini(&msg->result);
}

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__are_equal(const tiago_behavior_tree__action__OpenGripper_GetResult_Response * lhs, const tiago_behavior_tree__action__OpenGripper_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!tiago_behavior_tree__action__OpenGripper_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__copy(
  const tiago_behavior_tree__action__OpenGripper_GetResult_Response * input,
  tiago_behavior_tree__action__OpenGripper_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!tiago_behavior_tree__action__OpenGripper_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

tiago_behavior_tree__action__OpenGripper_GetResult_Response *
tiago_behavior_tree__action__OpenGripper_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_GetResult_Response * msg = (tiago_behavior_tree__action__OpenGripper_GetResult_Response *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Response));
  bool success = tiago_behavior_tree__action__OpenGripper_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tiago_behavior_tree__action__OpenGripper_GetResult_Response__destroy(tiago_behavior_tree__action__OpenGripper_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tiago_behavior_tree__action__OpenGripper_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__init(tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_GetResult_Response * data = NULL;

  if (size) {
    data = (tiago_behavior_tree__action__OpenGripper_GetResult_Response *)allocator.zero_allocate(size, sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tiago_behavior_tree__action__OpenGripper_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tiago_behavior_tree__action__OpenGripper_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__fini(tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tiago_behavior_tree__action__OpenGripper_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence *
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * array = (tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tiago_behavior_tree__action__OpenGripper_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tiago_behavior_tree__action__OpenGripper_GetResult_Response * data =
      (tiago_behavior_tree__action__OpenGripper_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tiago_behavior_tree__action__OpenGripper_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tiago_behavior_tree__action__OpenGripper_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tiago_behavior_tree/action/detail/open_gripper__functions.h"

bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__init(tiago_behavior_tree__action__OpenGripper_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tiago_behavior_tree__action__OpenGripper_Feedback__init(&msg->feedback)) {
    tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini(tiago_behavior_tree__action__OpenGripper_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tiago_behavior_tree__action__OpenGripper_Feedback__fini(&msg->feedback);
}

bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__are_equal(const tiago_behavior_tree__action__OpenGripper_FeedbackMessage * lhs, const tiago_behavior_tree__action__OpenGripper_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tiago_behavior_tree__action__OpenGripper_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__copy(
  const tiago_behavior_tree__action__OpenGripper_FeedbackMessage * input,
  tiago_behavior_tree__action__OpenGripper_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tiago_behavior_tree__action__OpenGripper_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tiago_behavior_tree__action__OpenGripper_FeedbackMessage *
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_FeedbackMessage * msg = (tiago_behavior_tree__action__OpenGripper_FeedbackMessage *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tiago_behavior_tree__action__OpenGripper_FeedbackMessage));
  bool success = tiago_behavior_tree__action__OpenGripper_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__destroy(tiago_behavior_tree__action__OpenGripper_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__init(tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_FeedbackMessage * data = NULL;

  if (size) {
    data = (tiago_behavior_tree__action__OpenGripper_FeedbackMessage *)allocator.zero_allocate(size, sizeof(tiago_behavior_tree__action__OpenGripper_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tiago_behavior_tree__action__OpenGripper_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__fini(tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence *
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * array = (tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence *)allocator.allocate(sizeof(tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__destroy(tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__are_equal(const tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * lhs, const tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence__copy(
  const tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * input,
  tiago_behavior_tree__action__OpenGripper_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tiago_behavior_tree__action__OpenGripper_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tiago_behavior_tree__action__OpenGripper_FeedbackMessage * data =
      (tiago_behavior_tree__action__OpenGripper_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tiago_behavior_tree__action__OpenGripper_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tiago_behavior_tree__action__OpenGripper_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tiago_behavior_tree__action__OpenGripper_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
