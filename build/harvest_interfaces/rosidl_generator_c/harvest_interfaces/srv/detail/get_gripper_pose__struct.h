// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/GetGripperPose.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__GET_GRIPPER_POSE__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__GET_GRIPPER_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetGripperPose in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__GetGripperPose_Request
{
  uint8_t structure_needs_at_least_one_member;
} harvest_interfaces__srv__GetGripperPose_Request;

// Struct for a sequence of harvest_interfaces__srv__GetGripperPose_Request.
typedef struct harvest_interfaces__srv__GetGripperPose_Request__Sequence
{
  harvest_interfaces__srv__GetGripperPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__GetGripperPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/GetGripperPose in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__GetGripperPose_Response
{
  geometry_msgs__msg__Point point;
} harvest_interfaces__srv__GetGripperPose_Response;

// Struct for a sequence of harvest_interfaces__srv__GetGripperPose_Response.
typedef struct harvest_interfaces__srv__GetGripperPose_Response__Sequence
{
  harvest_interfaces__srv__GetGripperPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__GetGripperPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__GET_GRIPPER_POSE__STRUCT_H_
