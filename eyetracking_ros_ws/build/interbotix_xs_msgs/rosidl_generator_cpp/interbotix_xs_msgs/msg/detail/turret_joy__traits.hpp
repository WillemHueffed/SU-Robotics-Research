// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_xs_msgs:msg/TurretJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__TRAITS_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__TRAITS_HPP_

#include "interbotix_xs_msgs/msg/detail/turret_joy__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::msg::TurretJoy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pan_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_cmd: ";
    value_to_yaml(msg.pan_cmd, out);
    out << "\n";
  }

  // member: tilt_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_cmd: ";
    value_to_yaml(msg.tilt_cmd, out);
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

inline std::string to_yaml(const interbotix_xs_msgs::msg::TurretJoy & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::msg::TurretJoy>()
{
  return "interbotix_xs_msgs::msg::TurretJoy";
}

template<>
inline const char * name<interbotix_xs_msgs::msg::TurretJoy>()
{
  return "interbotix_xs_msgs/msg/TurretJoy";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::msg::TurretJoy>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::msg::TurretJoy>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_xs_msgs::msg::TurretJoy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__TRAITS_HPP_
