// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/MoveToPose.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in srv/MoveToPose in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__MoveToPose_Request
{
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
} harvest_interfaces__srv__MoveToPose_Request;

// Struct for a sequence of harvest_interfaces__srv__MoveToPose_Request.
typedef struct harvest_interfaces__srv__MoveToPose_Request__Sequence
{
  harvest_interfaces__srv__MoveToPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__MoveToPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'reverse_traj'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in srv/MoveToPose in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__MoveToPose_Response
{
  bool result;
  std_msgs__msg__Float32MultiArray reverse_traj;
} harvest_interfaces__srv__MoveToPose_Response;

// Struct for a sequence of harvest_interfaces__srv__MoveToPose_Response.
typedef struct harvest_interfaces__srv__MoveToPose_Response__Sequence
{
  harvest_interfaces__srv__MoveToPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__MoveToPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_H_
