// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interbotix_xs_msgs:srv/Reboot.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/srv/detail/reboot__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_xs_msgs/srv/detail/reboot__struct.h"
#include "interbotix_xs_msgs/srv/detail/reboot__functions.h"
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

#include "rosidl_runtime_c/string.h"  // cmd_type, name
#include "rosidl_runtime_c/string_functions.h"  // cmd_type, name

// forward declare type support functions


using _Reboot_Request__ros_msg_type = interbotix_xs_msgs__srv__Reboot_Request;

static bool _Reboot_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Reboot_Request__ros_msg_type * ros_message = static_cast<const _Reboot_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    const rosidl_runtime_c__String * str = &ros_message->cmd_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: enable
  {
    cdr << (ros_message->enable ? true : false);
  }

  // Field name: smart_reboot
  {
    cdr << (ros_message->smart_reboot ? true : false);
  }

  return true;
}

static bool _Reboot_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Reboot_Request__ros_msg_type * ros_message = static_cast<_Reboot_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cmd_type.data) {
      rosidl_runtime_c__String__init(&ros_message->cmd_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cmd_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cmd_type'\n");
      return false;
    }
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable = tmp ? true : false;
  }

  // Field name: smart_reboot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->smart_reboot = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t get_serialized_size_interbotix_xs_msgs__srv__Reboot_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Reboot_Request__ros_msg_type * ros_message = static_cast<const _Reboot_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cmd_type.size + 1);
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name enable
  {
    size_t item_size = sizeof(ros_message->enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name smart_reboot
  {
    size_t item_size = sizeof(ros_message->smart_reboot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Reboot_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_xs_msgs__srv__Reboot_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t max_serialized_size_interbotix_xs_msgs__srv__Reboot_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cmd_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: smart_reboot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Reboot_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interbotix_xs_msgs__srv__Reboot_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Reboot_Request = {
  "interbotix_xs_msgs::srv",
  "Reboot_Request",
  _Reboot_Request__cdr_serialize,
  _Reboot_Request__cdr_deserialize,
  _Reboot_Request__get_serialized_size,
  _Reboot_Request__max_serialized_size
};

static rosidl_message_type_support_t _Reboot_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Reboot_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, Reboot_Request)() {
  return &_Reboot_Request__type_support;
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
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/reboot__struct.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/reboot__functions.h"
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


// forward declare type support functions


using _Reboot_Response__ros_msg_type = interbotix_xs_msgs__srv__Reboot_Response;

static bool _Reboot_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Reboot_Response__ros_msg_type * ros_message = static_cast<const _Reboot_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _Reboot_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Reboot_Response__ros_msg_type * ros_message = static_cast<_Reboot_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t get_serialized_size_interbotix_xs_msgs__srv__Reboot_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Reboot_Response__ros_msg_type * ros_message = static_cast<const _Reboot_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _Reboot_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_xs_msgs__srv__Reboot_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t max_serialized_size_interbotix_xs_msgs__srv__Reboot_Response(
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

static size_t _Reboot_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interbotix_xs_msgs__srv__Reboot_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Reboot_Response = {
  "interbotix_xs_msgs::srv",
  "Reboot_Response",
  _Reboot_Response__cdr_serialize,
  _Reboot_Response__cdr_deserialize,
  _Reboot_Response__get_serialized_size,
  _Reboot_Response__max_serialized_size
};

static rosidl_message_type_support_t _Reboot_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Reboot_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, Reboot_Response)() {
  return &_Reboot_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_xs_msgs/srv/reboot.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Reboot__callbacks = {
  "interbotix_xs_msgs::srv",
  "Reboot",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, Reboot_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, Reboot_Response)(),
};

static rosidl_service_type_support_t Reboot__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Reboot__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, srv, Reboot)() {
  return &Reboot__handle;
}

#if defined(__cplusplus)
}
#endif
