// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from harvest_interfaces:srv/TrajectoryBetweenPoints.idl
// generated code does not contain a copyright notice
#include "harvest_interfaces/srv/detail/trajectory_between_points__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "harvest_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "harvest_interfaces/srv/detail/trajectory_between_points__struct.h"
#include "harvest_interfaces/srv/detail/trajectory_between_points__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // end_coordinate, start_coordinate

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_harvest_interfaces
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_harvest_interfaces
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_harvest_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _TrajectoryBetweenPoints_Request__ros_msg_type = harvest_interfaces__srv__TrajectoryBetweenPoints_Request;

static bool _TrajectoryBetweenPoints_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryBetweenPoints_Request__ros_msg_type * ros_message = static_cast<const _TrajectoryBetweenPoints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_coordinate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_coordinate, cdr))
    {
      return false;
    }
  }

  // Field name: end_coordinate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->end_coordinate, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrajectoryBetweenPoints_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryBetweenPoints_Request__ros_msg_type * ros_message = static_cast<_TrajectoryBetweenPoints_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: start_coordinate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_coordinate))
    {
      return false;
    }
  }

  // Field name: end_coordinate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->end_coordinate))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_harvest_interfaces
size_t get_serialized_size_harvest_interfaces__srv__TrajectoryBetweenPoints_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryBetweenPoints_Request__ros_msg_type * ros_message = static_cast<const _TrajectoryBetweenPoints_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name start_coordinate

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->start_coordinate), current_alignment);
  // field.name end_coordinate

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->end_coordinate), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryBetweenPoints_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_harvest_interfaces__srv__TrajectoryBetweenPoints_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_harvest_interfaces
size_t max_serialized_size_harvest_interfaces__srv__TrajectoryBetweenPoints_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: start_coordinate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: end_coordinate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = harvest_interfaces__srv__TrajectoryBetweenPoints_Request;
    is_plain =
      (
      offsetof(DataType, end_coordinate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TrajectoryBetweenPoints_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_harvest_interfaces__srv__TrajectoryBetweenPoints_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrajectoryBetweenPoints_Request = {
  "harvest_interfaces::srv",
  "TrajectoryBetweenPoints_Request",
  _TrajectoryBetweenPoints_Request__cdr_serialize,
  _TrajectoryBetweenPoints_Request__cdr_deserialize,
  _TrajectoryBetweenPoints_Request__get_serialized_size,
  _TrajectoryBetweenPoints_Request__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryBetweenPoints_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryBetweenPoints_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, srv, TrajectoryBetweenPoints_Request)() {
  return &_TrajectoryBetweenPoints_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "harvest_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "harvest_interfaces/srv/detail/trajectory_between_points__struct.h"
// already included above
// #include "harvest_interfaces/srv/detail/trajectory_between_points__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TrajectoryBetweenPoints_Response__ros_msg_type = harvest_interfaces__srv__TrajectoryBetweenPoints_Response;

static bool _TrajectoryBetweenPoints_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryBetweenPoints_Response__ros_msg_type * ros_message = static_cast<const _TrajectoryBetweenPoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _TrajectoryBetweenPoints_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryBetweenPoints_Response__ros_msg_type * ros_message = static_cast<_TrajectoryBetweenPoints_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_harvest_interfaces
size_t get_serialized_size_harvest_interfaces__srv__TrajectoryBetweenPoints_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryBetweenPoints_Response__ros_msg_type * ros_message = static_cast<const _TrajectoryBetweenPoints_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryBetweenPoints_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_harvest_interfaces__srv__TrajectoryBetweenPoints_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_harvest_interfaces
size_t max_serialized_size_harvest_interfaces__srv__TrajectoryBetweenPoints_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = harvest_interfaces__srv__TrajectoryBetweenPoints_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TrajectoryBetweenPoints_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_harvest_interfaces__srv__TrajectoryBetweenPoints_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrajectoryBetweenPoints_Response = {
  "harvest_interfaces::srv",
  "TrajectoryBetweenPoints_Response",
  _TrajectoryBetweenPoints_Response__cdr_serialize,
  _TrajectoryBetweenPoints_Response__cdr_deserialize,
  _TrajectoryBetweenPoints_Response__get_serialized_size,
  _TrajectoryBetweenPoints_Response__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryBetweenPoints_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryBetweenPoints_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, srv, TrajectoryBetweenPoints_Response)() {
  return &_TrajectoryBetweenPoints_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "harvest_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "harvest_interfaces/srv/trajectory_between_points.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TrajectoryBetweenPoints__callbacks = {
  "harvest_interfaces::srv",
  "TrajectoryBetweenPoints",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, srv, TrajectoryBetweenPoints_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, srv, TrajectoryBetweenPoints_Response)(),
};

static rosidl_service_type_support_t TrajectoryBetweenPoints__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TrajectoryBetweenPoints__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, srv, TrajectoryBetweenPoints)() {
  return &TrajectoryBetweenPoints__handle;
}

#if defined(__cplusplus)
}
#endif
