// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from harvest_interfaces:srv/MoveToPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "harvest_interfaces/srv/detail/move_to_pose__rosidl_typesupport_introspection_c.h"
#include "harvest_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "harvest_interfaces/srv/detail/move_to_pose__functions.h"
#include "harvest_interfaces/srv/detail/move_to_pose__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  harvest_interfaces__srv__MoveToPose_Request__init(message_memory);
}

void harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_fini_function(void * message_memory)
{
  harvest_interfaces__srv__MoveToPose_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_member_array[2] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(harvest_interfaces__srv__MoveToPose_Request, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(harvest_interfaces__srv__MoveToPose_Request, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_members = {
  "harvest_interfaces__srv",  // message namespace
  "MoveToPose_Request",  // message name
  2,  // number of fields
  sizeof(harvest_interfaces__srv__MoveToPose_Request),
  harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_member_array,  // message members
  harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_type_support_handle = {
  0,
  &harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_harvest_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, MoveToPose_Request)() {
  harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_type_support_handle.typesupport_identifier) {
    harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &harvest_interfaces__srv__MoveToPose_Request__rosidl_typesupport_introspection_c__MoveToPose_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "harvest_interfaces/srv/detail/move_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "harvest_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "harvest_interfaces/srv/detail/move_to_pose__functions.h"
// already included above
// #include "harvest_interfaces/srv/detail/move_to_pose__struct.h"


// Include directives for member types
// Member `reverse_traj`
#include "std_msgs/msg/float32_multi_array.h"
// Member `reverse_traj`
#include "std_msgs/msg/detail/float32_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  harvest_interfaces__srv__MoveToPose_Response__init(message_memory);
}

void harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_fini_function(void * message_memory)
{
  harvest_interfaces__srv__MoveToPose_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(harvest_interfaces__srv__MoveToPose_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reverse_traj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(harvest_interfaces__srv__MoveToPose_Response, reverse_traj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_message_members = {
  "harvest_interfaces__srv",  // message namespace
  "MoveToPose_Response",  // message name
  2,  // number of fields
  sizeof(harvest_interfaces__srv__MoveToPose_Response),
  harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_message_member_array,  // message members
  harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_message_type_support_handle = {
  0,
  &harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_harvest_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, MoveToPose_Response)() {
  harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32MultiArray)();
  if (!harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_message_type_support_handle.typesupport_identifier) {
    harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &harvest_interfaces__srv__MoveToPose_Response__rosidl_typesupport_introspection_c__MoveToPose_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "harvest_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "harvest_interfaces/srv/detail/move_to_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers harvest_interfaces__srv__detail__move_to_pose__rosidl_typesupport_introspection_c__MoveToPose_service_members = {
  "harvest_interfaces__srv",  // service namespace
  "MoveToPose",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // harvest_interfaces__srv__detail__move_to_pose__rosidl_typesupport_introspection_c__MoveToPose_Request_message_type_support_handle,
  NULL  // response message
  // harvest_interfaces__srv__detail__move_to_pose__rosidl_typesupport_introspection_c__MoveToPose_Response_message_type_support_handle
};

static rosidl_service_type_support_t harvest_interfaces__srv__detail__move_to_pose__rosidl_typesupport_introspection_c__MoveToPose_service_type_support_handle = {
  0,
  &harvest_interfaces__srv__detail__move_to_pose__rosidl_typesupport_introspection_c__MoveToPose_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, MoveToPose_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, MoveToPose_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_harvest_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, MoveToPose)() {
  if (!harvest_interfaces__srv__detail__move_to_pose__rosidl_typesupport_introspection_c__MoveToPose_service_type_support_handle.typesupport_identifier) {
    harvest_interfaces__srv__detail__move_to_pose__rosidl_typesupport_introspection_c__MoveToPose_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)harvest_interfaces__srv__detail__move_to_pose__rosidl_typesupport_introspection_c__MoveToPose_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, MoveToPose_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, MoveToPose_Response)()->data;
  }

  return &harvest_interfaces__srv__detail__move_to_pose__rosidl_typesupport_introspection_c__MoveToPose_service_type_support_handle;
}
