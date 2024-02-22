// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_xs_msgs:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__BUILDER_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__BUILDER_HPP_

#include "interbotix_xs_msgs/srv/detail/robot_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_RobotInfo_Request_name
{
public:
  explicit Init_RobotInfo_Request_name(::interbotix_xs_msgs::srv::RobotInfo_Request & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::srv::RobotInfo_Request name(::interbotix_xs_msgs::srv::RobotInfo_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Request msg_;
};

class Init_RobotInfo_Request_cmd_type
{
public:
  Init_RobotInfo_Request_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotInfo_Request_name cmd_type(::interbotix_xs_msgs::srv::RobotInfo_Request::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_RobotInfo_Request_name(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::RobotInfo_Request>()
{
  return interbotix_xs_msgs::srv::builder::Init_RobotInfo_Request_cmd_type();
}

}  // namespace interbotix_xs_msgs


namespace interbotix_xs_msgs
{

namespace srv
{

namespace builder
{

class Init_RobotInfo_Response_name
{
public:
  explicit Init_RobotInfo_Response_name(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  ::interbotix_xs_msgs::srv::RobotInfo_Response name(::interbotix_xs_msgs::srv::RobotInfo_Response::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_num_joints
{
public:
  explicit Init_RobotInfo_Response_num_joints(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_Response_name num_joints(::interbotix_xs_msgs::srv::RobotInfo_Response::_num_joints_type arg)
  {
    msg_.num_joints = std::move(arg);
    return Init_RobotInfo_Response_name(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_joint_state_indices
{
public:
  explicit Init_RobotInfo_Response_joint_state_indices(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_Response_num_joints joint_state_indices(::interbotix_xs_msgs::srv::RobotInfo_Response::_joint_state_indices_type arg)
  {
    msg_.joint_state_indices = std::move(arg);
    return Init_RobotInfo_Response_num_joints(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_joint_sleep_positions
{
public:
  explicit Init_RobotInfo_Response_joint_sleep_positions(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_Response_joint_state_indices joint_sleep_positions(::interbotix_xs_msgs::srv::RobotInfo_Response::_joint_sleep_positions_type arg)
  {
    msg_.joint_sleep_positions = std::move(arg);
    return Init_RobotInfo_Response_joint_state_indices(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_joint_velocity_limits
{
public:
  explicit Init_RobotInfo_Response_joint_velocity_limits(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_Response_joint_sleep_positions joint_velocity_limits(::interbotix_xs_msgs::srv::RobotInfo_Response::_joint_velocity_limits_type arg)
  {
    msg_.joint_velocity_limits = std::move(arg);
    return Init_RobotInfo_Response_joint_sleep_positions(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_joint_upper_limits
{
public:
  explicit Init_RobotInfo_Response_joint_upper_limits(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_Response_joint_velocity_limits joint_upper_limits(::interbotix_xs_msgs::srv::RobotInfo_Response::_joint_upper_limits_type arg)
  {
    msg_.joint_upper_limits = std::move(arg);
    return Init_RobotInfo_Response_joint_velocity_limits(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_joint_lower_limits
{
public:
  explicit Init_RobotInfo_Response_joint_lower_limits(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_Response_joint_upper_limits joint_lower_limits(::interbotix_xs_msgs::srv::RobotInfo_Response::_joint_lower_limits_type arg)
  {
    msg_.joint_lower_limits = std::move(arg);
    return Init_RobotInfo_Response_joint_upper_limits(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_joint_ids
{
public:
  explicit Init_RobotInfo_Response_joint_ids(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_Response_joint_lower_limits joint_ids(::interbotix_xs_msgs::srv::RobotInfo_Response::_joint_ids_type arg)
  {
    msg_.joint_ids = std::move(arg);
    return Init_RobotInfo_Response_joint_lower_limits(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_joint_names
{
public:
  explicit Init_RobotInfo_Response_joint_names(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_Response_joint_ids joint_names(::interbotix_xs_msgs::srv::RobotInfo_Response::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_RobotInfo_Response_joint_ids(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_profile_type
{
public:
  explicit Init_RobotInfo_Response_profile_type(::interbotix_xs_msgs::srv::RobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_Response_joint_names profile_type(::interbotix_xs_msgs::srv::RobotInfo_Response::_profile_type_type arg)
  {
    msg_.profile_type = std::move(arg);
    return Init_RobotInfo_Response_joint_names(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

class Init_RobotInfo_Response_mode
{
public:
  Init_RobotInfo_Response_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotInfo_Response_profile_type mode(::interbotix_xs_msgs::srv::RobotInfo_Response::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RobotInfo_Response_profile_type(msg_);
  }

private:
  ::interbotix_xs_msgs::srv::RobotInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_xs_msgs::srv::RobotInfo_Response>()
{
  return interbotix_xs_msgs::srv::builder::Init_RobotInfo_Response_mode();
}

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__BUILDER_HPP_
