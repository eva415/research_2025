// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:action/SendTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__ACTION__DETAIL__SEND_TRAJECTORY__STRUCT_H_
#define HARVEST_INTERFACES__ACTION__DETAIL__SEND_TRAJECTORY__STRUCT_H_

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

/// Struct defined in action/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__action__SendTrajectory_Goal
{
  /// Goal
  std_msgs__msg__Float32MultiArray waypoints;
} harvest_interfaces__action__SendTrajectory_Goal;

// Struct for a sequence of harvest_interfaces__action__SendTrajectory_Goal.
typedef struct harvest_interfaces__action__SendTrajectory_Goal__Sequence
{
  harvest_interfaces__action__SendTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__SendTrajectory_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__action__SendTrajectory_Result
{
  /// Result
  bool success;
} harvest_interfaces__action__SendTrajectory_Result;

// Struct for a sequence of harvest_interfaces__action__SendTrajectory_Result.
typedef struct harvest_interfaces__action__SendTrajectory_Result__Sequence
{
  harvest_interfaces__action__SendTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__SendTrajectory_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__action__SendTrajectory_Feedback
{
  /// Feedback
  float progress;
} harvest_interfaces__action__SendTrajectory_Feedback;

// Struct for a sequence of harvest_interfaces__action__SendTrajectory_Feedback.
typedef struct harvest_interfaces__action__SendTrajectory_Feedback__Sequence
{
  harvest_interfaces__action__SendTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__SendTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "harvest_interfaces/action/detail/send_trajectory__struct.h"

/// Struct defined in action/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__action__SendTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  harvest_interfaces__action__SendTrajectory_Goal goal;
} harvest_interfaces__action__SendTrajectory_SendGoal_Request;

// Struct for a sequence of harvest_interfaces__action__SendTrajectory_SendGoal_Request.
typedef struct harvest_interfaces__action__SendTrajectory_SendGoal_Request__Sequence
{
  harvest_interfaces__action__SendTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__SendTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__action__SendTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} harvest_interfaces__action__SendTrajectory_SendGoal_Response;

// Struct for a sequence of harvest_interfaces__action__SendTrajectory_SendGoal_Response.
typedef struct harvest_interfaces__action__SendTrajectory_SendGoal_Response__Sequence
{
  harvest_interfaces__action__SendTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__SendTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__action__SendTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} harvest_interfaces__action__SendTrajectory_GetResult_Request;

// Struct for a sequence of harvest_interfaces__action__SendTrajectory_GetResult_Request.
typedef struct harvest_interfaces__action__SendTrajectory_GetResult_Request__Sequence
{
  harvest_interfaces__action__SendTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__SendTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__struct.h"

/// Struct defined in action/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__action__SendTrajectory_GetResult_Response
{
  int8_t status;
  harvest_interfaces__action__SendTrajectory_Result result;
} harvest_interfaces__action__SendTrajectory_GetResult_Response;

// Struct for a sequence of harvest_interfaces__action__SendTrajectory_GetResult_Response.
typedef struct harvest_interfaces__action__SendTrajectory_GetResult_Response__Sequence
{
  harvest_interfaces__action__SendTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__SendTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__struct.h"

/// Struct defined in action/SendTrajectory in the package harvest_interfaces.
typedef struct harvest_interfaces__action__SendTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  harvest_interfaces__action__SendTrajectory_Feedback feedback;
} harvest_interfaces__action__SendTrajectory_FeedbackMessage;

// Struct for a sequence of harvest_interfaces__action__SendTrajectory_FeedbackMessage.
typedef struct harvest_interfaces__action__SendTrajectory_FeedbackMessage__Sequence
{
  harvest_interfaces__action__SendTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__action__SendTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__ACTION__DETAIL__SEND_TRAJECTORY__STRUCT_H_
