// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:msg/JointSingleCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__BUILDER_HPP_

#include "interbotix_xs_msgs/msg/detail/joint_single_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace msg
{

namespace builder
{

class Init_JointSingleCommand_cmd
{
public:
  explicit Init_JointSingleCommand_cmd(::interbotix_xs_msgs::msg::JointSingleCommand & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::msg::JointSingleCommand cmd(::interbotix_xs_msgs::msg::JointSingleCommand::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::JointSingleCommand msg_;
};

class Init_JointSingleCommand_name
{
public:
  Init_JointSingleCommand_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointSingleCommand_cmd name(::interbotix_xs_msgs::msg::JointSingleCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointSingleCommand_cmd(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::JointSingleCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::msg::JointSingleCommand>()
{
  return interbotix_xs_msgs::msg::builder::Init_JointSingleCommand_name();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__BUILDER_HPP_
