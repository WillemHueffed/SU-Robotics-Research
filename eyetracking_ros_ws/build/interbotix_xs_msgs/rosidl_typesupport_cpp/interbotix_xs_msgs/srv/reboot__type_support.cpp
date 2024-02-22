// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_xs_msgs:srv/Reboot.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interbotix_xs_msgs/srv/detail/reboot__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Reboot_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reboot_Request_type_support_ids_t;

static const _Reboot_Request_type_support_ids_t _Reboot_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Reboot_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reboot_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reboot_Request_type_support_symbol_names_t _Reboot_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, srv, Reboot_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, Reboot_Request)),
  }
};

typedef struct _Reboot_Request_type_support_data_t
{
  void * data[2];
} _Reboot_Request_type_support_data_t;

static _Reboot_Request_type_support_data_t _Reboot_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reboot_Request_message_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_Reboot_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Reboot_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Reboot_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reboot_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reboot_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::srv::Reboot_Request>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_cpp::Reboot_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interbotix_xs_msgs, srv, Reboot_Request)() {
  return get_message_type_support_handle<interbotix_xs_msgs::srv::Reboot_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/reboot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Reboot_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reboot_Response_type_support_ids_t;

static const _Reboot_Response_type_support_ids_t _Reboot_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Reboot_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reboot_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reboot_Response_type_support_symbol_names_t _Reboot_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, srv, Reboot_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, Reboot_Response)),
  }
};

typedef struct _Reboot_Response_type_support_data_t
{
  void * data[2];
} _Reboot_Response_type_support_data_t;

static _Reboot_Response_type_support_data_t _Reboot_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reboot_Response_message_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_Reboot_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Reboot_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Reboot_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reboot_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reboot_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::srv::Reboot_Response>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_cpp::Reboot_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interbotix_xs_msgs, srv, Reboot_Response)() {
  return get_message_type_support_handle<interbotix_xs_msgs::srv::Reboot_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/reboot__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interbotix_xs_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Reboot_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reboot_type_support_ids_t;

static const _Reboot_type_support_ids_t _Reboot_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Reboot_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reboot_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reboot_type_support_symbol_names_t _Reboot_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, srv, Reboot)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_xs_msgs, srv, Reboot)),
  }
};

typedef struct _Reboot_type_support_data_t
{
  void * data[2];
} _Reboot_type_support_data_t;

static _Reboot_type_support_data_t _Reboot_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reboot_service_typesupport_map = {
  2,
  "interbotix_xs_msgs",
  &_Reboot_service_typesupport_ids.typesupport_identifier[0],
  &_Reboot_service_typesupport_symbol_names.symbol_name[0],
  &_Reboot_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Reboot_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reboot_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interbotix_xs_msgs::srv::Reboot>()
{
  return &::interbotix_xs_msgs::srv::rosidl_typesupport_cpp::Reboot_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
