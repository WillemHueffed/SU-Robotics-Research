// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_moveit_interface_msgs:srv/MoveItPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__rosidl_typesupport_introspection_c.h"
#include "interbotix_moveit_interface_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__functions.h"
#include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__struct.h"


// Include directives for member types
// Member `ee_pose`
#include "geometry_msgs/msg/pose.h"
// Member `ee_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__init(message_memory);
}

void MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_fini_function(void * message_memory)
{
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_member_array[2] = {
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ee_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request, ee_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_members = {
  "interbotix_moveit_interface_msgs__srv",  // message namespace
  "MoveItPlan_Request",  // message name
  2,  // number of fields
  sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Request),
  MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_member_array,  // message members
  MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_type_support_handle = {
  0,
  &MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_moveit_interface_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Request)() {
  MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_type_support_handle.typesupport_identifier) {
    MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItPlan_Request__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interbotix_moveit_interface_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__functions.h"
// already included above
// #include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__struct.h"


// Include directives for member types
// Member `msg`
#include "std_msgs/msg/string.h"
// Member `msg`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__init(message_memory);
}

void MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_fini_function(void * message_memory)
{
  interbotix_moveit_interface_msgs__srv__MoveItPlan_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_member_array[2] = {
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_members = {
  "interbotix_moveit_interface_msgs__srv",  // message namespace
  "MoveItPlan_Response",  // message name
  2,  // number of fields
  sizeof(interbotix_moveit_interface_msgs__srv__MoveItPlan_Response),
  MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_member_array,  // message members
  MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_type_support_handle = {
  0,
  &MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_moveit_interface_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Response)() {
  MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_type_support_handle.typesupport_identifier) {
    MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItPlan_Response__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_moveit_interface_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interbotix_moveit_interface_msgs__srv__detail__move_it_plan__rosidl_typesupport_introspection_c__MoveItPlan_service_members = {
  "interbotix_moveit_interface_msgs__srv",  // service namespace
  "MoveItPlan",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interbotix_moveit_interface_msgs__srv__detail__move_it_plan__rosidl_typesupport_introspection_c__MoveItPlan_Request_message_type_support_handle,
  NULL  // response message
  // interbotix_moveit_interface_msgs__srv__detail__move_it_plan__rosidl_typesupport_introspection_c__MoveItPlan_Response_message_type_support_handle
};

static rosidl_service_type_support_t interbotix_moveit_interface_msgs__srv__detail__move_it_plan__rosidl_typesupport_introspection_c__MoveItPlan_service_type_support_handle = {
  0,
  &interbotix_moveit_interface_msgs__srv__detail__move_it_plan__rosidl_typesupport_introspection_c__MoveItPlan_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_moveit_interface_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan)() {
  if (!interbotix_moveit_interface_msgs__srv__detail__move_it_plan__rosidl_typesupport_introspection_c__MoveItPlan_service_type_support_handle.typesupport_identifier) {
    interbotix_moveit_interface_msgs__srv__detail__move_it_plan__rosidl_typesupport_introspection_c__MoveItPlan_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interbotix_moveit_interface_msgs__srv__detail__move_it_plan__rosidl_typesupport_introspection_c__MoveItPlan_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_moveit_interface_msgs, srv, MoveItPlan_Response)()->data;
  }

  return &interbotix_moveit_interface_msgs__srv__detail__move_it_plan__rosidl_typesupport_introspection_c__MoveItPlan_service_type_support_handle;
}
