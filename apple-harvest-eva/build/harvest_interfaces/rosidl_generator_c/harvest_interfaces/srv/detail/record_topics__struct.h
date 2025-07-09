// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/RecordTopics.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__RECORD_TOPICS__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__RECORD_TOPICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topics'
// Member 'file_name_prefix'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RecordTopics in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__RecordTopics_Request
{
  rosidl_runtime_c__String__Sequence topics;
  rosidl_runtime_c__String file_name_prefix;
} harvest_interfaces__srv__RecordTopics_Request;

// Struct for a sequence of harvest_interfaces__srv__RecordTopics_Request.
typedef struct harvest_interfaces__srv__RecordTopics_Request__Sequence
{
  harvest_interfaces__srv__RecordTopics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__RecordTopics_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RecordTopics in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__RecordTopics_Response
{
  bool success;
} harvest_interfaces__srv__RecordTopics_Response;

// Struct for a sequence of harvest_interfaces__srv__RecordTopics_Response.
typedef struct harvest_interfaces__srv__RecordTopics_Response__Sequence
{
  harvest_interfaces__srv__RecordTopics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__RecordTopics_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__RECORD_TOPICS__STRUCT_H_
