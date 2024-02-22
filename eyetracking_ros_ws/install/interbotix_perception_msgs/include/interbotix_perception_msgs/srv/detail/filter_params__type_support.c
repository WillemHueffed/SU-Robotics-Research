// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_perception_msgs/srv/detail/filter_params__rosidl_typesupport_introspection_c.h"
#include "interbotix_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_perception_msgs/srv/detail/filter_params__functions.h"
#include "interbotix_perception_msgs/srv/detail/filter_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_perception_msgs__srv__FilterParams_Request__init(message_memory);
}

void FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_fini_function(void * message_memory)
{
  interbotix_perception_msgs__srv__FilterParams_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_message_member_array[14] = {
  {
    "x_filter_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, x_filter_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_filter_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, x_filter_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_filter_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, y_filter_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_filter_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, y_filter_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_filter_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, z_filter_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_filter_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, z_filter_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voxel_leaf_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, voxel_leaf_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_max_iter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, plane_max_iter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_dist_thresh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, plane_dist_thresh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ror_radius_search",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, ror_radius_search),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ror_min_neighbors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, ror_min_neighbors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster_tol",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, cluster_tol),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster_min_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, cluster_min_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster_max_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Request, cluster_max_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_message_members = {
  "interbotix_perception_msgs__srv",  // message namespace
  "FilterParams_Request",  // message name
  14,  // number of fields
  sizeof(interbotix_perception_msgs__srv__FilterParams_Request),
  FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_message_member_array,  // message members
  FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_message_type_support_handle = {
  0,
  &FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, FilterParams_Request)() {
  if (!FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_message_type_support_handle.typesupport_identifier) {
    FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FilterParams_Request__rosidl_typesupport_introspection_c__FilterParams_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interbotix_perception_msgs/srv/detail/filter_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interbotix_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/filter_params__functions.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/filter_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_perception_msgs__srv__FilterParams_Response__init(message_memory);
}

void FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_fini_function(void * message_memory)
{
  interbotix_perception_msgs__srv__FilterParams_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__srv__FilterParams_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_message_members = {
  "interbotix_perception_msgs__srv",  // message namespace
  "FilterParams_Response",  // message name
  1,  // number of fields
  sizeof(interbotix_perception_msgs__srv__FilterParams_Response),
  FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_message_member_array,  // message members
  FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_message_type_support_handle = {
  0,
  &FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, FilterParams_Response)() {
  if (!FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_message_type_support_handle.typesupport_identifier) {
    FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FilterParams_Response__rosidl_typesupport_introspection_c__FilterParams_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/filter_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interbotix_perception_msgs__srv__detail__filter_params__rosidl_typesupport_introspection_c__FilterParams_service_members = {
  "interbotix_perception_msgs__srv",  // service namespace
  "FilterParams",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interbotix_perception_msgs__srv__detail__filter_params__rosidl_typesupport_introspection_c__FilterParams_Request_message_type_support_handle,
  NULL  // response message
  // interbotix_perception_msgs__srv__detail__filter_params__rosidl_typesupport_introspection_c__FilterParams_Response_message_type_support_handle
};

static rosidl_service_type_support_t interbotix_perception_msgs__srv__detail__filter_params__rosidl_typesupport_introspection_c__FilterParams_service_type_support_handle = {
  0,
  &interbotix_perception_msgs__srv__detail__filter_params__rosidl_typesupport_introspection_c__FilterParams_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, FilterParams_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, FilterParams_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_perception_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, FilterParams)() {
  if (!interbotix_perception_msgs__srv__detail__filter_params__rosidl_typesupport_introspection_c__FilterParams_service_type_support_handle.typesupport_identifier) {
    interbotix_perception_msgs__srv__detail__filter_params__rosidl_typesupport_introspection_c__FilterParams_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interbotix_perception_msgs__srv__detail__filter_params__rosidl_typesupport_introspection_c__FilterParams_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, FilterParams_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, srv, FilterParams_Response)()->data;
  }

  return &interbotix_perception_msgs__srv__detail__filter_params__rosidl_typesupport_introspection_c__FilterParams_service_type_support_handle;
}
