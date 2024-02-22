// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__BUILDER_HPP_

#include "interbotix_xs_msgs/srv/detail/motor_gains__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorGains_Request_ki_vel
{
public:
  explicit Init_MotorGains_Request_ki_vel(::interbotix_xs_msgs::srv::MotorGains_Request & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::srv::MotorGains_Request ki_vel(::interbotix_xs_msgs::srv::MotorGains_Request::_ki_vel_type arg)
  {
    msg_.ki_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::MotorGains_Request msg_;
};

class Init_MotorGains_Request_kp_vel
{
public:
  explicit Init_MotorGains_Request_kp_vel(::interbotix_xs_msgs::srv::MotorGains_Request & msg)
  : msg_(msg)
  {}
  Init_MotorGains_Request_ki_vel kp_vel(::interbotix_xs_msgs::srv::MotorGains_Request::_kp_vel_type arg)
  {
    msg_.kp_vel = std::move(arg);
    return Init_MotorGains_Request_ki_vel(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::MotorGains_Request msg_;
};

class Init_MotorGains_Request_k2
{
public:
  explicit Init_MotorGains_Request_k2(::interbotix_xs_msgs::srv::MotorGains_Request & msg)
  : msg_(msg)
  {}
  Init_MotorGains_Request_kp_vel k2(::interbotix_xs_msgs::srv::MotorGains_Request::_k2_type arg)
  {
    msg_.k2 = std::move(arg);
    return Init_MotorGains_Request_kp_vel(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::MotorGains_Request msg_;
};

class Init_MotorGains_Request_k1
{
public:
  explicit Init_MotorGains_Request_k1(::interbotix_xs_msgs::srv::MotorGains_Request & msg)
  : msg_(msg)
  {}
  Init_MotorGains_Request_k2 k1(::interbotix_xs_msgs::srv::MotorGains_Request::_k1_type arg)
  {
    msg_.k1 = std::move(arg);
    return Init_MotorGains_Request_k2(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::MotorGains_Request msg_;
};

class Init_MotorGains_Request_kd_pos
{
public:
  explicit Init_MotorGains_Request_kd_pos(::interbotix_xs_msgs::srv::MotorGains_Request & msg)
  : msg_(msg)
  {}
  Init_MotorGains_Request_k1 kd_pos(::interbotix_xs_msgs::srv::MotorGains_Request::_kd_pos_type arg)
  {
    msg_.kd_pos = std::move(arg);
    return Init_MotorGains_Request_k1(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::MotorGains_Request msg_;
};

class Init_MotorGains_Request_ki_pos
{
public:
  explicit Init_MotorGains_Request_ki_pos(::interbotix_xs_msgs::srv::MotorGains_Request & msg)
  : msg_(msg)
  {}
  Init_MotorGains_Request_kd_pos ki_pos(::interbotix_xs_msgs::srv::MotorGains_Request::_ki_pos_type arg)
  {
    msg_.ki_pos = std::move(arg);
    return Init_MotorGains_Request_kd_pos(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::MotorGains_Request msg_;
};

class Init_MotorGains_Request_kp_pos
{
public:
  explicit Init_MotorGains_Request_kp_pos(::interbotix_xs_msgs::srv::MotorGains_Request & msg)
  : msg_(msg)
  {}
  Init_MotorGains_Request_ki_pos kp_pos(::interbotix_xs_msgs::srv::MotorGains_Request::_kp_pos_type arg)
  {
    msg_.kp_pos = std::move(arg);
    return Init_MotorGains_Request_ki_pos(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::MotorGains_Request msg_;
};

class Init_MotorGains_Request_name
{
public:
  explicit Init_MotorGains_Request_name(::interbotix_xs_msgs::srv::MotorGains_Request & msg)
  : msg_(msg)
  {}
  Init_MotorGains_Request_kp_pos name(::interbotix_xs_msgs::srv::MotorGains_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorGains_Request_kp_pos(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::MotorGains_Request msg_;
};

class Init_MotorGains_Request_cmd_type
{
public:
  Init_MotorGains_Request_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorGains_Request_name cmd_type(::interbotix_xs_msgs::srv::MotorGains_Request::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_MotorGains_Request_name(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::MotorGains_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::MotorGains_Request>()
{
  return interbotix_xs_msgs::srv::builder::Init_MotorGains_Request_cmd_type();
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
auto build<::interbotix_xs_msgs::srv::MotorGains_Response>()
{
  return ::interbotix_xs_msgs::srv::MotorGains_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__BUILDER_HPP_
