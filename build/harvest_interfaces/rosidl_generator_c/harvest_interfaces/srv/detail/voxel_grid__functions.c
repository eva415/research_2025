// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from harvest_interfaces:srv/VoxelGrid.idl
// generated code does not contain a copyright notice
#include "harvest_interfaces/srv/detail/voxel_grid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
harvest_interfaces__srv__VoxelGrid_Request__init(harvest_interfaces__srv__VoxelGrid_Request * msg)
{
  if (!msg) {
    return false;
  }
  // voxel_size
  return true;
}

void
harvest_interfaces__srv__VoxelGrid_Request__fini(harvest_interfaces__srv__VoxelGrid_Request * msg)
{
  if (!msg) {
    return;
  }
  // voxel_size
}

bool
harvest_interfaces__srv__VoxelGrid_Request__are_equal(const harvest_interfaces__srv__VoxelGrid_Request * lhs, const harvest_interfaces__srv__VoxelGrid_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // voxel_size
  if (lhs->voxel_size != rhs->voxel_size) {
    return false;
  }
  return true;
}

bool
harvest_interfaces__srv__VoxelGrid_Request__copy(
  const harvest_interfaces__srv__VoxelGrid_Request * input,
  harvest_interfaces__srv__VoxelGrid_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // voxel_size
  output->voxel_size = input->voxel_size;
  return true;
}

harvest_interfaces__srv__VoxelGrid_Request *
harvest_interfaces__srv__VoxelGrid_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__srv__VoxelGrid_Request * msg = (harvest_interfaces__srv__VoxelGrid_Request *)allocator.allocate(sizeof(harvest_interfaces__srv__VoxelGrid_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__srv__VoxelGrid_Request));
  bool success = harvest_interfaces__srv__VoxelGrid_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__srv__VoxelGrid_Request__destroy(harvest_interfaces__srv__VoxelGrid_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__srv__VoxelGrid_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__srv__VoxelGrid_Request__Sequence__init(harvest_interfaces__srv__VoxelGrid_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__srv__VoxelGrid_Request * data = NULL;

  if (size) {
    data = (harvest_interfaces__srv__VoxelGrid_Request *)allocator.zero_allocate(size, sizeof(harvest_interfaces__srv__VoxelGrid_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__srv__VoxelGrid_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__srv__VoxelGrid_Request__fini(&data[i - 1]);
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
harvest_interfaces__srv__VoxelGrid_Request__Sequence__fini(harvest_interfaces__srv__VoxelGrid_Request__Sequence * array)
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
      harvest_interfaces__srv__VoxelGrid_Request__fini(&array->data[i]);
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

harvest_interfaces__srv__VoxelGrid_Request__Sequence *
harvest_interfaces__srv__VoxelGrid_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__srv__VoxelGrid_Request__Sequence * array = (harvest_interfaces__srv__VoxelGrid_Request__Sequence *)allocator.allocate(sizeof(harvest_interfaces__srv__VoxelGrid_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__srv__VoxelGrid_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__srv__VoxelGrid_Request__Sequence__destroy(harvest_interfaces__srv__VoxelGrid_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__srv__VoxelGrid_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__srv__VoxelGrid_Request__Sequence__are_equal(const harvest_interfaces__srv__VoxelGrid_Request__Sequence * lhs, const harvest_interfaces__srv__VoxelGrid_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__srv__VoxelGrid_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__srv__VoxelGrid_Request__Sequence__copy(
  const harvest_interfaces__srv__VoxelGrid_Request__Sequence * input,
  harvest_interfaces__srv__VoxelGrid_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__srv__VoxelGrid_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__srv__VoxelGrid_Request * data =
      (harvest_interfaces__srv__VoxelGrid_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__srv__VoxelGrid_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__srv__VoxelGrid_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__srv__VoxelGrid_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `voxel_centers`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `voxel_colors`
#include "std_msgs/msg/detail/color_rgba__functions.h"

bool
harvest_interfaces__srv__VoxelGrid_Response__init(harvest_interfaces__srv__VoxelGrid_Response * msg)
{
  if (!msg) {
    return false;
  }
  // voxel_centers
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->voxel_centers, 0)) {
    harvest_interfaces__srv__VoxelGrid_Response__fini(msg);
    return false;
  }
  // voxel_colors
  if (!std_msgs__msg__ColorRGBA__Sequence__init(&msg->voxel_colors, 0)) {
    harvest_interfaces__srv__VoxelGrid_Response__fini(msg);
    return false;
  }
  return true;
}

void
harvest_interfaces__srv__VoxelGrid_Response__fini(harvest_interfaces__srv__VoxelGrid_Response * msg)
{
  if (!msg) {
    return;
  }
  // voxel_centers
  geometry_msgs__msg__Point__Sequence__fini(&msg->voxel_centers);
  // voxel_colors
  std_msgs__msg__ColorRGBA__Sequence__fini(&msg->voxel_colors);
}

bool
harvest_interfaces__srv__VoxelGrid_Response__are_equal(const harvest_interfaces__srv__VoxelGrid_Response * lhs, const harvest_interfaces__srv__VoxelGrid_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // voxel_centers
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->voxel_centers), &(rhs->voxel_centers)))
  {
    return false;
  }
  // voxel_colors
  if (!std_msgs__msg__ColorRGBA__Sequence__are_equal(
      &(lhs->voxel_colors), &(rhs->voxel_colors)))
  {
    return false;
  }
  return true;
}

bool
harvest_interfaces__srv__VoxelGrid_Response__copy(
  const harvest_interfaces__srv__VoxelGrid_Response * input,
  harvest_interfaces__srv__VoxelGrid_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // voxel_centers
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->voxel_centers), &(output->voxel_centers)))
  {
    return false;
  }
  // voxel_colors
  if (!std_msgs__msg__ColorRGBA__Sequence__copy(
      &(input->voxel_colors), &(output->voxel_colors)))
  {
    return false;
  }
  return true;
}

harvest_interfaces__srv__VoxelGrid_Response *
harvest_interfaces__srv__VoxelGrid_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__srv__VoxelGrid_Response * msg = (harvest_interfaces__srv__VoxelGrid_Response *)allocator.allocate(sizeof(harvest_interfaces__srv__VoxelGrid_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(harvest_interfaces__srv__VoxelGrid_Response));
  bool success = harvest_interfaces__srv__VoxelGrid_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
harvest_interfaces__srv__VoxelGrid_Response__destroy(harvest_interfaces__srv__VoxelGrid_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    harvest_interfaces__srv__VoxelGrid_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
harvest_interfaces__srv__VoxelGrid_Response__Sequence__init(harvest_interfaces__srv__VoxelGrid_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__srv__VoxelGrid_Response * data = NULL;

  if (size) {
    data = (harvest_interfaces__srv__VoxelGrid_Response *)allocator.zero_allocate(size, sizeof(harvest_interfaces__srv__VoxelGrid_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = harvest_interfaces__srv__VoxelGrid_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        harvest_interfaces__srv__VoxelGrid_Response__fini(&data[i - 1]);
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
harvest_interfaces__srv__VoxelGrid_Response__Sequence__fini(harvest_interfaces__srv__VoxelGrid_Response__Sequence * array)
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
      harvest_interfaces__srv__VoxelGrid_Response__fini(&array->data[i]);
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

harvest_interfaces__srv__VoxelGrid_Response__Sequence *
harvest_interfaces__srv__VoxelGrid_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  harvest_interfaces__srv__VoxelGrid_Response__Sequence * array = (harvest_interfaces__srv__VoxelGrid_Response__Sequence *)allocator.allocate(sizeof(harvest_interfaces__srv__VoxelGrid_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = harvest_interfaces__srv__VoxelGrid_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
harvest_interfaces__srv__VoxelGrid_Response__Sequence__destroy(harvest_interfaces__srv__VoxelGrid_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    harvest_interfaces__srv__VoxelGrid_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
harvest_interfaces__srv__VoxelGrid_Response__Sequence__are_equal(const harvest_interfaces__srv__VoxelGrid_Response__Sequence * lhs, const harvest_interfaces__srv__VoxelGrid_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!harvest_interfaces__srv__VoxelGrid_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
harvest_interfaces__srv__VoxelGrid_Response__Sequence__copy(
  const harvest_interfaces__srv__VoxelGrid_Response__Sequence * input,
  harvest_interfaces__srv__VoxelGrid_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(harvest_interfaces__srv__VoxelGrid_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    harvest_interfaces__srv__VoxelGrid_Response * data =
      (harvest_interfaces__srv__VoxelGrid_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!harvest_interfaces__srv__VoxelGrid_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          harvest_interfaces__srv__VoxelGrid_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!harvest_interfaces__srv__VoxelGrid_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
