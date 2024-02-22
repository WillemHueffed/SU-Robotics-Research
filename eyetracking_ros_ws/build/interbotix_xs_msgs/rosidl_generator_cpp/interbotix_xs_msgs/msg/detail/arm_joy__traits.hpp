// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_xs_msgs:msg/ArmJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__ARM_JOY__TRAITS_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__ARM_JOY__TRAITS_HPP_

#include "interbotix_xs_msgs/msg/detail/arm_joy__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::msg::ArmJoy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ee_x_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_x_cmd: ";
    value_to_yaml(msg.ee_x_cmd, out);
    out << "\n";
  }

  // member: ee_y_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_y_cmd: ";
    value_to_yaml(msg.ee_y_cmd, out);
    out << "\n";
  }

  // member: ee_z_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_z_cmd: ";
    value_to_yaml(msg.ee_z_cmd, out);
    out << "\n";
  }

  // member: ee_roll_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_roll_cmd: ";
    value_to_yaml(msg.ee_roll_cmd, out);
    out << "\n";
  }

  // member: ee_pitch_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_pitch_cmd: ";
    value_to_yaml(msg.ee_pitch_cmd, out);
    out << "\n";
  }

  // member: waist_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waist_cmd: ";
    value_to_yaml(msg.waist_cmd, out);
    out << "\n";
  }

  // member: gripper_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_cmd: ";
    value_to_yaml(msg.gripper_cmd, out);
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

  // member: gripper_pwm_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_pwm_cmd: ";
    value_to_yaml(msg.gripper_pwm_cmd, out);
    out << "\n";
  }

  // member: torque_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_cmd: ";
    value_to_yaml(msg.torque_cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_xs_msgs::msg::ArmJoy & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::msg::ArmJoy>()
{
  return "interbotix_xs_msgs::msg::ArmJoy";
}

template<>
inline const char * name<interbotix_xs_msgs::msg::ArmJoy>()
{
  return "interbotix_xs_msgs/msg/ArmJoy";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::msg::ArmJoy>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::msg::ArmJoy>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_xs_msgs::msg::ArmJoy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__ARM_JOY__TRAITS_HPP_
