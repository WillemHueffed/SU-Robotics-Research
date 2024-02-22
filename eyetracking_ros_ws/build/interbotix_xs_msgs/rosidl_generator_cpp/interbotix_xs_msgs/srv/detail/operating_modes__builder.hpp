// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:srv/OperatingModes.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__BUILDER_HPP_

#include "interbotix_xs_msgs/srv/detail/operating_modes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_OperatingModes_Request_profile_acceleration
{
public:
  explicit Init_OperatingModes_Request_profile_acceleration(::interbotix_xs_msgs::srv::OperatingModes_Request & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::srv::OperatingModes_Request profile_acceleration(::interbotix_xs_msgs::srv::OperatingModes_Request::_profile_acceleration_type arg)
  {
    msg_.profile_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::OperatingModes_Request msg_;
};

class Init_OperatingModes_Request_profile_velocity
{
public:
  explicit Init_OperatingModes_Request_profile_velocity(::interbotix_xs_msgs::srv::OperatingModes_Request & msg)
  : msg_(msg)
  {}
  Init_OperatingModes_Request_profile_acceleration profile_velocity(::interbotix_xs_msgs::srv::OperatingModes_Request::_profile_velocity_type arg)
  {
    msg_.profile_velocity = std::move(arg);
    return Init_OperatingModes_Request_profile_acceleration(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::OperatingModes_Request msg_;
};

class Init_OperatingModes_Request_profile_type
{
public:
  explicit Init_OperatingModes_Request_profile_type(::interbotix_xs_msgs::srv::OperatingModes_Request & msg)
  : msg_(msg)
  {}
  Init_OperatingModes_Request_profile_velocity profile_type(::interbotix_xs_msgs::srv::OperatingModes_Request::_profile_type_type arg)
  {
    msg_.profile_type = std::move(arg);
    return Init_OperatingModes_Request_profile_velocity(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::OperatingModes_Request msg_;
};

class Init_OperatingModes_Request_mode
{
public:
  explicit Init_OperatingModes_Request_mode(::interbotix_xs_msgs::srv::OperatingModes_Request & msg)
  : msg_(msg)
  {}
  Init_OperatingModes_Request_profile_type mode(::interbotix_xs_msgs::srv::OperatingModes_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_OperatingModes_Request_profile_type(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::OperatingModes_Request msg_;
};

class Init_OperatingModes_Request_name
{
public:
  explicit Init_OperatingModes_Request_name(::interbotix_xs_msgs::srv::OperatingModes_Request & msg)
  : msg_(msg)
  {}
  Init_OperatingModes_Request_mode name(::interbotix_xs_msgs::srv::OperatingModes_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_OperatingModes_Request_mode(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::OperatingModes_Request msg_;
};

class Init_OperatingModes_Request_cmd_type
{
public:
  Init_OperatingModes_Request_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperatingModes_Request_name cmd_type(::interbotix_xs_msgs::srv::OperatingModes_Request::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_OperatingModes_Request_name(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::OperatingModes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::OperatingModes_Request>()
{
  return interbotix_xs_msgs::srv::builder::Init_OperatingModes_Request_cmd_type();
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
auto build<::interbotix_xs_msgs::srv::OperatingModes_Response>()
{
  return ::interbotix_xs_msgs::srv::OperatingModes_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__BUILDER_HPP_
