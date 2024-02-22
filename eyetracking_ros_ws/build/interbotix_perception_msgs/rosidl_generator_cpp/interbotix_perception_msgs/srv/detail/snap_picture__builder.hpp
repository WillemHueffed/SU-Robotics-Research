// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_perception_msgs:srv/SnapPicture.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__BUILDER_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__BUILDER_HPP_

#include "interbotix_perception_msgs/srv/detail/snap_picture__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_perception_msgs
{

namespace srv
{

namespace builder
{

class Init_SnapPicture_Request_filename
{
public:
  Init_SnapPicture_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interbotix_perception_msgs::srv::SnapPicture_Request filename(::interbotix_perception_msgs::srv::SnapPicture_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::SnapPicture_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_perception_msgs::srv::SnapPicture_Request>()
{
  return interbotix_perception_msgs::srv::builder::Init_SnapPicture_Request_filename();
}

}  // namespace interbotix_perception_msgs


namespace interbotix_perception_msgs
{

namespace srv
{

namespace builder
{

class Init_SnapPicture_Response_filepath
{
public:
  explicit Init_SnapPicture_Response_filepath(::interbotix_perception_msgs::srv::SnapPicture_Response & msg)
  : msg_(msg)
  {}
  ::interbotix_perception_msgs::srv::SnapPicture_Response filepath(::interbotix_perception_msgs::srv::SnapPicture_Response::_filepath_type arg)
  {
    msg_.filepath = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::SnapPicture_Response msg_;
};

class Init_SnapPicture_Response_success
{
public:
  Init_SnapPicture_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SnapPicture_Response_filepath success(::interbotix_perception_msgs::srv::SnapPicture_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SnapPicture_Response_filepath(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::SnapPicture_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_perception_msgs::srv::SnapPicture_Response>()
{
  return interbotix_perception_msgs::srv::builder::Init_SnapPicture_Response_success();
}

}  // namespace interbotix_perception_msgs

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__BUILDER_HPP_
