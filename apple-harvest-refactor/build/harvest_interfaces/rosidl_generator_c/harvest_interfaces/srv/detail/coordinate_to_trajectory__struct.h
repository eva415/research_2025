// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/CoordinateToTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__COORDINATE_TO_TRAJECTORY__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__COORDINATE_TO_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'coordinate'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/CoordinateToTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__CoordinateToTrajectory_Request
{
  geometry_msgs__msg__Point coordinate;
} harvest_interfaces__srv__CoordinateToTrajectory_Request;

// Struct for a sequence of harvest_interfaces__srv__CoordinateToTrajectory_Request.
typedef struct harvest_interfaces__srv__CoordinateToTrajectory_Request__Sequence
{
  harvest_interfaces__srv__CoordinateToTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__CoordinateToTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in srv/CoordinateToTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__CoordinateToTrajectory_Response
{
  bool success;
  std_msgs__msg__Float32MultiArray waypoints;
} harvest_interfaces__srv__CoordinateToTrajectory_Response;

// Struct for a sequence of harvest_interfaces__srv__CoordinateToTrajectory_Response.
typedef struct harvest_interfaces__srv__CoordinateToTrajectory_Response__Sequence
{
  harvest_interfaces__srv__CoordinateToTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__CoordinateToTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__COORDINATE_TO_TRAJECTORY__STRUCT_H_
