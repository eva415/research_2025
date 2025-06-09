// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/ApplePrediction.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__APPLE_PREDICTION__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__APPLE_PREDICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ApplePrediction in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__ApplePrediction_Request
{
  uint8_t structure_needs_at_least_one_member;
} harvest_interfaces__srv__ApplePrediction_Request;

// Struct for a sequence of harvest_interfaces__srv__ApplePrediction_Request.
typedef struct harvest_interfaces__srv__ApplePrediction_Request__Sequence
{
  harvest_interfaces__srv__ApplePrediction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__ApplePrediction_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'apple_poses'
#include "geometry_msgs/msg/detail/pose_array__struct.h"

/// Struct defined in srv/ApplePrediction in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__ApplePrediction_Response
{
  geometry_msgs__msg__PoseArray apple_poses;
} harvest_interfaces__srv__ApplePrediction_Response;

// Struct for a sequence of harvest_interfaces__srv__ApplePrediction_Response.
typedef struct harvest_interfaces__srv__ApplePrediction_Response__Sequence
{
  harvest_interfaces__srv__ApplePrediction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__ApplePrediction_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__APPLE_PREDICTION__STRUCT_H_
