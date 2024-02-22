// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:msg/TurretJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__BUILDER_HPP_

#include "interbotix_xs_msgs/msg/detail/turret_joy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace msg
{

namespace builder
{

class Init_TurretJoy_speed_toggle_cmd
{
public:
  explicit Init_TurretJoy_speed_toggle_cmd(::interbotix_xs_msgs::msg::TurretJoy & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::msg::TurretJoy speed_toggle_cmd(::interbotix_xs_msgs::msg::TurretJoy::_speed_toggle_cmd_type arg)
  {
    msg_.speed_toggle_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::TurretJoy msg_;
};

class Init_TurretJoy_speed_cmd
{
public:
  explicit Init_TurretJoy_speed_cmd(::interbotix_xs_msgs::msg::TurretJoy & msg)
  : msg_(msg)
  {}
  Init_TurretJoy_speed_toggle_cmd speed_cmd(::interbotix_xs_msgs::msg::TurretJoy::_speed_cmd_type arg)
  {
    msg_.speed_cmd = std::move(arg);
    return Init_TurretJoy_speed_toggle_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::TurretJoy msg_;
};

class Init_TurretJoy_tilt_cmd
{
public:
  explicit Init_TurretJoy_tilt_cmd(::interbotix_xs_msgs::msg::TurretJoy & msg)
  : msg_(msg)
  {}
  Init_TurretJoy_speed_cmd tilt_cmd(::interbotix_xs_msgs::msg::TurretJoy::_tilt_cmd_type arg)
  {
    msg_.tilt_cmd = std::move(arg);
    return Init_TurretJoy_speed_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::TurretJoy msg_;
};

class Init_TurretJoy_pan_cmd
{
public:
  Init_TurretJoy_pan_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurretJoy_tilt_cmd pan_cmd(::interbotix_xs_msgs::msg::TurretJoy::_pan_cmd_type arg)
  {
    msg_.pan_cmd = std::move(arg);
    return Init_TurretJoy_tilt_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::TurretJoy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::msg::TurretJoy>()
{
  return interbotix_xs_msgs::msg::builder::Init_TurretJoy_pan_cmd();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__BUILDER_HPP_
