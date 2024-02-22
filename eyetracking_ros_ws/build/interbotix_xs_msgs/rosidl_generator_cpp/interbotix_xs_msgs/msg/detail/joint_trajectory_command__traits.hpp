// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_xs_msgs:msg/JointTrajectoryCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__TRAITS_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__TRAITS_HPP_

#include "interbotix_xs_msgs/msg/detail/joint_trajectory_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'traj'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::msg::JointTrajectoryCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_type: ";
    value_to_yaml(msg.cmd_type, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traj:\n";
    to_yaml(msg.traj, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_xs_msgs::msg::JointTrajectoryCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::msg::JointTrajectoryCommand>()
{
  return "interbotix_xs_msgs::msg::JointTrajectoryCommand";
}

template<>
inline const char * name<interbotix_xs_msgs::msg::JointTrajectoryCommand>()
{
  return "interbotix_xs_msgs/msg/JointTrajectoryCommand";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::msg::JointTrajectoryCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::msg::JointTrajectoryCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_xs_msgs::msg::JointTrajectoryCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__TRAITS_HPP_
