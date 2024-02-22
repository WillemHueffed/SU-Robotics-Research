// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
// generated code does not contain a copyright notice
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interbotix_perception_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
cdr_serialize(
  const interbotix_perception_msgs::srv::ClusterInfoArray_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interbotix_perception_msgs::srv::ClusterInfoArray_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
get_serialized_size(
  const interbotix_perception_msgs::srv::ClusterInfoArray_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
max_serialized_size_ClusterInfoArray_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ClusterInfoArray_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interbotix_perception_msgs::srv::ClusterInfoArray_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ClusterInfoArray_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interbotix_perception_msgs::srv::ClusterInfoArray_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ClusterInfoArray_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interbotix_perception_msgs::srv::ClusterInfoArray_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ClusterInfoArray_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ClusterInfoArray_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ClusterInfoArray_Request__callbacks = {
  "interbotix_perception_msgs::srv",
  "ClusterInfoArray_Request",
  _ClusterInfoArray_Request__cdr_serialize,
  _ClusterInfoArray_Request__cdr_deserialize,
  _ClusterInfoArray_Request__get_serialized_size,
  _ClusterInfoArray_Request__max_serialized_size
};

static rosidl_message_type_support_t _ClusterInfoArray_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClusterInfoArray_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interbotix_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_perception_msgs::srv::ClusterInfoArray_Request>()
{
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_ClusterInfoArray_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, ClusterInfoArray_Request)() {
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_ClusterInfoArray_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace interbotix_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interbotix_perception_msgs::msg::ClusterInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interbotix_perception_msgs::msg::ClusterInfo &);
size_t get_serialized_size(
  const interbotix_perception_msgs::msg::ClusterInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ClusterInfo(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interbotix_perception_msgs


namespace interbotix_perception_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
cdr_serialize(
  const interbotix_perception_msgs::srv::ClusterInfoArray_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: clusters
  {
    size_t size = ros_message.clusters.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      interbotix_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.clusters[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interbotix_perception_msgs::srv::ClusterInfoArray_Response & ros_message)
{
  // Member: clusters
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.clusters.resize(size);
    for (size_t i = 0; i < size; i++) {
      interbotix_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.clusters[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
get_serialized_size(
  const interbotix_perception_msgs::srv::ClusterInfoArray_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: clusters
  {
    size_t array_size = ros_message.clusters.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        interbotix_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.clusters[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_perception_msgs
max_serialized_size_ClusterInfoArray_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: clusters
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        interbotix_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ClusterInfo(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ClusterInfoArray_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interbotix_perception_msgs::srv::ClusterInfoArray_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ClusterInfoArray_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interbotix_perception_msgs::srv::ClusterInfoArray_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ClusterInfoArray_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interbotix_perception_msgs::srv::ClusterInfoArray_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ClusterInfoArray_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ClusterInfoArray_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ClusterInfoArray_Response__callbacks = {
  "interbotix_perception_msgs::srv",
  "ClusterInfoArray_Response",
  _ClusterInfoArray_Response__cdr_serialize,
  _ClusterInfoArray_Response__cdr_deserialize,
  _ClusterInfoArray_Response__get_serialized_size,
  _ClusterInfoArray_Response__max_serialized_size
};

static rosidl_message_type_support_t _ClusterInfoArray_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClusterInfoArray_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interbotix_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_perception_msgs::srv::ClusterInfoArray_Response>()
{
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_ClusterInfoArray_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, ClusterInfoArray_Response)() {
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_ClusterInfoArray_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace interbotix_perception_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ClusterInfoArray__callbacks = {
  "interbotix_perception_msgs::srv",
  "ClusterInfoArray",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, ClusterInfoArray_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, ClusterInfoArray_Response)(),
};

static rosidl_service_type_support_t _ClusterInfoArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClusterInfoArray__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interbotix_perception_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<interbotix_perception_msgs::srv::ClusterInfoArray>()
{
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_ClusterInfoArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_perception_msgs, srv, ClusterInfoArray)() {
  return &interbotix_perception_msgs::srv::typesupport_fastrtps_cpp::_ClusterInfoArray__handle;
}

#ifdef __cplusplus
}
#endif
