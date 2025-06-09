// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:action/EventDetection.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__ACTION__DETAIL__EVENT_DETECTION__STRUCT_H_
#define HARVEST_INTERFACES__ACTION__DETAIL__EVENT_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/EventDetection in the package harvest_interfaces.
typedef struct harvest_interfaces__action__EventDetection_Goal
{
  float failure_ratio;
} harvest_interfaces__action__EventDetection_Goal;

// Struct for a sequence of harvest_interfaces__action__EventDetection_Goal.
typedef struct harvest_interfaces__action__EventDetection_Goal__Sequence
{
  harvest_interfaces__action__EventDetection_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__EventDetection_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/EventDetection in the package harvest_interfaces.
typedef struct harvest_interfaces__action__EventDetection_Result
{
  bool finished;
} harvest_interfaces__action__EventDetection_Result;

// Struct for a sequence of harvest_interfaces__action__EventDetection_Result.
typedef struct harvest_interfaces__action__EventDetection_Result__Sequence
{
  harvest_interfaces__action__EventDetection_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__EventDetection_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/EventDetection in the package harvest_interfaces.
typedef struct harvest_interfaces__action__EventDetection_Feedback
{
  bool listening;
} harvest_interfaces__action__EventDetection_Feedback;

// Struct for a sequence of harvest_interfaces__action__EventDetection_Feedback.
typedef struct harvest_interfaces__action__EventDetection_Feedback__Sequence
{
  harvest_interfaces__action__EventDetection_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__EventDetection_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "harvest_interfaces/action/detail/event_detection__struct.h"

/// Struct defined in action/EventDetection in the package harvest_interfaces.
typedef struct harvest_interfaces__action__EventDetection_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  harvest_interfaces__action__EventDetection_Goal goal;
} harvest_interfaces__action__EventDetection_SendGoal_Request;

// Struct for a sequence of harvest_interfaces__action__EventDetection_SendGoal_Request.
typedef struct harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence
{
  harvest_interfaces__action__EventDetection_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__EventDetection_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/EventDetection in the package harvest_interfaces.
typedef struct harvest_interfaces__action__EventDetection_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} harvest_interfaces__action__EventDetection_SendGoal_Response;

// Struct for a sequence of harvest_interfaces__action__EventDetection_SendGoal_Response.
typedef struct harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence
{
  harvest_interfaces__action__EventDetection_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__EventDetection_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/EventDetection in the package harvest_interfaces.
typedef struct harvest_interfaces__action__EventDetection_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} harvest_interfaces__action__EventDetection_GetResult_Request;

// Struct for a sequence of harvest_interfaces__action__EventDetection_GetResult_Request.
typedef struct harvest_interfaces__action__EventDetection_GetResult_Request__Sequence
{
  harvest_interfaces__action__EventDetection_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__EventDetection_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "harvest_interfaces/action/detail/event_detection__struct.h"

/// Struct defined in action/EventDetection in the package harvest_interfaces.
typedef struct harvest_interfaces__action__EventDetection_GetResult_Response
{
  int8_t status;
  harvest_interfaces__action__EventDetection_Result result;
} harvest_interfaces__action__EventDetection_GetResult_Response;

// Struct for a sequence of harvest_interfaces__action__EventDetection_GetResult_Response.
typedef struct harvest_interfaces__action__EventDetection_GetResult_Response__Sequence
{
  harvest_interfaces__action__EventDetection_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__EventDetection_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "harvest_interfaces/action/detail/event_detection__struct.h"

/// Struct defined in action/EventDetection in the package harvest_interfaces.
typedef struct harvest_interfaces__action__EventDetection_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  harvest_interfaces__action__EventDetection_Feedback feedback;
} harvest_interfaces__action__EventDetection_FeedbackMessage;

// Struct for a sequence of harvest_interfaces__action__EventDetection_FeedbackMessage.
typedef struct harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence
{
  harvest_interfaces__action__EventDetection_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__EventDetection_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__ACTION__DETAIL__EVENT_DETECTION__STRUCT_H_
