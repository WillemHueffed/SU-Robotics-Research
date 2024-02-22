// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:msg/LocobotJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__BUILDER_HPP_

#include "interbotix_xs_msgs/msg/detail/locobot_joy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace msg
{

namespace builder
{

class Init_LocobotJoy_gripper_pwm_cmd
{
public:
  explicit Init_LocobotJoy_gripper_pwm_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::msg::LocobotJoy gripper_pwm_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_gripper_pwm_cmd_type arg)
  {
    msg_.gripper_pwm_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_speed_toggle_cmd
{
public:
  explicit Init_LocobotJoy_speed_toggle_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_gripper_pwm_cmd speed_toggle_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_speed_toggle_cmd_type arg)
  {
    msg_.speed_toggle_cmd = std::move(arg);
    return Init_LocobotJoy_gripper_pwm_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_speed_cmd
{
public:
  explicit Init_LocobotJoy_speed_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_speed_toggle_cmd speed_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_speed_cmd_type arg)
  {
    msg_.speed_cmd = std::move(arg);
    return Init_LocobotJoy_speed_toggle_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_pose_cmd
{
public:
  explicit Init_LocobotJoy_pose_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_speed_cmd pose_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_pose_cmd_type arg)
  {
    msg_.pose_cmd = std::move(arg);
    return Init_LocobotJoy_speed_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_gripper_cmd
{
public:
  explicit Init_LocobotJoy_gripper_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_pose_cmd gripper_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_gripper_cmd_type arg)
  {
    msg_.gripper_cmd = std::move(arg);
    return Init_LocobotJoy_pose_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_waist_cmd
{
public:
  explicit Init_LocobotJoy_waist_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_gripper_cmd waist_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_waist_cmd_type arg)
  {
    msg_.waist_cmd = std::move(arg);
    return Init_LocobotJoy_gripper_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_ee_pitch_cmd
{
public:
  explicit Init_LocobotJoy_ee_pitch_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_waist_cmd ee_pitch_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_ee_pitch_cmd_type arg)
  {
    msg_.ee_pitch_cmd = std::move(arg);
    return Init_LocobotJoy_waist_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_ee_roll_cmd
{
public:
  explicit Init_LocobotJoy_ee_roll_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_ee_pitch_cmd ee_roll_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_ee_roll_cmd_type arg)
  {
    msg_.ee_roll_cmd = std::move(arg);
    return Init_LocobotJoy_ee_pitch_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_ee_z_cmd
{
public:
  explicit Init_LocobotJoy_ee_z_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_ee_roll_cmd ee_z_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_ee_z_cmd_type arg)
  {
    msg_.ee_z_cmd = std::move(arg);
    return Init_LocobotJoy_ee_roll_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_ee_y_cmd
{
public:
  explicit Init_LocobotJoy_ee_y_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_ee_z_cmd ee_y_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_ee_y_cmd_type arg)
  {
    msg_.ee_y_cmd = std::move(arg);
    return Init_LocobotJoy_ee_z_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_ee_x_cmd
{
public:
  explicit Init_LocobotJoy_ee_x_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_ee_y_cmd ee_x_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_ee_x_cmd_type arg)
  {
    msg_.ee_x_cmd = std::move(arg);
    return Init_LocobotJoy_ee_y_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_tilt_cmd
{
public:
  explicit Init_LocobotJoy_tilt_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_ee_x_cmd tilt_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_tilt_cmd_type arg)
  {
    msg_.tilt_cmd = std::move(arg);
    return Init_LocobotJoy_ee_x_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_pan_cmd
{
public:
  explicit Init_LocobotJoy_pan_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_tilt_cmd pan_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_pan_cmd_type arg)
  {
    msg_.pan_cmd = std::move(arg);
    return Init_LocobotJoy_tilt_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_base_reset_odom_cmd
{
public:
  explicit Init_LocobotJoy_base_reset_odom_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_pan_cmd base_reset_odom_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_base_reset_odom_cmd_type arg)
  {
    msg_.base_reset_odom_cmd = std::move(arg);
    return Init_LocobotJoy_pan_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_base_theta_cmd
{
public:
  explicit Init_LocobotJoy_base_theta_cmd(::interbotix_xs_msgs::msg::LocobotJoy & msg)
  : msg_(msg)
  {}
  Init_LocobotJoy_base_reset_odom_cmd base_theta_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_base_theta_cmd_type arg)
  {
    msg_.base_theta_cmd = std::move(arg);
    return Init_LocobotJoy_base_reset_odom_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

class Init_LocobotJoy_base_x_cmd
{
public:
  Init_LocobotJoy_base_x_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocobotJoy_base_theta_cmd base_x_cmd(::interbotix_xs_msgs::msg::LocobotJoy::_base_x_cmd_type arg)
  {
    msg_.base_x_cmd = std::move(arg);
    return Init_LocobotJoy_base_theta_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::LocobotJoy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::msg::LocobotJoy>()
{
  return interbotix_xs_msgs::msg::builder::Init_LocobotJoy_base_x_cmd();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__BUILDER_HPP_
