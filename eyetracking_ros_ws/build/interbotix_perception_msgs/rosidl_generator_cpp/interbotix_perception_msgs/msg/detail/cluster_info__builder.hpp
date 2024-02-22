// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_perception_msgs:msg/ClusterInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__BUILDER_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__BUILDER_HPP_

#include "interbotix_perception_msgs/msg/detail/cluster_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ClusterInfo_num_points
{
public:
  explicit Init_ClusterInfo_num_points(::interbotix_perception_msgs::msg::ClusterInfo & msg)
  : msg_(msg)
  {}
  ::interbotix_perception_msgs::msg::ClusterInfo num_points(::interbotix_perception_msgs::msg::ClusterInfo::_num_points_type arg)
  {
    msg_.num_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_perception_msgs::msg::ClusterInfo msg_;
};

class Init_ClusterInfo_min_z_point
{
public:
  explicit Init_ClusterInfo_min_z_point(::interbotix_perception_msgs::msg::ClusterInfo & msg)
  : msg_(msg)
  {}
  Init_ClusterInfo_num_points min_z_point(::interbotix_perception_msgs::msg::ClusterInfo::_min_z_point_type arg)
  {
    msg_.min_z_point = std::move(arg);
    return Init_ClusterInfo_num_points(msg_);
  }

private:
  ::interbotix_perception_msgs::msg::ClusterInfo msg_;
};

class Init_ClusterInfo_color
{
public:
  explicit Init_ClusterInfo_color(::interbotix_perception_msgs::msg::ClusterInfo & msg)
  : msg_(msg)
  {}
  Init_ClusterInfo_min_z_point color(::interbotix_perception_msgs::msg::ClusterInfo::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_ClusterInfo_min_z_point(msg_);
  }

private:
  ::interbotix_perception_msgs::msg::ClusterInfo msg_;
};

class Init_ClusterInfo_yaw
{
public:
  explicit Init_ClusterInfo_yaw(::interbotix_perception_msgs::msg::ClusterInfo & msg)
  : msg_(msg)
  {}
  Init_ClusterInfo_color yaw(::interbotix_perception_msgs::msg::ClusterInfo::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_ClusterInfo_color(msg_);
  }

private:
  ::interbotix_perception_msgs::msg::ClusterInfo msg_;
};

class Init_ClusterInfo_position
{
public:
  explicit Init_ClusterInfo_position(::interbotix_perception_msgs::msg::ClusterInfo & msg)
  : msg_(msg)
  {}
  Init_ClusterInfo_yaw position(::interbotix_perception_msgs::msg::ClusterInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ClusterInfo_yaw(msg_);
  }

private:
  ::interbotix_perception_msgs::msg::ClusterInfo msg_;
};

class Init_ClusterInfo_frame_id
{
public:
  Init_ClusterInfo_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClusterInfo_position frame_id(::interbotix_perception_msgs::msg::ClusterInfo::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_ClusterInfo_position(msg_);
  }

private:
  ::interbotix_perception_msgs::msg::ClusterInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_perception_msgs::msg::ClusterInfo>()
{
  return interbotix_perception_msgs::msg::builder::Init_ClusterInfo_frame_id();
}

}  // namespace interbotix_perception_msgs

#endif  // INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__BUILDER_HPP_
