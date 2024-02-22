// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interbotix_xs_msgs:msg/HexJoy.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/hex_joy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interbotix_xs_msgs/msg/detail/hex_joy__struct.h"
#include "interbotix_xs_msgs/msg/detail/hex_joy__functions.h"
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


using _HexJoy__ros_msg_type = interbotix_xs_msgs__msg__HexJoy;

static bool _HexJoy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HexJoy__ros_msg_type * ros_message = static_cast<const _HexJoy__ros_msg_type *>(untyped_ros_message);
  // Field name: world_x_cmd
  {
    cdr << ros_message->world_x_cmd;
  }

  // Field name: world_y_cmd
  {
    cdr << ros_message->world_y_cmd;
  }

  // Field name: world_yaw_cmd
  {
    cdr << ros_message->world_yaw_cmd;
  }

  // Field name: place_x_cmd
  {
    cdr << ros_message->place_x_cmd;
  }

  // Field name: place_y_cmd
  {
    cdr << ros_message->place_y_cmd;
  }

  // Field name: place_z_cmd
  {
    cdr << ros_message->place_z_cmd;
  }

  // Field name: place_roll_cmd
  {
    cdr << ros_message->place_roll_cmd;
  }

  // Field name: place_pitch_cmd
  {
    cdr << ros_message->place_pitch_cmd;
  }

  // Field name: pose_cmd
  {
    cdr << ros_message->pose_cmd;
  }

  // Field name: move_type_cmd
  {
    cdr << ros_message->move_type_cmd;
  }

  // Field name: gait_toggle_cmd
  {
    cdr << ros_message->gait_toggle_cmd;
  }

  // Field name: leg_toggle_cmd
  {
    cdr << ros_message->leg_toggle_cmd;
  }

  // Field name: stance_cmd
  {
    cdr << ros_message->stance_cmd;
  }

  // Field name: reboot_cmd
  {
    cdr << ros_message->reboot_cmd;
  }

  // Field name: set_home_pose_cmd
  {
    cdr << ros_message->set_home_pose_cmd;
  }

  // Field name: speed_cmd
  {
    cdr << ros_message->speed_cmd;
  }

  // Field name: speed_toggle_cmd
  {
    cdr << ros_message->speed_toggle_cmd;
  }

  return true;
}

static bool _HexJoy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HexJoy__ros_msg_type * ros_message = static_cast<_HexJoy__ros_msg_type *>(untyped_ros_message);
  // Field name: world_x_cmd
  {
    cdr >> ros_message->world_x_cmd;
  }

  // Field name: world_y_cmd
  {
    cdr >> ros_message->world_y_cmd;
  }

  // Field name: world_yaw_cmd
  {
    cdr >> ros_message->world_yaw_cmd;
  }

  // Field name: place_x_cmd
  {
    cdr >> ros_message->place_x_cmd;
  }

  // Field name: place_y_cmd
  {
    cdr >> ros_message->place_y_cmd;
  }

  // Field name: place_z_cmd
  {
    cdr >> ros_message->place_z_cmd;
  }

  // Field name: place_roll_cmd
  {
    cdr >> ros_message->place_roll_cmd;
  }

  // Field name: place_pitch_cmd
  {
    cdr >> ros_message->place_pitch_cmd;
  }

  // Field name: pose_cmd
  {
    cdr >> ros_message->pose_cmd;
  }

  // Field name: move_type_cmd
  {
    cdr >> ros_message->move_type_cmd;
  }

  // Field name: gait_toggle_cmd
  {
    cdr >> ros_message->gait_toggle_cmd;
  }

  // Field name: leg_toggle_cmd
  {
    cdr >> ros_message->leg_toggle_cmd;
  }

  // Field name: stance_cmd
  {
    cdr >> ros_message->stance_cmd;
  }

  // Field name: reboot_cmd
  {
    cdr >> ros_message->reboot_cmd;
  }

  // Field name: set_home_pose_cmd
  {
    cdr >> ros_message->set_home_pose_cmd;
  }

  // Field name: speed_cmd
  {
    cdr >> ros_message->speed_cmd;
  }

  // Field name: speed_toggle_cmd
  {
    cdr >> ros_message->speed_toggle_cmd;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t get_serialized_size_interbotix_xs_msgs__msg__HexJoy(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HexJoy__ros_msg_type * ros_message = static_cast<const _HexJoy__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name world_x_cmd
  {
    size_t item_size = sizeof(ros_message->world_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name world_y_cmd
  {
    size_t item_size = sizeof(ros_message->world_y_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name world_yaw_cmd
  {
    size_t item_size = sizeof(ros_message->world_yaw_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name place_x_cmd
  {
    size_t item_size = sizeof(ros_message->place_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name place_y_cmd
  {
    size_t item_size = sizeof(ros_message->place_y_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name place_z_cmd
  {
    size_t item_size = sizeof(ros_message->place_z_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name place_roll_cmd
  {
    size_t item_size = sizeof(ros_message->place_roll_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name place_pitch_cmd
  {
    size_t item_size = sizeof(ros_message->place_pitch_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_cmd
  {
    size_t item_size = sizeof(ros_message->pose_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name move_type_cmd
  {
    size_t item_size = sizeof(ros_message->move_type_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gait_toggle_cmd
  {
    size_t item_size = sizeof(ros_message->gait_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leg_toggle_cmd
  {
    size_t item_size = sizeof(ros_message->leg_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stance_cmd
  {
    size_t item_size = sizeof(ros_message->stance_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reboot_cmd
  {
    size_t item_size = sizeof(ros_message->reboot_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name set_home_pose_cmd
  {
    size_t item_size = sizeof(ros_message->set_home_pose_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_cmd
  {
    size_t item_size = sizeof(ros_message->speed_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_toggle_cmd
  {
    size_t item_size = sizeof(ros_message->speed_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HexJoy__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interbotix_xs_msgs__msg__HexJoy(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interbotix_xs_msgs
size_t max_serialized_size_interbotix_xs_msgs__msg__HexJoy(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: world_x_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: world_y_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: world_yaw_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: place_x_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: place_y_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: place_z_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: place_roll_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: place_pitch_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pose_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: move_type_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gait_toggle_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: leg_toggle_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stance_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reboot_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: set_home_pose_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_toggle_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _HexJoy__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interbotix_xs_msgs__msg__HexJoy(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HexJoy = {
  "interbotix_xs_msgs::msg",
  "HexJoy",
  _HexJoy__cdr_serialize,
  _HexJoy__cdr_deserialize,
  _HexJoy__get_serialized_size,
  _HexJoy__max_serialized_size
};

static rosidl_message_type_support_t _HexJoy__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HexJoy,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interbotix_xs_msgs, msg, HexJoy)() {
  return &_HexJoy__type_support;
}

#if defined(__cplusplus)
}
#endif
