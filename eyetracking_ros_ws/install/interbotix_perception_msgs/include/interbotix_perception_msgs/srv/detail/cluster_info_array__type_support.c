// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__rosidl_typesupport_introspection_c.h"
#include "interbotix_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__functions.h"
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_perception_msgs__srv__ClusterInfoArray_Request__init(message_memory);
}

void ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_fini_function(void * message_memory)
{
  interbotix_perception_msgs__srv__ClusterInfoArray_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__ClusterInfoArray_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_message_members = {
  "interbotix_perception_msgs__srv",  // message namespace
  "ClusterInfoArray_Request",  // message name
  1,  // number of fields
  sizeof(interbotix_perception_msgs__srv__ClusterInfoArray_Request),
  ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_message_member_array,  // message members
  ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_message_type_support_handle = {
  0,
  &ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, ClusterInfoArray_Request)() {
  if (!ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_message_type_support_handle.typesupport_identifier) {
    ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ClusterInfoArray_Request__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interbotix_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__functions.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.h"


// Include directives for member types
// Member `clusters`
#include "interbotix_perception_msgs/msg/cluster_info.h"
// Member `clusters`
#include "interbotix_perception_msgs/msg/detail/cluster_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_perception_msgs__srv__ClusterInfoArray_Response__init(message_memory);
}

void ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_fini_function(void * message_memory)
{
  interbotix_perception_msgs__srv__ClusterInfoArray_Response__fini(message_memory);
}

size_t ClusterInfoArray_Response__rosidl_typesupport_introspection_c__size_function__ClusterInfo__clusters(
  const void * untyped_member)
{
  const interbotix_perception_msgs__msg__ClusterInfo__Sequence * member =
    (const interbotix_perception_msgs__msg__ClusterInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * ClusterInfoArray_Response__rosidl_typesupport_introspection_c__get_const_function__ClusterInfo__clusters(
  const void * untyped_member, size_t index)
{
  const interbotix_perception_msgs__msg__ClusterInfo__Sequence * member =
    (const interbotix_perception_msgs__msg__ClusterInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ClusterInfoArray_Response__rosidl_typesupport_introspection_c__get_function__ClusterInfo__clusters(
  void * untyped_member, size_t index)
{
  interbotix_perception_msgs__msg__ClusterInfo__Sequence * member =
    (interbotix_perception_msgs__msg__ClusterInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ClusterInfoArray_Response__rosidl_typesupport_introspection_c__resize_function__ClusterInfo__clusters(
  void * untyped_member, size_t size)
{
  interbotix_perception_msgs__msg__ClusterInfo__Sequence * member =
    (interbotix_perception_msgs__msg__ClusterInfo__Sequence *)(untyped_member);
  interbotix_perception_msgs__msg__ClusterInfo__Sequence__fini(member);
  return interbotix_perception_msgs__msg__ClusterInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_member_array[1] = {
  {
    "clusters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__ClusterInfoArray_Response, clusters),  // bytes offset in struct
    NULL,  // default value
    ClusterInfoArray_Response__rosidl_typesupport_introspection_c__size_function__ClusterInfo__clusters,  // size() function pointer
    ClusterInfoArray_Response__rosidl_typesupport_introspection_c__get_const_function__ClusterInfo__clusters,  // get_const(index) function pointer
    ClusterInfoArray_Response__rosidl_typesupport_introspection_c__get_function__ClusterInfo__clusters,  // get(index) function pointer
    ClusterInfoArray_Response__rosidl_typesupport_introspection_c__resize_function__ClusterInfo__clusters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_members = {
  "interbotix_perception_msgs__srv",  // message namespace
  "ClusterInfoArray_Response",  // message name
  1,  // number of fields
  sizeof(interbotix_perception_msgs__srv__ClusterInfoArray_Response),
  ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_member_array,  // message members
  ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_type_support_handle = {
  0,
  &ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, ClusterInfoArray_Response)() {
  ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, msg, ClusterInfo)();
  if (!ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_type_support_handle.typesupport_identifier) {
    ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ClusterInfoArray_Response__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interbotix_perception_msgs__srv__detail__cluster_info_array__rosidl_typesupport_introspection_c__ClusterInfoArray_service_members = {
  "interbotix_perception_msgs__srv",  // service namespace
  "ClusterInfoArray",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interbotix_perception_msgs__srv__detail__cluster_info_array__rosidl_typesupport_introspection_c__ClusterInfoArray_Request_message_type_support_handle,
  NULL  // response message
  // interbotix_perception_msgs__srv__detail__cluster_info_array__rosidl_typesupport_introspection_c__ClusterInfoArray_Response_message_type_support_handle
};

static rosidl_service_type_support_t interbotix_perception_msgs__srv__detail__cluster_info_array__rosidl_typesupport_introspection_c__ClusterInfoArray_service_type_support_handle = {
  0,
  &interbotix_perception_msgs__srv__detail__cluster_info_array__rosidl_typesupport_introspection_c__ClusterInfoArray_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, ClusterInfoArray_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, ClusterInfoArray_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_perception_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, ClusterInfoArray)() {
  if (!interbotix_perception_msgs__srv__detail__cluster_info_array__rosidl_typesupport_introspection_c__ClusterInfoArray_service_type_support_handle.typesupport_identifier) {
    interbotix_perception_msgs__srv__detail__cluster_info_array__rosidl_typesupport_introspection_c__ClusterInfoArray_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interbotix_perception_msgs__srv__detail__cluster_info_array__rosidl_typesupport_introspection_c__ClusterInfoArray_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, ClusterInfoArray_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, ClusterInfoArray_Response)()->data;
  }

  return &interbotix_perception_msgs__srv__detail__cluster_info_array__rosidl_typesupport_introspection_c__ClusterInfoArray_service_type_support_handle;
}
