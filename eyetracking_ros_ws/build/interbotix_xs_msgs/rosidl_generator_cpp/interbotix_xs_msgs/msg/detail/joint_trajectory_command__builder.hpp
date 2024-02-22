// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:msg/JointTrajectoryCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__BUILDER_HPP_

#include "interbotix_xs_msgs/msg/detail/joint_trajectory_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTrajectoryCommand_traj
{
public:
  explicit Init_JointTrajectoryCommand_traj(::interbotix_xs_msgs::msg::JointTrajectoryCommand & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::msg::JointTrajectoryCommand traj(::interbotix_xs_msgs::msg::JointTrajectoryCommand::_traj_type arg)
  {
    msg_.traj = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::JointTrajectoryCommand msg_;
};

class Init_JointTrajectoryCommand_name
{
public:
  explicit Init_JointTrajectoryCommand_name(::interbotix_xs_msgs::msg::JointTrajectoryCommand & msg)
  : msg_(msg)
  {}
  Init_JointTrajectoryCommand_traj name(::interbotix_xs_msgs::msg::JointTrajectoryCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointTrajectoryCommand_traj(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::JointTrajectoryCommand msg_;
};

class Init_JointTrajectoryCommand_cmd_type
{
public:
  Init_JointTrajectoryCommand_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTrajectoryCommand_name cmd_type(::interbotix_xs_msgs::msg::JointTrajectoryCommand::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_JointTrajectoryCommand_name(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::JointTrajectoryCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::msg::JointTrajectoryCommand>()
{
  return interbotix_xs_msgs::msg::builder::Init_JointTrajectoryCommand_cmd_type();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__BUILDER_HPP_
