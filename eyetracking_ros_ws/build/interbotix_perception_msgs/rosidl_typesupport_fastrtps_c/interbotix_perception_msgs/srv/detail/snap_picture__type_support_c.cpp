// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interbotix_perception_msgs:srv/SnapPicture.idl
// generated code does not contain a copyright notice
#include "interbotix_perception_msgs/srv/detail/snap_picture__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interbotix_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_perception_msgs/srv/detail/snap_picture__struct.h"
#include "interbotix_perception_msgs/srv/detail/snap_picture__functions.h"
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

#include "rosidl_runtime_c/string.h"  // filename
#include "rosidl_runtime_c/string_functions.h"  // filename

// forward declare type support functions


using _SnapPicture_Request__ros_msg_type = interbotix_perception_msgs__srv__SnapPicture_Request;

static bool _SnapPicture_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SnapPicture_Request__ros_msg_type * ros_message = static_cast<const _SnapPicture_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    const rosidl_runtime_c__String * str = &ros_message->filename;
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

  return true;
}

static bool _SnapPicture_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SnapPicture_Request__ros_msg_type * ros_message = static_cast<_SnapPicture_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: filename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filename.data) {
      rosidl_runtime_c__String__init(&ros_message->filename);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->filename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filename'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t get_serialized_size_interbotix_perception_msgs__srv__SnapPicture_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SnapPicture_Request__ros_msg_type * ros_message = static_cast<const _SnapPicture_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filename.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SnapPicture_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_perception_msgs__srv__SnapPicture_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t max_serialized_size_interbotix_perception_msgs__srv__SnapPicture_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: filename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SnapPicture_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interbotix_perception_msgs__srv__SnapPicture_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SnapPicture_Request = {
  "interbotix_perception_msgs::srv",
  "SnapPicture_Request",
  _SnapPicture_Request__cdr_serialize,
  _SnapPicture_Request__cdr_deserialize,
  _SnapPicture_Request__get_serialized_size,
  _SnapPicture_Request__max_serialized_size
};

static rosidl_message_type_support_t _SnapPicture_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SnapPicture_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, SnapPicture_Request)() {
  return &_SnapPicture_Request__type_support;
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
// #include "interbotix_perception_msgs/srv/detail/snap_picture__struct.h"
// already included above
// #include "interbotix_perception_msgs/srv/detail/snap_picture__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // filepath
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // filepath

// forward declare type support functions


using _SnapPicture_Response__ros_msg_type = interbotix_perception_msgs__srv__SnapPicture_Response;

static bool _SnapPicture_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SnapPicture_Response__ros_msg_type * ros_message = static_cast<const _SnapPicture_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: filepath
  {
    const rosidl_runtime_c__String * str = &ros_message->filepath;
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

  return true;
}

static bool _SnapPicture_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SnapPicture_Response__ros_msg_type * ros_message = static_cast<_SnapPicture_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: filepath
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filepath.data) {
      rosidl_runtime_c__String__init(&ros_message->filepath);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->filepath,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filepath'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t get_serialized_size_interbotix_perception_msgs__srv__SnapPicture_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SnapPicture_Response__ros_msg_type * ros_message = static_cast<const _SnapPicture_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filepath
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filepath.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SnapPicture_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_perception_msgs__srv__SnapPicture_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_perception_msgs
size_t max_serialized_size_interbotix_perception_msgs__srv__SnapPicture_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: filepath
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SnapPicture_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interbotix_perception_msgs__srv__SnapPicture_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SnapPicture_Response = {
  "interbotix_perception_msgs::srv",
  "SnapPicture_Response",
  _SnapPicture_Response__cdr_serialize,
  _SnapPicture_Response__cdr_deserialize,
  _SnapPicture_Response__get_serialized_size,
  _SnapPicture_Response__max_serialized_size
};

static rosidl_message_type_support_t _SnapPicture_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SnapPicture_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, SnapPicture_Response)() {
  return &_SnapPicture_Response__type_support;
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
#include "interbotix_perception_msgs/srv/snap_picture.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SnapPicture__callbacks = {
  "interbotix_perception_msgs::srv",
  "SnapPicture",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, SnapPicture_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, SnapPicture_Response)(),
};

static rosidl_service_type_support_t SnapPicture__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SnapPicture__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_perception_msgs, srv, SnapPicture)() {
  return &SnapPicture__handle;
}

#if defined(__cplusplus)
}
#endif
