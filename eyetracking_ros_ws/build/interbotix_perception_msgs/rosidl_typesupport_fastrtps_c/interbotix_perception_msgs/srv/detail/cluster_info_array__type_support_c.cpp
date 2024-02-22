// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
// generated code does not contain a copyright notice
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interbotix_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.h"
#include "interbotix_perception_msgs/srv/detail/cluster_info_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ClusterInfoArray_Request__ros_msg_type = interbotix_perception_msgs__srv__ClusterInfoArray_Request;

static bool _ClusterInfoArray_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ClusterInfoArray_Request__ros_msg_type * ros_message = static_cast<const _ClusterInfoArray_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ClusterInfoArray_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ClusterInfoArray_Request__ros_msg_type * ros_message = static_cast<_ClusterInfoArray_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t get_serialized_size_interbotix_perception_msgs__srv__ClusterInfoArray_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ClusterInfoArray_Request__ros_msg_type * ros_message = static_cast<const _ClusterInfoArray_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ClusterInfoArray_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_perception_msgs__srv__ClusterInfoArray_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t max_serialized_size_interbotix_perception_msgs__srv__ClusterInfoArray_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ClusterInfoArray_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interbotix_perception_msgs__srv__ClusterInfoArray_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ClusterInfoArray_Request = {
  "interbotix_perception_msgs::srv",
  "ClusterInfoArray_Request",
  _ClusterInfoArray_Request__cdr_serialize,
  _ClusterInfoArray_Request__cdr_deserialize,
  _ClusterInfoArray_Request__get_serialized_size,
  _ClusterInfoArray_Request__max_serialized_size
};

static rosidl_message_type_support_t _ClusterInfoArray_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ClusterInfoArray_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, ClusterInfoArray_Request)() {
  return &_ClusterInfoArray_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interbotix_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/cluster_info_array__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "interbotix_perception_msgs/msg/detail/cluster_info__functions.h"  // clusters

// forward declare type support functions
size_t get_serialized_size_interbotix_perception_msgs__msg__ClusterInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interbotix_perception_msgs__msg__ClusterInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, msg, ClusterInfo)();


using _ClusterInfoArray_Response__ros_msg_type = interbotix_perception_msgs__srv__ClusterInfoArray_Response;

static bool _ClusterInfoArray_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ClusterInfoArray_Response__ros_msg_type * ros_message = static_cast<const _ClusterInfoArray_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: clusters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, msg, ClusterInfo
      )()->data);
    size_t size = ros_message->clusters.size;
    auto array_ptr = ros_message->clusters.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ClusterInfoArray_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ClusterInfoArray_Response__ros_msg_type * ros_message = static_cast<_ClusterInfoArray_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: clusters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, msg, ClusterInfo
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->clusters.data) {
      interbotix_perception_msgs__msg__ClusterInfo__Sequence__fini(&ros_message->clusters);
    }
    if (!interbotix_perception_msgs__msg__ClusterInfo__Sequence__init(&ros_message->clusters, size)) {
      fprintf(stderr, "failed to create array for field 'clusters'");
      return false;
    }
    auto array_ptr = ros_message->clusters.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t get_serialized_size_interbotix_perception_msgs__srv__ClusterInfoArray_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ClusterInfoArray_Response__ros_msg_type * ros_message = static_cast<const _ClusterInfoArray_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name clusters
  {
    size_t array_size = ros_message->clusters.size;
    auto array_ptr = ros_message->clusters.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_interbotix_perception_msgs__msg__ClusterInfo(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ClusterInfoArray_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_perception_msgs__srv__ClusterInfoArray_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t max_serialized_size_interbotix_perception_msgs__srv__ClusterInfoArray_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: clusters
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_interbotix_perception_msgs__msg__ClusterInfo(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ClusterInfoArray_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interbotix_perception_msgs__srv__ClusterInfoArray_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ClusterInfoArray_Response = {
  "interbotix_perception_msgs::srv",
  "ClusterInfoArray_Response",
  _ClusterInfoArray_Response__cdr_serialize,
  _ClusterInfoArray_Response__cdr_deserialize,
  _ClusterInfoArray_Response__get_serialized_size,
  _ClusterInfoArray_Response__max_serialized_size
};

static rosidl_message_type_support_t _ClusterInfoArray_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ClusterInfoArray_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, ClusterInfoArray_Response)() {
  return &_ClusterInfoArray_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interbotix_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_perception_msgs/srv/cluster_info_array.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ClusterInfoArray__callbacks = {
  "interbotix_perception_msgs::srv",
  "ClusterInfoArray",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, ClusterInfoArray_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, ClusterInfoArray_Response)(),
};

static rosidl_service_type_support_t ClusterInfoArray__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ClusterInfoArray__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, ClusterInfoArray)() {
  return &ClusterInfoArray__handle;
}

#if defined(__cplusplus)
}
#endif
