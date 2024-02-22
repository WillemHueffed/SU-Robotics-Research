// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:msg/JointTemps.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TEMPS__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TEMPS__BUILDER_HPP_

#include "interbotix_xs_msgs/msg/detail/joint_temps__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace msg
{

namespace builder
{

class Init_JointTemps_temps
{
public:
  explicit Init_JointTemps_temps(::interbotix_xs_msgs::msg::JointTemps & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::msg::JointTemps temps(::interbotix_xs_msgs::msg::JointTemps::_temps_type arg)
  {
    msg_.temps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::JointTemps msg_;
};

class Init_JointTemps_names
{
public:
  Init_JointTemps_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointTemps_temps names(::interbotix_xs_msgs::msg::JointTemps::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_JointTemps_temps(msg_);
  }

private:
  ::interbotix_xs_msgs::msg::JointTemps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::msg::JointTemps>()
{
  return interbotix_xs_msgs::msg::builder::Init_JointTemps_names();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TEMPS__BUILDER_HPP_
