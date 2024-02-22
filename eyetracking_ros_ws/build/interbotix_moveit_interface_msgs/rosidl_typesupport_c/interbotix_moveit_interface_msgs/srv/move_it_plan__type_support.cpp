// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from interbotix_moveit_interface_msgs:srv/MoveItPlan.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interbotix_moveit_interface_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interbotix_moveit_interface_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveItPlan_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveItPlan_Request_type_support_ids_t;

static const _MoveItPlan_Request_type_support_ids_t _MoveItPlan_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveItPlan_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveItPlan_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveItPlan_Request_type_support_symbol_names_t _MoveItPlan_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Request)),
  }
};

typedef struct _MoveItPlan_Request_type_support_data_t
{
  void * data[2];
} _MoveItPlan_Request_type_support_data_t;

static _MoveItPlan_Request_type_support_data_t _MoveItPlan_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveItPlan_Request_message_typesupport_map = {
  2,
  "interbotix_moveit_interface_msgs",
  &_MoveItPlan_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveItPlan_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveItPlan_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveItPlan_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveItPlan_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_moveit_interface_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_interbotix_moveit_interface_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Request)() {
  return &::interbotix_moveit_interface_msgs::srv::rosidl_typesupport_c::MoveItPlan_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interbotix_moveit_interface_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__struct.h"
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

namespace interbotix_moveit_interface_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveItPlan_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveItPlan_Response_type_support_ids_t;

static const _MoveItPlan_Response_type_support_ids_t _MoveItPlan_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveItPlan_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveItPlan_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveItPlan_Response_type_support_symbol_names_t _MoveItPlan_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Response)),
  }
};

typedef struct _MoveItPlan_Response_type_support_data_t
{
  void * data[2];
} _MoveItPlan_Response_type_support_data_t;

static _MoveItPlan_Response_type_support_data_t _MoveItPlan_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveItPlan_Response_message_typesupport_map = {
  2,
  "interbotix_moveit_interface_msgs",
  &_MoveItPlan_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveItPlan_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveItPlan_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveItPlan_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveItPlan_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_moveit_interface_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_interbotix_moveit_interface_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Response)() {
  return &::interbotix_moveit_interface_msgs::srv::rosidl_typesupport_c::MoveItPlan_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_moveit_interface_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interbotix_moveit_interface_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveItPlan_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveItPlan_type_support_ids_t;

static const _MoveItPlan_type_support_ids_t _MoveItPlan_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveItPlan_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveItPlan_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveItPlan_type_support_symbol_names_t _MoveItPlan_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_moveit_interface_msgs, srv, MoveItPlan)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan)),
  }
};

typedef struct _MoveItPlan_type_support_data_t
{
  void * data[2];
} _MoveItPlan_type_support_data_t;

static _MoveItPlan_type_support_data_t _MoveItPlan_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveItPlan_service_typesupport_map = {
  2,
  "interbotix_moveit_interface_msgs",
  &_MoveItPlan_service_typesupport_ids.typesupport_identifier[0],
  &_MoveItPlan_service_typesupport_symbol_names.symbol_name[0],
  &_MoveItPlan_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveItPlan_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveItPlan_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interbotix_moveit_interface_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_interbotix_moveit_interface_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, interbotix_moveit_interface_msgs, srv, MoveItPlan)() {
  return &::interbotix_moveit_interface_msgs::srv::rosidl_typesupport_c::MoveItPlan_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
