// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from harvest_interfaces:action/SendTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "harvest_interfaces/action/detail/send_trajectory__struct.h"
#include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_Goal_type_support_ids_t;

static const _SendTrajectory_Goal_type_support_ids_t _SendTrajectory_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_Goal_type_support_symbol_names_t _SendTrajectory_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_Goal)),
  }
};

typedef struct _SendTrajectory_Goal_type_support_data_t
{
  void * data[2];
} _SendTrajectory_Goal_type_support_data_t;

static _SendTrajectory_Goal_type_support_data_t _SendTrajectory_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_Goal_message_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTrajectory_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_Goal)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_Result_type_support_ids_t;

static const _SendTrajectory_Result_type_support_ids_t _SendTrajectory_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_Result_type_support_symbol_names_t _SendTrajectory_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_Result)),
  }
};

typedef struct _SendTrajectory_Result_type_support_data_t
{
  void * data[2];
} _SendTrajectory_Result_type_support_data_t;

static _SendTrajectory_Result_type_support_data_t _SendTrajectory_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_Result_message_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTrajectory_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_Result)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_Feedback_type_support_ids_t;

static const _SendTrajectory_Feedback_type_support_ids_t _SendTrajectory_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_Feedback_type_support_symbol_names_t _SendTrajectory_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_Feedback)),
  }
};

typedef struct _SendTrajectory_Feedback_type_support_data_t
{
  void * data[2];
} _SendTrajectory_Feedback_type_support_data_t;

static _SendTrajectory_Feedback_type_support_data_t _SendTrajectory_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_Feedback_message_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTrajectory_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_Feedback)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_SendGoal_Request_type_support_ids_t;

static const _SendTrajectory_SendGoal_Request_type_support_ids_t _SendTrajectory_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_SendGoal_Request_type_support_symbol_names_t _SendTrajectory_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_SendGoal_Request)),
  }
};

typedef struct _SendTrajectory_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SendTrajectory_SendGoal_Request_type_support_data_t;

static _SendTrajectory_SendGoal_Request_type_support_data_t _SendTrajectory_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_SendGoal_Request_message_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTrajectory_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_SendGoal_Request)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_SendGoal_Response_type_support_ids_t;

static const _SendTrajectory_SendGoal_Response_type_support_ids_t _SendTrajectory_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_SendGoal_Response_type_support_symbol_names_t _SendTrajectory_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_SendGoal_Response)),
  }
};

typedef struct _SendTrajectory_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SendTrajectory_SendGoal_Response_type_support_data_t;

static _SendTrajectory_SendGoal_Response_type_support_data_t _SendTrajectory_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_SendGoal_Response_message_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTrajectory_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_SendGoal_Response)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_SendGoal_type_support_ids_t;

static const _SendTrajectory_SendGoal_type_support_ids_t _SendTrajectory_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_SendGoal_type_support_symbol_names_t _SendTrajectory_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_SendGoal)),
  }
};

typedef struct _SendTrajectory_SendGoal_type_support_data_t
{
  void * data[2];
} _SendTrajectory_SendGoal_type_support_data_t;

static _SendTrajectory_SendGoal_type_support_data_t _SendTrajectory_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_SendGoal_service_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendTrajectory_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_SendGoal)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_GetResult_Request_type_support_ids_t;

static const _SendTrajectory_GetResult_Request_type_support_ids_t _SendTrajectory_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_GetResult_Request_type_support_symbol_names_t _SendTrajectory_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_GetResult_Request)),
  }
};

typedef struct _SendTrajectory_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SendTrajectory_GetResult_Request_type_support_data_t;

static _SendTrajectory_GetResult_Request_type_support_data_t _SendTrajectory_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_GetResult_Request_message_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTrajectory_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_GetResult_Request)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_GetResult_Response_type_support_ids_t;

static const _SendTrajectory_GetResult_Response_type_support_ids_t _SendTrajectory_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_GetResult_Response_type_support_symbol_names_t _SendTrajectory_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_GetResult_Response)),
  }
};

typedef struct _SendTrajectory_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SendTrajectory_GetResult_Response_type_support_data_t;

static _SendTrajectory_GetResult_Response_type_support_data_t _SendTrajectory_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_GetResult_Response_message_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTrajectory_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_GetResult_Response)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_GetResult_type_support_ids_t;

static const _SendTrajectory_GetResult_type_support_ids_t _SendTrajectory_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_GetResult_type_support_symbol_names_t _SendTrajectory_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_GetResult)),
  }
};

typedef struct _SendTrajectory_GetResult_type_support_data_t
{
  void * data[2];
} _SendTrajectory_GetResult_type_support_data_t;

static _SendTrajectory_GetResult_type_support_data_t _SendTrajectory_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_GetResult_service_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendTrajectory_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_GetResult)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__struct.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace harvest_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SendTrajectory_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendTrajectory_FeedbackMessage_type_support_ids_t;

static const _SendTrajectory_FeedbackMessage_type_support_ids_t _SendTrajectory_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendTrajectory_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendTrajectory_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendTrajectory_FeedbackMessage_type_support_symbol_names_t _SendTrajectory_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, harvest_interfaces, action, SendTrajectory_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, harvest_interfaces, action, SendTrajectory_FeedbackMessage)),
  }
};

typedef struct _SendTrajectory_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SendTrajectory_FeedbackMessage_type_support_data_t;

static _SendTrajectory_FeedbackMessage_type_support_data_t _SendTrajectory_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendTrajectory_FeedbackMessage_message_typesupport_map = {
  2,
  "harvest_interfaces",
  &_SendTrajectory_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SendTrajectory_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SendTrajectory_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendTrajectory_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendTrajectory_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace harvest_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_FeedbackMessage)() {
  return &::harvest_interfaces::action::rosidl_typesupport_c::SendTrajectory_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "harvest_interfaces/action/send_trajectory.h"
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__type_support.h"

static rosidl_action_type_support_t _harvest_interfaces__action__SendTrajectory__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory)()
{
  // Thread-safe by always writing the same values to the static struct
  _harvest_interfaces__action__SendTrajectory__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_SendGoal)();
  _harvest_interfaces__action__SendTrajectory__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_GetResult)();
  _harvest_interfaces__action__SendTrajectory__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _harvest_interfaces__action__SendTrajectory__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, harvest_interfaces, action, SendTrajectory_FeedbackMessage)();
  _harvest_interfaces__action__SendTrajectory__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_harvest_interfaces__action__SendTrajectory__typesupport_c;
}

#ifdef __cplusplus
}
#endif
