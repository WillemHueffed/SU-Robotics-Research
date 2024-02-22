// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_moveit_interface_msgs:srv/MoveItPlan.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__BUILDER_HPP_
#define INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__BUILDER_HPP_

#include "interbotix_moveit_interface_msgs/srv/detail/move_it_plan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_moveit_interface_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveItPlan_Request_ee_pose
{
public:
  explicit Init_MoveItPlan_Request_ee_pose(::interbotix_moveit_interface_msgs::srv::MoveItPlan_Request & msg)
  : msg_(msg)
  {}
  ::interbotix_moveit_interface_msgs::srv::MoveItPlan_Request ee_pose(::interbotix_moveit_interface_msgs::srv::MoveItPlan_Request::_ee_pose_type arg)
  {
    msg_.ee_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_moveit_interface_msgs::srv::MoveItPlan_Request msg_;
};

class Init_MoveItPlan_Request_cmd
{
public:
  Init_MoveItPlan_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItPlan_Request_ee_pose cmd(::interbotix_moveit_interface_msgs::srv::MoveItPlan_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_MoveItPlan_Request_ee_pose(msg_);
  }

private:
  ::interbotix_moveit_interface_msgs::srv::MoveItPlan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_moveit_interface_msgs::srv::MoveItPlan_Request>()
{
  return interbotix_moveit_interface_msgs::srv::builder::Init_MoveItPlan_Request_cmd();
}

}  // namespace interbotix_moveit_interface_msgs


namespace interbotix_moveit_interface_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveItPlan_Response_success
{
public:
  explicit Init_MoveItPlan_Response_success(::interbotix_moveit_interface_msgs::srv::MoveItPlan_Response & msg)
  : msg_(msg)
  {}
  ::interbotix_moveit_interface_msgs::srv::MoveItPlan_Response success(::interbotix_moveit_interface_msgs::srv::MoveItPlan_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_moveit_interface_msgs::srv::MoveItPlan_Response msg_;
};

class Init_MoveItPlan_Response_msg
{
public:
  Init_MoveItPlan_Response_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItPlan_Response_success msg(::interbotix_moveit_interface_msgs::srv::MoveItPlan_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_MoveItPlan_Response_success(msg_);
  }

private:
  ::interbotix_moveit_interface_msgs::srv::MoveItPlan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_moveit_interface_msgs::srv::MoveItPlan_Response>()
{
  return interbotix_moveit_interface_msgs::srv::builder::Init_MoveItPlan_Response_msg();
}

}  // namespace interbotix_moveit_interface_msgs

#endif  // INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__BUILDER_HPP_
