// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from harvest_interfaces:srv/VoxelGrid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "harvest_interfaces/srv/detail/voxel_grid__rosidl_typesupport_introspection_c.h"
#include "harvest_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "harvest_interfaces/srv/detail/voxel_grid__functions.h"
#include "harvest_interfaces/srv/detail/voxel_grid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  harvest_interfaces__srv__VoxelGrid_Request__init(message_memory);
}

void harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_fini_function(void * message_memory)
{
  harvest_interfaces__srv__VoxelGrid_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_message_member_array[1] = {
  {
    "voxel_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(harvest_interfaces__srv__VoxelGrid_Request, voxel_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_message_members = {
  "harvest_interfaces__srv",  // message namespace
  "VoxelGrid_Request",  // message name
  1,  // number of fields
  sizeof(harvest_interfaces__srv__VoxelGrid_Request),
  harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_message_member_array,  // message members
  harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_message_type_support_handle = {
  0,
  &harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_harvest_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, VoxelGrid_Request)() {
  if (!harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_message_type_support_handle.typesupport_identifier) {
    harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &harvest_interfaces__srv__VoxelGrid_Request__rosidl_typesupport_introspection_c__VoxelGrid_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "harvest_interfaces/srv/detail/voxel_grid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "harvest_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "harvest_interfaces/srv/detail/voxel_grid__functions.h"
// already included above
// #include "harvest_interfaces/srv/detail/voxel_grid__struct.h"


// Include directives for member types
// Member `voxel_centers`
#include "geometry_msgs/msg/point.h"
// Member `voxel_centers`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `voxel_colors`
#include "std_msgs/msg/color_rgba.h"
// Member `voxel_colors`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  harvest_interfaces__srv__VoxelGrid_Response__init(message_memory);
}

void harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_fini_function(void * message_memory)
{
  harvest_interfaces__srv__VoxelGrid_Response__fini(message_memory);
}

size_t harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__size_function__VoxelGrid_Response__voxel_centers(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_const_function__VoxelGrid_Response__voxel_centers(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_function__VoxelGrid_Response__voxel_centers(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__fetch_function__VoxelGrid_Response__voxel_centers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_const_function__VoxelGrid_Response__voxel_centers(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__assign_function__VoxelGrid_Response__voxel_centers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_function__VoxelGrid_Response__voxel_centers(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__resize_function__VoxelGrid_Response__voxel_centers(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__size_function__VoxelGrid_Response__voxel_colors(
  const void * untyped_member)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return member->size;
}

const void * harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_const_function__VoxelGrid_Response__voxel_colors(
  const void * untyped_member, size_t index)
{
  const std_msgs__msg__ColorRGBA__Sequence * member =
    (const std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_function__VoxelGrid_Response__voxel_colors(
  void * untyped_member, size_t index)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  return &member->data[index];
}

void harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__fetch_function__VoxelGrid_Response__voxel_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const std_msgs__msg__ColorRGBA * item =
    ((const std_msgs__msg__ColorRGBA *)
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_const_function__VoxelGrid_Response__voxel_colors(untyped_member, index));
  std_msgs__msg__ColorRGBA * value =
    (std_msgs__msg__ColorRGBA *)(untyped_value);
  *value = *item;
}

void harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__assign_function__VoxelGrid_Response__voxel_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  std_msgs__msg__ColorRGBA * item =
    ((std_msgs__msg__ColorRGBA *)
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_function__VoxelGrid_Response__voxel_colors(untyped_member, index));
  const std_msgs__msg__ColorRGBA * value =
    (const std_msgs__msg__ColorRGBA *)(untyped_value);
  *item = *value;
}

bool harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__resize_function__VoxelGrid_Response__voxel_colors(
  void * untyped_member, size_t size)
{
  std_msgs__msg__ColorRGBA__Sequence * member =
    (std_msgs__msg__ColorRGBA__Sequence *)(untyped_member);
  std_msgs__msg__ColorRGBA__Sequence__fini(member);
  return std_msgs__msg__ColorRGBA__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_member_array[2] = {
  {
    "voxel_centers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(harvest_interfaces__srv__VoxelGrid_Response, voxel_centers),  // bytes offset in struct
    NULL,  // default value
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__size_function__VoxelGrid_Response__voxel_centers,  // size() function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_const_function__VoxelGrid_Response__voxel_centers,  // get_const(index) function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_function__VoxelGrid_Response__voxel_centers,  // get(index) function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__fetch_function__VoxelGrid_Response__voxel_centers,  // fetch(index, &value) function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__assign_function__VoxelGrid_Response__voxel_centers,  // assign(index, value) function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__resize_function__VoxelGrid_Response__voxel_centers  // resize(index) function pointer
  },
  {
    "voxel_colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(harvest_interfaces__srv__VoxelGrid_Response, voxel_colors),  // bytes offset in struct
    NULL,  // default value
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__size_function__VoxelGrid_Response__voxel_colors,  // size() function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_const_function__VoxelGrid_Response__voxel_colors,  // get_const(index) function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__get_function__VoxelGrid_Response__voxel_colors,  // get(index) function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__fetch_function__VoxelGrid_Response__voxel_colors,  // fetch(index, &value) function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__assign_function__VoxelGrid_Response__voxel_colors,  // assign(index, value) function pointer
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__resize_function__VoxelGrid_Response__voxel_colors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_members = {
  "harvest_interfaces__srv",  // message namespace
  "VoxelGrid_Response",  // message name
  2,  // number of fields
  sizeof(harvest_interfaces__srv__VoxelGrid_Response),
  harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_member_array,  // message members
  harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_type_support_handle = {
  0,
  &harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_harvest_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, VoxelGrid_Response)() {
  harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  if (!harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_type_support_handle.typesupport_identifier) {
    harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &harvest_interfaces__srv__VoxelGrid_Response__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "harvest_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "harvest_interfaces/srv/detail/voxel_grid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers harvest_interfaces__srv__detail__voxel_grid__rosidl_typesupport_introspection_c__VoxelGrid_service_members = {
  "harvest_interfaces__srv",  // service namespace
  "VoxelGrid",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // harvest_interfaces__srv__detail__voxel_grid__rosidl_typesupport_introspection_c__VoxelGrid_Request_message_type_support_handle,
  NULL  // response message
  // harvest_interfaces__srv__detail__voxel_grid__rosidl_typesupport_introspection_c__VoxelGrid_Response_message_type_support_handle
};

static rosidl_service_type_support_t harvest_interfaces__srv__detail__voxel_grid__rosidl_typesupport_introspection_c__VoxelGrid_service_type_support_handle = {
  0,
  &harvest_interfaces__srv__detail__voxel_grid__rosidl_typesupport_introspection_c__VoxelGrid_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, VoxelGrid_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, VoxelGrid_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_harvest_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, VoxelGrid)() {
  if (!harvest_interfaces__srv__detail__voxel_grid__rosidl_typesupport_introspection_c__VoxelGrid_service_type_support_handle.typesupport_identifier) {
    harvest_interfaces__srv__detail__voxel_grid__rosidl_typesupport_introspection_c__VoxelGrid_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)harvest_interfaces__srv__detail__voxel_grid__rosidl_typesupport_introspection_c__VoxelGrid_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, VoxelGrid_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, srv, VoxelGrid_Response)()->data;
  }

  return &harvest_interfaces__srv__detail__voxel_grid__rosidl_typesupport_introspection_c__VoxelGrid_service_type_support_handle;
}
