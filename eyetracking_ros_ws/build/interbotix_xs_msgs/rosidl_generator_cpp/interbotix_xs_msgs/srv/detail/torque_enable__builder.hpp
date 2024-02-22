// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:srv/TorqueEnable.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__TORQUE_ENABLE__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__TORQUE_ENABLE__BUILDER_HPP_

#include "interbotix_xs_msgs/srv/detail/torque_enable__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_TorqueEnable_Request_enable
{
public:
  explicit Init_TorqueEnable_Request_enable(::interbotix_xs_msgs::srv::TorqueEnable_Request & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::srv::TorqueEnable_Request enable(::interbotix_xs_msgs::srv::TorqueEnable_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::TorqueEnable_Request msg_;
};

class Init_TorqueEnable_Request_name
{
public:
  explicit Init_TorqueEnable_Request_name(::interbotix_xs_msgs::srv::TorqueEnable_Request & msg)
  : msg_(msg)
  {}
  Init_TorqueEnable_Request_enable name(::interbotix_xs_msgs::srv::TorqueEnable_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TorqueEnable_Request_enable(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::TorqueEnable_Request msg_;
};

class Init_TorqueEnable_Request_cmd_type
{
public:
  Init_TorqueEnable_Request_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TorqueEnable_Request_name cmd_type(::interbotix_xs_msgs::srv::TorqueEnable_Request::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_TorqueEnable_Request_name(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::TorqueEnable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::TorqueEnable_Request>()
{
  return interbotix_xs_msgs::srv::builder::Init_TorqueEnable_Request_cmd_type();
}

}  // namespace interbotix_xs_msgs


namespace interbotix_xs_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::TorqueEnable_Response>()
{
  return ::interbotix_xs_msgs::srv::TorqueEnable_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__TORQUE_ENABLE__BUILDER_HPP_
