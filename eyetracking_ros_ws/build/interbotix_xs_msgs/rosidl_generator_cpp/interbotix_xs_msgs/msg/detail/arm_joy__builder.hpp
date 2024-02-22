// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:msg/ArmJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__ARM_JOY__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__ARM_JOY__BUILDER_HPP_

#include "interbotix_xs_msgs/msg/detail/arm_joy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmJoy_torque_cmd
{
public:
  explicit Init_ArmJoy_torque_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::msg::ArmJoy torque_cmd(::interbotix_xs_msgs::msg::ArmJoy::_torque_cmd_type arg)
  {
    msg_.torque_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_gripper_pwm_cmd
{
public:
  explicit Init_ArmJoy_gripper_pwm_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_torque_cmd gripper_pwm_cmd(::interbotix_xs_msgs::msg::ArmJoy::_gripper_pwm_cmd_type arg)
  {
    msg_.gripper_pwm_cmd = std::move(arg);
    return Init_ArmJoy_torque_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_speed_toggle_cmd
{
public:
  explicit Init_ArmJoy_speed_toggle_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_gripper_pwm_cmd speed_toggle_cmd(::interbotix_xs_msgs::msg::ArmJoy::_speed_toggle_cmd_type arg)
  {
    msg_.speed_toggle_cmd = std::move(arg);
    return Init_ArmJoy_gripper_pwm_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_speed_cmd
{
public:
  explicit Init_ArmJoy_speed_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_speed_toggle_cmd speed_cmd(::interbotix_xs_msgs::msg::ArmJoy::_speed_cmd_type arg)
  {
    msg_.speed_cmd = std::move(arg);
    return Init_ArmJoy_speed_toggle_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_pose_cmd
{
public:
  explicit Init_ArmJoy_pose_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_speed_cmd pose_cmd(::interbotix_xs_msgs::msg::ArmJoy::_pose_cmd_type arg)
  {
    msg_.pose_cmd = std::move(arg);
    return Init_ArmJoy_speed_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_gripper_cmd
{
public:
  explicit Init_ArmJoy_gripper_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_pose_cmd gripper_cmd(::interbotix_xs_msgs::msg::ArmJoy::_gripper_cmd_type arg)
  {
    msg_.gripper_cmd = std::move(arg);
    return Init_ArmJoy_pose_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_waist_cmd
{
public:
  explicit Init_ArmJoy_waist_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_gripper_cmd waist_cmd(::interbotix_xs_msgs::msg::ArmJoy::_waist_cmd_type arg)
  {
    msg_.waist_cmd = std::move(arg);
    return Init_ArmJoy_gripper_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_ee_pitch_cmd
{
public:
  explicit Init_ArmJoy_ee_pitch_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_waist_cmd ee_pitch_cmd(::interbotix_xs_msgs::msg::ArmJoy::_ee_pitch_cmd_type arg)
  {
    msg_.ee_pitch_cmd = std::move(arg);
    return Init_ArmJoy_waist_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_ee_roll_cmd
{
public:
  explicit Init_ArmJoy_ee_roll_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_ee_pitch_cmd ee_roll_cmd(::interbotix_xs_msgs::msg::ArmJoy::_ee_roll_cmd_type arg)
  {
    msg_.ee_roll_cmd = std::move(arg);
    return Init_ArmJoy_ee_pitch_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_ee_z_cmd
{
public:
  explicit Init_ArmJoy_ee_z_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_ee_roll_cmd ee_z_cmd(::interbotix_xs_msgs::msg::ArmJoy::_ee_z_cmd_type arg)
  {
    msg_.ee_z_cmd = std::move(arg);
    return Init_ArmJoy_ee_roll_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_ee_y_cmd
{
public:
  explicit Init_ArmJoy_ee_y_cmd(::interbotix_xs_msgs::msg::ArmJoy & msg)
  : msg_(msg)
  {}
  Init_ArmJoy_ee_z_cmd ee_y_cmd(::interbotix_xs_msgs::msg::ArmJoy::_ee_y_cmd_type arg)
  {
    msg_.ee_y_cmd = std::move(arg);
    return Init_ArmJoy_ee_z_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

class Init_ArmJoy_ee_x_cmd
{
public:
  Init_ArmJoy_ee_x_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmJoy_ee_y_cmd ee_x_cmd(::interbotix_xs_msgs::msg::ArmJoy::_ee_x_cmd_type arg)
  {
    msg_.ee_x_cmd = std::move(arg);
    return Init_ArmJoy_ee_y_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::ArmJoy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::msg::ArmJoy>()
{
  return interbotix_xs_msgs::msg::builder::Init_ArmJoy_ee_x_cmd();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__ARM_JOY__BUILDER_HPP_
