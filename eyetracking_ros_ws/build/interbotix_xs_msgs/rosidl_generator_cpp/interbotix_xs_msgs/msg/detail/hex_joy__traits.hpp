// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_xs_msgs:msg/HexJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__TRAITS_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__TRAITS_HPP_

#include "interbotix_xs_msgs/msg/detail/hex_joy__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::msg::HexJoy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: world_x_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_x_cmd: ";
    value_to_yaml(msg.world_x_cmd, out);
    out << "\n";
  }

  // member: world_y_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_y_cmd: ";
    value_to_yaml(msg.world_y_cmd, out);
    out << "\n";
  }

  // member: world_yaw_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_yaw_cmd: ";
    value_to_yaml(msg.world_yaw_cmd, out);
    out << "\n";
  }

  // member: place_x_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_x_cmd: ";
    value_to_yaml(msg.place_x_cmd, out);
    out << "\n";
  }

  // member: place_y_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_y_cmd: ";
    value_to_yaml(msg.place_y_cmd, out);
    out << "\n";
  }

  // member: place_z_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_z_cmd: ";
    value_to_yaml(msg.place_z_cmd, out);
    out << "\n";
  }

  // member: place_roll_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_roll_cmd: ";
    value_to_yaml(msg.place_roll_cmd, out);
    out << "\n";
  }

  // member: place_pitch_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_pitch_cmd: ";
    value_to_yaml(msg.place_pitch_cmd, out);
    out << "\n";
  }

  // member: pose_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_cmd: ";
    value_to_yaml(msg.pose_cmd, out);
    out << "\n";
  }

  // member: move_type_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_type_cmd: ";
    value_to_yaml(msg.move_type_cmd, out);
    out << "\n";
  }

  // member: gait_toggle_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_toggle_cmd: ";
    value_to_yaml(msg.gait_toggle_cmd, out);
    out << "\n";
  }

  // member: leg_toggle_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_toggle_cmd: ";
    value_to_yaml(msg.leg_toggle_cmd, out);
    out << "\n";
  }

  // member: stance_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stance_cmd: ";
    value_to_yaml(msg.stance_cmd, out);
    out << "\n";
  }

  // member: reboot_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reboot_cmd: ";
    value_to_yaml(msg.reboot_cmd, out);
    out << "\n";
  }

  // member: set_home_pose_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_home_pose_cmd: ";
    value_to_yaml(msg.set_home_pose_cmd, out);
    out << "\n";
  }

  // member: speed_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_cmd: ";
    value_to_yaml(msg.speed_cmd, out);
    out << "\n";
  }

  // member: speed_toggle_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_toggle_cmd: ";
    value_to_yaml(msg.speed_toggle_cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_xs_msgs::msg::HexJoy & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::msg::HexJoy>()
{
  return "interbotix_xs_msgs::msg::HexJoy";
}

template<>
inline const char * name<interbotix_xs_msgs::msg::HexJoy>()
{
  return "interbotix_xs_msgs/msg/HexJoy";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::msg::HexJoy>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::msg::HexJoy>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_xs_msgs::msg::HexJoy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__TRAITS_HPP_
