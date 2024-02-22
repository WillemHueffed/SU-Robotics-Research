// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interbotix_xs_msgs:msg/HexJoy.idl
// generated code does not contain a copyright notice
#include "interbotix_xs_msgs/msg/detail/hex_joy__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interbotix_xs_msgs/msg/detail/hex_joy__struct.hpp"

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

namespace interbotix_xs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
cdr_serialize(
  const interbotix_xs_msgs::msg::HexJoy & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: world_x_cmd
  cdr << ros_message.world_x_cmd;
  // Member: world_y_cmd
  cdr << ros_message.world_y_cmd;
  // Member: world_yaw_cmd
  cdr << ros_message.world_yaw_cmd;
  // Member: place_x_cmd
  cdr << ros_message.place_x_cmd;
  // Member: place_y_cmd
  cdr << ros_message.place_y_cmd;
  // Member: place_z_cmd
  cdr << ros_message.place_z_cmd;
  // Member: place_roll_cmd
  cdr << ros_message.place_roll_cmd;
  // Member: place_pitch_cmd
  cdr << ros_message.place_pitch_cmd;
  // Member: pose_cmd
  cdr << ros_message.pose_cmd;
  // Member: move_type_cmd
  cdr << ros_message.move_type_cmd;
  // Member: gait_toggle_cmd
  cdr << ros_message.gait_toggle_cmd;
  // Member: leg_toggle_cmd
  cdr << ros_message.leg_toggle_cmd;
  // Member: stance_cmd
  cdr << ros_message.stance_cmd;
  // Member: reboot_cmd
  cdr << ros_message.reboot_cmd;
  // Member: set_home_pose_cmd
  cdr << ros_message.set_home_pose_cmd;
  // Member: speed_cmd
  cdr << ros_message.speed_cmd;
  // Member: speed_toggle_cmd
  cdr << ros_message.speed_toggle_cmd;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interbotix_xs_msgs::msg::HexJoy & ros_message)
{
  // Member: world_x_cmd
  cdr >> ros_message.world_x_cmd;

  // Member: world_y_cmd
  cdr >> ros_message.world_y_cmd;

  // Member: world_yaw_cmd
  cdr >> ros_message.world_yaw_cmd;

  // Member: place_x_cmd
  cdr >> ros_message.place_x_cmd;

  // Member: place_y_cmd
  cdr >> ros_message.place_y_cmd;

  // Member: place_z_cmd
  cdr >> ros_message.place_z_cmd;

  // Member: place_roll_cmd
  cdr >> ros_message.place_roll_cmd;

  // Member: place_pitch_cmd
  cdr >> ros_message.place_pitch_cmd;

  // Member: pose_cmd
  cdr >> ros_message.pose_cmd;

  // Member: move_type_cmd
  cdr >> ros_message.move_type_cmd;

  // Member: gait_toggle_cmd
  cdr >> ros_message.gait_toggle_cmd;

  // Member: leg_toggle_cmd
  cdr >> ros_message.leg_toggle_cmd;

  // Member: stance_cmd
  cdr >> ros_message.stance_cmd;

  // Member: reboot_cmd
  cdr >> ros_message.reboot_cmd;

  // Member: set_home_pose_cmd
  cdr >> ros_message.set_home_pose_cmd;

  // Member: speed_cmd
  cdr >> ros_message.speed_cmd;

  // Member: speed_toggle_cmd
  cdr >> ros_message.speed_toggle_cmd;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
get_serialized_size(
  const interbotix_xs_msgs::msg::HexJoy & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: world_x_cmd
  {
    size_t item_size = sizeof(ros_message.world_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: world_y_cmd
  {
    size_t item_size = sizeof(ros_message.world_y_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: world_yaw_cmd
  {
    size_t item_size = sizeof(ros_message.world_yaw_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: place_x_cmd
  {
    size_t item_size = sizeof(ros_message.place_x_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: place_y_cmd
  {
    size_t item_size = sizeof(ros_message.place_y_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: place_z_cmd
  {
    size_t item_size = sizeof(ros_message.place_z_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: place_roll_cmd
  {
    size_t item_size = sizeof(ros_message.place_roll_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: place_pitch_cmd
  {
    size_t item_size = sizeof(ros_message.place_pitch_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pose_cmd
  {
    size_t item_size = sizeof(ros_message.pose_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: move_type_cmd
  {
    size_t item_size = sizeof(ros_message.move_type_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gait_toggle_cmd
  {
    size_t item_size = sizeof(ros_message.gait_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leg_toggle_cmd
  {
    size_t item_size = sizeof(ros_message.leg_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stance_cmd
  {
    size_t item_size = sizeof(ros_message.stance_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reboot_cmd
  {
    size_t item_size = sizeof(ros_message.reboot_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_home_pose_cmd
  {
    size_t item_size = sizeof(ros_message.set_home_pose_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_cmd
  {
    size_t item_size = sizeof(ros_message.speed_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_toggle_cmd
  {
    size_t item_size = sizeof(ros_message.speed_toggle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interbotix_xs_msgs
max_serialized_size_HexJoy(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: world_x_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: world_y_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: world_yaw_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: place_x_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: place_y_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: place_z_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: place_roll_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: place_pitch_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pose_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: move_type_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gait_toggle_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: leg_toggle_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stance_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reboot_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: set_home_pose_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_toggle_cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _HexJoy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interbotix_xs_msgs::msg::HexJoy *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HexJoy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interbotix_xs_msgs::msg::HexJoy *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HexJoy__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interbotix_xs_msgs::msg::HexJoy *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HexJoy__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HexJoy(full_bounded, 0);
}

static message_type_support_callbacks_t _HexJoy__callbacks = {
  "interbotix_xs_msgs::msg",
  "HexJoy",
  _HexJoy__cdr_serialize,
  _HexJoy__cdr_deserialize,
  _HexJoy__get_serialized_size,
  _HexJoy__max_serialized_size
};

static rosidl_message_type_support_t _HexJoy__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HexJoy__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interbotix_xs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<interbotix_xs_msgs::msg::HexJoy>()
{
  return &interbotix_xs_msgs::msg::typesupport_fastrtps_cpp::_HexJoy__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interbotix_xs_msgs, msg, HexJoy)() {
  return &interbotix_xs_msgs::msg::typesupport_fastrtps_cpp::_HexJoy__handle;
}

#ifdef __cplusplus
}
#endif
