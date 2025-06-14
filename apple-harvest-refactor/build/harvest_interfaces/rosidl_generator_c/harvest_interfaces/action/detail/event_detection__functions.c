// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from harvest_interfaces:action/EventDetection.idl
// generated code does not contain a copyright notice
#include "harvest_interfaces/action/detail/event_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
harvest_interfaces__action__EventDetection_Goal__init(harvest_interfaces__action__EventDetection_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // failure_ratio
  return true;
}

void
harvest_interfaces__action__EventDetection_Goal__fini(harvest_interfaces__action__EventDetection_Goal * msg)
{
  if (!msg) {
    return;
  }
  // failure_ratio
}

bool
harvest_interfaces__action__EventDetection_Goal__are_equal(const harvest_interfaces__action__EventDetection_Goal * lhs, const harvest_interfaces__action__EventDetection_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // failure_ratio
  if (lhs->failure_ratio != rhs->failure_ratio) {
    return false;
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_Goal__copy(
  const harvest_interfaces__action__EventDetection_Goal * input,
  harvest_interfaces__action__EventDetection_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // failure_ratio
  output->failure_ratio = input->failure_ratio;
  return true;
}

harvest_interfaces__action__EventDetection_Goal *
harvest_interfaces__action__EventDetection_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_Goal * msg = (harvest_interfaces__action__EventDetection_Goal *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__action__EventDetection_Goal));
  bool success = harvest_interfaces__action__EventDetection_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__action__EventDetection_Goal__destroy(harvest_interfaces__action__EventDetection_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__action__EventDetection_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__action__EventDetection_Goal__Sequence__init(harvest_interfaces__action__EventDetection_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_Goal * data = NULL;

  if (size) {
    data = (harvest_interfaces__action__EventDetection_Goal *)allocator.zero_allocate(size, sizeof(harvest_interfaces__action__EventDetection_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__action__EventDetection_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__action__EventDetection_Goal__fini(&data[i - 1]);
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
harvest_interfaces__action__EventDetection_Goal__Sequence__fini(harvest_interfaces__action__EventDetection_Goal__Sequence * array)
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
      harvest_interfaces__action__EventDetection_Goal__fini(&array->data[i]);
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

harvest_interfaces__action__EventDetection_Goal__Sequence *
harvest_interfaces__action__EventDetection_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_Goal__Sequence * array = (harvest_interfaces__action__EventDetection_Goal__Sequence *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__action__EventDetection_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__action__EventDetection_Goal__Sequence__destroy(harvest_interfaces__action__EventDetection_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__action__EventDetection_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__action__EventDetection_Goal__Sequence__are_equal(const harvest_interfaces__action__EventDetection_Goal__Sequence * lhs, const harvest_interfaces__action__EventDetection_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_Goal__Sequence__copy(
  const harvest_interfaces__action__EventDetection_Goal__Sequence * input,
  harvest_interfaces__action__EventDetection_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__action__EventDetection_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__action__EventDetection_Goal * data =
      (harvest_interfaces__action__EventDetection_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__action__EventDetection_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__action__EventDetection_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
harvest_interfaces__action__EventDetection_Result__init(harvest_interfaces__action__EventDetection_Result * msg)
{
  if (!msg) {
    return false;
  }
  // finished
  return true;
}

void
harvest_interfaces__action__EventDetection_Result__fini(harvest_interfaces__action__EventDetection_Result * msg)
{
  if (!msg) {
    return;
  }
  // finished
}

bool
harvest_interfaces__action__EventDetection_Result__are_equal(const harvest_interfaces__action__EventDetection_Result * lhs, const harvest_interfaces__action__EventDetection_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // finished
  if (lhs->finished != rhs->finished) {
    return false;
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_Result__copy(
  const harvest_interfaces__action__EventDetection_Result * input,
  harvest_interfaces__action__EventDetection_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // finished
  output->finished = input->finished;
  return true;
}

harvest_interfaces__action__EventDetection_Result *
harvest_interfaces__action__EventDetection_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_Result * msg = (harvest_interfaces__action__EventDetection_Result *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__action__EventDetection_Result));
  bool success = harvest_interfaces__action__EventDetection_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__action__EventDetection_Result__destroy(harvest_interfaces__action__EventDetection_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__action__EventDetection_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__action__EventDetection_Result__Sequence__init(harvest_interfaces__action__EventDetection_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_Result * data = NULL;

  if (size) {
    data = (harvest_interfaces__action__EventDetection_Result *)allocator.zero_allocate(size, sizeof(harvest_interfaces__action__EventDetection_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__action__EventDetection_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__action__EventDetection_Result__fini(&data[i - 1]);
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
harvest_interfaces__action__EventDetection_Result__Sequence__fini(harvest_interfaces__action__EventDetection_Result__Sequence * array)
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
      harvest_interfaces__action__EventDetection_Result__fini(&array->data[i]);
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

harvest_interfaces__action__EventDetection_Result__Sequence *
harvest_interfaces__action__EventDetection_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_Result__Sequence * array = (harvest_interfaces__action__EventDetection_Result__Sequence *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__action__EventDetection_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__action__EventDetection_Result__Sequence__destroy(harvest_interfaces__action__EventDetection_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__action__EventDetection_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__action__EventDetection_Result__Sequence__are_equal(const harvest_interfaces__action__EventDetection_Result__Sequence * lhs, const harvest_interfaces__action__EventDetection_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_Result__Sequence__copy(
  const harvest_interfaces__action__EventDetection_Result__Sequence * input,
  harvest_interfaces__action__EventDetection_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__action__EventDetection_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__action__EventDetection_Result * data =
      (harvest_interfaces__action__EventDetection_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__action__EventDetection_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__action__EventDetection_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
harvest_interfaces__action__EventDetection_Feedback__init(harvest_interfaces__action__EventDetection_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // listening
  return true;
}

void
harvest_interfaces__action__EventDetection_Feedback__fini(harvest_interfaces__action__EventDetection_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // listening
}

bool
harvest_interfaces__action__EventDetection_Feedback__are_equal(const harvest_interfaces__action__EventDetection_Feedback * lhs, const harvest_interfaces__action__EventDetection_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // listening
  if (lhs->listening != rhs->listening) {
    return false;
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_Feedback__copy(
  const harvest_interfaces__action__EventDetection_Feedback * input,
  harvest_interfaces__action__EventDetection_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // listening
  output->listening = input->listening;
  return true;
}

harvest_interfaces__action__EventDetection_Feedback *
harvest_interfaces__action__EventDetection_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_Feedback * msg = (harvest_interfaces__action__EventDetection_Feedback *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__action__EventDetection_Feedback));
  bool success = harvest_interfaces__action__EventDetection_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__action__EventDetection_Feedback__destroy(harvest_interfaces__action__EventDetection_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__action__EventDetection_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__action__EventDetection_Feedback__Sequence__init(harvest_interfaces__action__EventDetection_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_Feedback * data = NULL;

  if (size) {
    data = (harvest_interfaces__action__EventDetection_Feedback *)allocator.zero_allocate(size, sizeof(harvest_interfaces__action__EventDetection_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__action__EventDetection_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__action__EventDetection_Feedback__fini(&data[i - 1]);
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
harvest_interfaces__action__EventDetection_Feedback__Sequence__fini(harvest_interfaces__action__EventDetection_Feedback__Sequence * array)
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
      harvest_interfaces__action__EventDetection_Feedback__fini(&array->data[i]);
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

harvest_interfaces__action__EventDetection_Feedback__Sequence *
harvest_interfaces__action__EventDetection_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_Feedback__Sequence * array = (harvest_interfaces__action__EventDetection_Feedback__Sequence *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__action__EventDetection_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__action__EventDetection_Feedback__Sequence__destroy(harvest_interfaces__action__EventDetection_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__action__EventDetection_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__action__EventDetection_Feedback__Sequence__are_equal(const harvest_interfaces__action__EventDetection_Feedback__Sequence * lhs, const harvest_interfaces__action__EventDetection_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_Feedback__Sequence__copy(
  const harvest_interfaces__action__EventDetection_Feedback__Sequence * input,
  harvest_interfaces__action__EventDetection_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__action__EventDetection_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__action__EventDetection_Feedback * data =
      (harvest_interfaces__action__EventDetection_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__action__EventDetection_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__action__EventDetection_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_Feedback__copy(
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
// #include "harvest_interfaces/action/detail/event_detection__functions.h"

bool
harvest_interfaces__action__EventDetection_SendGoal_Request__init(harvest_interfaces__action__EventDetection_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    harvest_interfaces__action__EventDetection_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!harvest_interfaces__action__EventDetection_Goal__init(&msg->goal)) {
    harvest_interfaces__action__EventDetection_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
harvest_interfaces__action__EventDetection_SendGoal_Request__fini(harvest_interfaces__action__EventDetection_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  harvest_interfaces__action__EventDetection_Goal__fini(&msg->goal);
}

bool
harvest_interfaces__action__EventDetection_SendGoal_Request__are_equal(const harvest_interfaces__action__EventDetection_SendGoal_Request * lhs, const harvest_interfaces__action__EventDetection_SendGoal_Request * rhs)
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
  if (!harvest_interfaces__action__EventDetection_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_SendGoal_Request__copy(
  const harvest_interfaces__action__EventDetection_SendGoal_Request * input,
  harvest_interfaces__action__EventDetection_SendGoal_Request * output)
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
  if (!harvest_interfaces__action__EventDetection_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

harvest_interfaces__action__EventDetection_SendGoal_Request *
harvest_interfaces__action__EventDetection_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_SendGoal_Request * msg = (harvest_interfaces__action__EventDetection_SendGoal_Request *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__action__EventDetection_SendGoal_Request));
  bool success = harvest_interfaces__action__EventDetection_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__action__EventDetection_SendGoal_Request__destroy(harvest_interfaces__action__EventDetection_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__action__EventDetection_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence__init(harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_SendGoal_Request * data = NULL;

  if (size) {
    data = (harvest_interfaces__action__EventDetection_SendGoal_Request *)allocator.zero_allocate(size, sizeof(harvest_interfaces__action__EventDetection_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__action__EventDetection_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__action__EventDetection_SendGoal_Request__fini(&data[i - 1]);
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
harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence__fini(harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence * array)
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
      harvest_interfaces__action__EventDetection_SendGoal_Request__fini(&array->data[i]);
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

harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence *
harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence * array = (harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence__destroy(harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence__are_equal(const harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence * lhs, const harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence__copy(
  const harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence * input,
  harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__action__EventDetection_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__action__EventDetection_SendGoal_Request * data =
      (harvest_interfaces__action__EventDetection_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__action__EventDetection_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__action__EventDetection_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_SendGoal_Request__copy(
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
harvest_interfaces__action__EventDetection_SendGoal_Response__init(harvest_interfaces__action__EventDetection_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    harvest_interfaces__action__EventDetection_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
harvest_interfaces__action__EventDetection_SendGoal_Response__fini(harvest_interfaces__action__EventDetection_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
harvest_interfaces__action__EventDetection_SendGoal_Response__are_equal(const harvest_interfaces__action__EventDetection_SendGoal_Response * lhs, const harvest_interfaces__action__EventDetection_SendGoal_Response * rhs)
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
harvest_interfaces__action__EventDetection_SendGoal_Response__copy(
  const harvest_interfaces__action__EventDetection_SendGoal_Response * input,
  harvest_interfaces__action__EventDetection_SendGoal_Response * output)
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

harvest_interfaces__action__EventDetection_SendGoal_Response *
harvest_interfaces__action__EventDetection_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_SendGoal_Response * msg = (harvest_interfaces__action__EventDetection_SendGoal_Response *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__action__EventDetection_SendGoal_Response));
  bool success = harvest_interfaces__action__EventDetection_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__action__EventDetection_SendGoal_Response__destroy(harvest_interfaces__action__EventDetection_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__action__EventDetection_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence__init(harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_SendGoal_Response * data = NULL;

  if (size) {
    data = (harvest_interfaces__action__EventDetection_SendGoal_Response *)allocator.zero_allocate(size, sizeof(harvest_interfaces__action__EventDetection_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__action__EventDetection_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__action__EventDetection_SendGoal_Response__fini(&data[i - 1]);
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
harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence__fini(harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence * array)
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
      harvest_interfaces__action__EventDetection_SendGoal_Response__fini(&array->data[i]);
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

harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence *
harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence * array = (harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence__destroy(harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence__are_equal(const harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence * lhs, const harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence__copy(
  const harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence * input,
  harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__action__EventDetection_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__action__EventDetection_SendGoal_Response * data =
      (harvest_interfaces__action__EventDetection_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__action__EventDetection_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__action__EventDetection_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_SendGoal_Response__copy(
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
harvest_interfaces__action__EventDetection_GetResult_Request__init(harvest_interfaces__action__EventDetection_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    harvest_interfaces__action__EventDetection_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
harvest_interfaces__action__EventDetection_GetResult_Request__fini(harvest_interfaces__action__EventDetection_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
harvest_interfaces__action__EventDetection_GetResult_Request__are_equal(const harvest_interfaces__action__EventDetection_GetResult_Request * lhs, const harvest_interfaces__action__EventDetection_GetResult_Request * rhs)
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
harvest_interfaces__action__EventDetection_GetResult_Request__copy(
  const harvest_interfaces__action__EventDetection_GetResult_Request * input,
  harvest_interfaces__action__EventDetection_GetResult_Request * output)
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

harvest_interfaces__action__EventDetection_GetResult_Request *
harvest_interfaces__action__EventDetection_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_GetResult_Request * msg = (harvest_interfaces__action__EventDetection_GetResult_Request *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__action__EventDetection_GetResult_Request));
  bool success = harvest_interfaces__action__EventDetection_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__action__EventDetection_GetResult_Request__destroy(harvest_interfaces__action__EventDetection_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__action__EventDetection_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__action__EventDetection_GetResult_Request__Sequence__init(harvest_interfaces__action__EventDetection_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_GetResult_Request * data = NULL;

  if (size) {
    data = (harvest_interfaces__action__EventDetection_GetResult_Request *)allocator.zero_allocate(size, sizeof(harvest_interfaces__action__EventDetection_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__action__EventDetection_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__action__EventDetection_GetResult_Request__fini(&data[i - 1]);
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
harvest_interfaces__action__EventDetection_GetResult_Request__Sequence__fini(harvest_interfaces__action__EventDetection_GetResult_Request__Sequence * array)
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
      harvest_interfaces__action__EventDetection_GetResult_Request__fini(&array->data[i]);
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

harvest_interfaces__action__EventDetection_GetResult_Request__Sequence *
harvest_interfaces__action__EventDetection_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_GetResult_Request__Sequence * array = (harvest_interfaces__action__EventDetection_GetResult_Request__Sequence *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__action__EventDetection_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__action__EventDetection_GetResult_Request__Sequence__destroy(harvest_interfaces__action__EventDetection_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__action__EventDetection_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__action__EventDetection_GetResult_Request__Sequence__are_equal(const harvest_interfaces__action__EventDetection_GetResult_Request__Sequence * lhs, const harvest_interfaces__action__EventDetection_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_GetResult_Request__Sequence__copy(
  const harvest_interfaces__action__EventDetection_GetResult_Request__Sequence * input,
  harvest_interfaces__action__EventDetection_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__action__EventDetection_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__action__EventDetection_GetResult_Request * data =
      (harvest_interfaces__action__EventDetection_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__action__EventDetection_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__action__EventDetection_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_GetResult_Request__copy(
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
// #include "harvest_interfaces/action/detail/event_detection__functions.h"

bool
harvest_interfaces__action__EventDetection_GetResult_Response__init(harvest_interfaces__action__EventDetection_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!harvest_interfaces__action__EventDetection_Result__init(&msg->result)) {
    harvest_interfaces__action__EventDetection_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
harvest_interfaces__action__EventDetection_GetResult_Response__fini(harvest_interfaces__action__EventDetection_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  harvest_interfaces__action__EventDetection_Result__fini(&msg->result);
}

bool
harvest_interfaces__action__EventDetection_GetResult_Response__are_equal(const harvest_interfaces__action__EventDetection_GetResult_Response * lhs, const harvest_interfaces__action__EventDetection_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!harvest_interfaces__action__EventDetection_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_GetResult_Response__copy(
  const harvest_interfaces__action__EventDetection_GetResult_Response * input,
  harvest_interfaces__action__EventDetection_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!harvest_interfaces__action__EventDetection_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

harvest_interfaces__action__EventDetection_GetResult_Response *
harvest_interfaces__action__EventDetection_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_GetResult_Response * msg = (harvest_interfaces__action__EventDetection_GetResult_Response *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__action__EventDetection_GetResult_Response));
  bool success = harvest_interfaces__action__EventDetection_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__action__EventDetection_GetResult_Response__destroy(harvest_interfaces__action__EventDetection_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__action__EventDetection_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__action__EventDetection_GetResult_Response__Sequence__init(harvest_interfaces__action__EventDetection_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_GetResult_Response * data = NULL;

  if (size) {
    data = (harvest_interfaces__action__EventDetection_GetResult_Response *)allocator.zero_allocate(size, sizeof(harvest_interfaces__action__EventDetection_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__action__EventDetection_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__action__EventDetection_GetResult_Response__fini(&data[i - 1]);
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
harvest_interfaces__action__EventDetection_GetResult_Response__Sequence__fini(harvest_interfaces__action__EventDetection_GetResult_Response__Sequence * array)
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
      harvest_interfaces__action__EventDetection_GetResult_Response__fini(&array->data[i]);
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

harvest_interfaces__action__EventDetection_GetResult_Response__Sequence *
harvest_interfaces__action__EventDetection_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_GetResult_Response__Sequence * array = (harvest_interfaces__action__EventDetection_GetResult_Response__Sequence *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__action__EventDetection_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__action__EventDetection_GetResult_Response__Sequence__destroy(harvest_interfaces__action__EventDetection_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__action__EventDetection_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__action__EventDetection_GetResult_Response__Sequence__are_equal(const harvest_interfaces__action__EventDetection_GetResult_Response__Sequence * lhs, const harvest_interfaces__action__EventDetection_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_GetResult_Response__Sequence__copy(
  const harvest_interfaces__action__EventDetection_GetResult_Response__Sequence * input,
  harvest_interfaces__action__EventDetection_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__action__EventDetection_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__action__EventDetection_GetResult_Response * data =
      (harvest_interfaces__action__EventDetection_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__action__EventDetection_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__action__EventDetection_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_GetResult_Response__copy(
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
// #include "harvest_interfaces/action/detail/event_detection__functions.h"

bool
harvest_interfaces__action__EventDetection_FeedbackMessage__init(harvest_interfaces__action__EventDetection_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    harvest_interfaces__action__EventDetection_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!harvest_interfaces__action__EventDetection_Feedback__init(&msg->feedback)) {
    harvest_interfaces__action__EventDetection_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
harvest_interfaces__action__EventDetection_FeedbackMessage__fini(harvest_interfaces__action__EventDetection_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  harvest_interfaces__action__EventDetection_Feedback__fini(&msg->feedback);
}

bool
harvest_interfaces__action__EventDetection_FeedbackMessage__are_equal(const harvest_interfaces__action__EventDetection_FeedbackMessage * lhs, const harvest_interfaces__action__EventDetection_FeedbackMessage * rhs)
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
  if (!harvest_interfaces__action__EventDetection_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_FeedbackMessage__copy(
  const harvest_interfaces__action__EventDetection_FeedbackMessage * input,
  harvest_interfaces__action__EventDetection_FeedbackMessage * output)
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
  if (!harvest_interfaces__action__EventDetection_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

harvest_interfaces__action__EventDetection_FeedbackMessage *
harvest_interfaces__action__EventDetection_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_FeedbackMessage * msg = (harvest_interfaces__action__EventDetection_FeedbackMessage *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__action__EventDetection_FeedbackMessage));
  bool success = harvest_interfaces__action__EventDetection_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__action__EventDetection_FeedbackMessage__destroy(harvest_interfaces__action__EventDetection_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__action__EventDetection_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence__init(harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_FeedbackMessage * data = NULL;

  if (size) {
    data = (harvest_interfaces__action__EventDetection_FeedbackMessage *)allocator.zero_allocate(size, sizeof(harvest_interfaces__action__EventDetection_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__action__EventDetection_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__action__EventDetection_FeedbackMessage__fini(&data[i - 1]);
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
harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence__fini(harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence * array)
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
      harvest_interfaces__action__EventDetection_FeedbackMessage__fini(&array->data[i]);
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

harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence *
harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence * array = (harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence *)allocator.allocate(sizeof(harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence__destroy(harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence__are_equal(const harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence * lhs, const harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence__copy(
  const harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence * input,
  harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__action__EventDetection_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__action__EventDetection_FeedbackMessage * data =
      (harvest_interfaces__action__EventDetection_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__action__EventDetection_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__action__EventDetection_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__action__EventDetection_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
