// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interbotix_perception_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ClusterInfoArray_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interbotix_perception_msgs::srv::ClusterInfoArray_Request(_init);
}

void ClusterInfoArray_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interbotix_perception_msgs::srv::ClusterInfoArray_Request *>(message_memory);
  typed_message->~ClusterInfoArray_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ClusterInfoArray_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs::srv::ClusterInfoArray_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ClusterInfoArray_Request_message_members = {
  "interbotix_perception_msgs::srv",  // message namespace
  "ClusterInfoArray_Request",  // message name
  1,  // number of fields
  sizeof(interbotix_perception_msgs::srv::ClusterInfoArray_Request),
  ClusterInfoArray_Request_message_member_array,  // message members
  ClusterInfoArray_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ClusterInfoArray_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ClusterInfoArray_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ClusterInfoArray_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interbotix_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_perception_msgs::srv::ClusterInfoArray_Request>()
{
  return &::interbotix_perception_msgs::srv::rosidl_typesupport_introspection_cpp::ClusterInfoArray_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_perception_msgs, srv, ClusterInfoArray_Request)() {
  return &::interbotix_perception_msgs::srv::rosidl_typesupport_introspection_cpp::ClusterInfoArray_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interbotix_perception_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ClusterInfoArray_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interbotix_perception_msgs::srv::ClusterInfoArray_Response(_init);
}

void ClusterInfoArray_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interbotix_perception_msgs::srv::ClusterInfoArray_Response *>(message_memory);
  typed_message->~ClusterInfoArray_Response();
}

size_t size_function__ClusterInfoArray_Response__clusters(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interbotix_perception_msgs::msg::ClusterInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ClusterInfoArray_Response__clusters(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interbotix_perception_msgs::msg::ClusterInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ClusterInfoArray_Response__clusters(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interbotix_perception_msgs::msg::ClusterInfo> *>(untyped_member);
  return &member[index];
}

void resize_function__ClusterInfoArray_Response__clusters(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interbotix_perception_msgs::msg::ClusterInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ClusterInfoArray_Response_message_member_array[1] = {
  {
    "clusters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interbotix_perception_msgs::msg::ClusterInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs::srv::ClusterInfoArray_Response, clusters),  // bytes offset in struct
    nullptr,  // default value
    size_function__ClusterInfoArray_Response__clusters,  // size() function pointer
    get_const_function__ClusterInfoArray_Response__clusters,  // get_const(index) function pointer
    get_function__ClusterInfoArray_Response__clusters,  // get(index) function pointer
    resize_function__ClusterInfoArray_Response__clusters  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ClusterInfoArray_Response_message_members = {
  "interbotix_perception_msgs::srv",  // message namespace
  "ClusterInfoArray_Response",  // message name
  1,  // number of fields
  sizeof(interbotix_perception_msgs::srv::ClusterInfoArray_Response),
  ClusterInfoArray_Response_message_member_array,  // message members
  ClusterInfoArray_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ClusterInfoArray_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ClusterInfoArray_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ClusterInfoArray_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interbotix_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_perception_msgs::srv::ClusterInfoArray_Response>()
{
  return &::interbotix_perception_msgs::srv::rosidl_typesupport_introspection_cpp::ClusterInfoArray_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_perception_msgs, srv, ClusterInfoArray_Response)() {
  return &::interbotix_perception_msgs::srv::rosidl_typesupport_introspection_cpp::ClusterInfoArray_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace interbotix_perception_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ClusterInfoArray_service_members = {
  "interbotix_perception_msgs::srv",  // service namespace
  "ClusterInfoArray",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<interbotix_perception_msgs::srv::ClusterInfoArray>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ClusterInfoArray_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ClusterInfoArray_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interbotix_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interbotix_perception_msgs::srv::ClusterInfoArray>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::interbotix_perception_msgs::srv::rosidl_typesupport_introspection_cpp::ClusterInfoArray_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interbotix_perception_msgs::srv::ClusterInfoArray_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interbotix_perception_msgs::srv::ClusterInfoArray_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interbotix_perception_msgs, srv, ClusterInfoArray)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<interbotix_perception_msgs::srv::ClusterInfoArray>();
}

#ifdef __cplusplus
}
#endif
