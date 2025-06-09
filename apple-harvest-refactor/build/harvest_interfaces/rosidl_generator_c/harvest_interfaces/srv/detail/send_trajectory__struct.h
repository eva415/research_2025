// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/SendTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__SEND_TRAJECTORY__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__SEND_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in srv/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__SendTrajectory_Request
{
  std_msgs__msg__Float32MultiArray waypoints;
} harvest_interfaces__srv__SendTrajectory_Request;

// Struct for a sequence of harvest_interfaces__srv__SendTrajectory_Request.
typedef struct harvest_interfaces__srv__SendTrajectory_Request__Sequence
{
  harvest_interfaces__srv__SendTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__SendTrajectory_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__SendTrajectory_Response
{
  /// Response: Success flag
  bool success;
} harvest_interfaces__srv__SendTrajectory_Response;

// Struct for a sequence of harvest_interfaces__srv__SendTrajectory_Response.
typedef struct harvest_interfaces__srv__SendTrajectory_Response__Sequence
{
  harvest_interfaces__srv__SendTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__SendTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__SEND_TRAJECTORY__STRUCT_H_
