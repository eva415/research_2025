// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/SetValue.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__SET_VALUE__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__SET_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetValue in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__SetValue_Request
{
  double val;
} harvest_interfaces__srv__SetValue_Request;

// Struct for a sequence of harvest_interfaces__srv__SetValue_Request.
typedef struct harvest_interfaces__srv__SetValue_Request__Sequence
{
  harvest_interfaces__srv__SetValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__SetValue_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetValue in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__SetValue_Response
{
  bool success;
} harvest_interfaces__srv__SetValue_Response;

// Struct for a sequence of harvest_interfaces__srv__SetValue_Response.
typedef struct harvest_interfaces__srv__SetValue_Response__Sequence
{
  harvest_interfaces__srv__SetValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__SetValue_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__SET_VALUE__STRUCT_H_
