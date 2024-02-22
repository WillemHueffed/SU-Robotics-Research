// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_xs_msgs:srv/Reboot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_xs_msgs/srv/detail/reboot__rosidl_typesupport_introspection_c.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_xs_msgs/srv/detail/reboot__functions.h"
#include "interbotix_xs_msgs/srv/detail/reboot__struct.h"


// Include directives for member types
// Member `cmd_type`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__Reboot_Request__init(message_memory);
}

void Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__Reboot_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_message_member_array[4] = {
  {
    "cmd_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__Reboot_Request, cmd_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__Reboot_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__Reboot_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "smart_reboot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__Reboot_Request, smart_reboot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "Reboot_Request",  // message name
  4,  // number of fields
  sizeof(interbotix_xs_msgs__srv__Reboot_Request),
  Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_message_member_array,  // message members
  Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_message_type_support_handle = {
  0,
  &Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, Reboot_Request)() {
  if (!Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_message_type_support_handle.typesupport_identifier) {
    Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reboot_Request__rosidl_typesupport_introspection_c__Reboot_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interbotix_xs_msgs/srv/detail/reboot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/reboot__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/reboot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__Reboot_Response__init(message_memory);
}

void Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__Reboot_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__Reboot_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "Reboot_Response",  // message name
  1,  // number of fields
  sizeof(interbotix_xs_msgs__srv__Reboot_Response),
  Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_message_member_array,  // message members
  Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_message_type_support_handle = {
  0,
  &Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, Reboot_Response)() {
  if (!Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_message_type_support_handle.typesupport_identifier) {
    Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Reboot_Response__rosidl_typesupport_introspection_c__Reboot_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/reboot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interbotix_xs_msgs__srv__detail__reboot__rosidl_typesupport_introspection_c__Reboot_service_members = {
  "interbotix_xs_msgs__srv",  // service namespace
  "Reboot",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interbotix_xs_msgs__srv__detail__reboot__rosidl_typesupport_introspection_c__Reboot_Request_message_type_support_handle,
  NULL  // response message
  // interbotix_xs_msgs__srv__detail__reboot__rosidl_typesupport_introspection_c__Reboot_Response_message_type_support_handle
};

static rosidl_service_type_support_t interbotix_xs_msgs__srv__detail__reboot__rosidl_typesupport_introspection_c__Reboot_service_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__detail__reboot__rosidl_typesupport_introspection_c__Reboot_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, Reboot_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, Reboot_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, Reboot)() {
  if (!interbotix_xs_msgs__srv__detail__reboot__rosidl_typesupport_introspection_c__Reboot_service_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__detail__reboot__rosidl_typesupport_introspection_c__Reboot_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interbotix_xs_msgs__srv__detail__reboot__rosidl_typesupport_introspection_c__Reboot_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, Reboot_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, Reboot_Response)()->data;
  }

  return &interbotix_xs_msgs__srv__detail__reboot__rosidl_typesupport_introspection_c__Reboot_service_type_support_handle;
}
