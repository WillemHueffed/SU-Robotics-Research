// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:msg/HexJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__BUILDER_HPP_

#include "interbotix_xs_msgs/msg/detail/hex_joy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace msg
{

namespace builder
{

class Init_HexJoy_speed_toggle_cmd
{
public:
  explicit Init_HexJoy_speed_toggle_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::msg::HexJoy speed_toggle_cmd(::interbotix_xs_msgs::msg::HexJoy::_speed_toggle_cmd_type arg)
  {
    msg_.speed_toggle_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_speed_cmd
{
public:
  explicit Init_HexJoy_speed_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_speed_toggle_cmd speed_cmd(::interbotix_xs_msgs::msg::HexJoy::_speed_cmd_type arg)
  {
    msg_.speed_cmd = std::move(arg);
    return Init_HexJoy_speed_toggle_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_set_home_pose_cmd
{
public:
  explicit Init_HexJoy_set_home_pose_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_speed_cmd set_home_pose_cmd(::interbotix_xs_msgs::msg::HexJoy::_set_home_pose_cmd_type arg)
  {
    msg_.set_home_pose_cmd = std::move(arg);
    return Init_HexJoy_speed_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_reboot_cmd
{
public:
  explicit Init_HexJoy_reboot_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_set_home_pose_cmd reboot_cmd(::interbotix_xs_msgs::msg::HexJoy::_reboot_cmd_type arg)
  {
    msg_.reboot_cmd = std::move(arg);
    return Init_HexJoy_set_home_pose_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_stance_cmd
{
public:
  explicit Init_HexJoy_stance_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_reboot_cmd stance_cmd(::interbotix_xs_msgs::msg::HexJoy::_stance_cmd_type arg)
  {
    msg_.stance_cmd = std::move(arg);
    return Init_HexJoy_reboot_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_leg_toggle_cmd
{
public:
  explicit Init_HexJoy_leg_toggle_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_stance_cmd leg_toggle_cmd(::interbotix_xs_msgs::msg::HexJoy::_leg_toggle_cmd_type arg)
  {
    msg_.leg_toggle_cmd = std::move(arg);
    return Init_HexJoy_stance_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_gait_toggle_cmd
{
public:
  explicit Init_HexJoy_gait_toggle_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_leg_toggle_cmd gait_toggle_cmd(::interbotix_xs_msgs::msg::HexJoy::_gait_toggle_cmd_type arg)
  {
    msg_.gait_toggle_cmd = std::move(arg);
    return Init_HexJoy_leg_toggle_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_move_type_cmd
{
public:
  explicit Init_HexJoy_move_type_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_gait_toggle_cmd move_type_cmd(::interbotix_xs_msgs::msg::HexJoy::_move_type_cmd_type arg)
  {
    msg_.move_type_cmd = std::move(arg);
    return Init_HexJoy_gait_toggle_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_pose_cmd
{
public:
  explicit Init_HexJoy_pose_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_move_type_cmd pose_cmd(::interbotix_xs_msgs::msg::HexJoy::_pose_cmd_type arg)
  {
    msg_.pose_cmd = std::move(arg);
    return Init_HexJoy_move_type_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_place_pitch_cmd
{
public:
  explicit Init_HexJoy_place_pitch_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_pose_cmd place_pitch_cmd(::interbotix_xs_msgs::msg::HexJoy::_place_pitch_cmd_type arg)
  {
    msg_.place_pitch_cmd = std::move(arg);
    return Init_HexJoy_pose_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_place_roll_cmd
{
public:
  explicit Init_HexJoy_place_roll_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_place_pitch_cmd place_roll_cmd(::interbotix_xs_msgs::msg::HexJoy::_place_roll_cmd_type arg)
  {
    msg_.place_roll_cmd = std::move(arg);
    return Init_HexJoy_place_pitch_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_place_z_cmd
{
public:
  explicit Init_HexJoy_place_z_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_place_roll_cmd place_z_cmd(::interbotix_xs_msgs::msg::HexJoy::_place_z_cmd_type arg)
  {
    msg_.place_z_cmd = std::move(arg);
    return Init_HexJoy_place_roll_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_place_y_cmd
{
public:
  explicit Init_HexJoy_place_y_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_place_z_cmd place_y_cmd(::interbotix_xs_msgs::msg::HexJoy::_place_y_cmd_type arg)
  {
    msg_.place_y_cmd = std::move(arg);
    return Init_HexJoy_place_z_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_place_x_cmd
{
public:
  explicit Init_HexJoy_place_x_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_place_y_cmd place_x_cmd(::interbotix_xs_msgs::msg::HexJoy::_place_x_cmd_type arg)
  {
    msg_.place_x_cmd = std::move(arg);
    return Init_HexJoy_place_y_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_world_yaw_cmd
{
public:
  explicit Init_HexJoy_world_yaw_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_place_x_cmd world_yaw_cmd(::interbotix_xs_msgs::msg::HexJoy::_world_yaw_cmd_type arg)
  {
    msg_.world_yaw_cmd = std::move(arg);
    return Init_HexJoy_place_x_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_world_y_cmd
{
public:
  explicit Init_HexJoy_world_y_cmd(::interbotix_xs_msgs::msg::HexJoy & msg)
  : msg_(msg)
  {}
  Init_HexJoy_world_yaw_cmd world_y_cmd(::interbotix_xs_msgs::msg::HexJoy::_world_y_cmd_type arg)
  {
    msg_.world_y_cmd = std::move(arg);
    return Init_HexJoy_world_yaw_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

class Init_HexJoy_world_x_cmd
{
public:
  Init_HexJoy_world_x_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HexJoy_world_y_cmd world_x_cmd(::interbotix_xs_msgs::msg::HexJoy::_world_x_cmd_type arg)
  {
    msg_.world_x_cmd = std::move(arg);
    return Init_HexJoy_world_y_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::HexJoy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::msg::HexJoy>()
{
  return interbotix_xs_msgs::msg::builder::Init_HexJoy_world_x_cmd();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__BUILDER_HPP_
