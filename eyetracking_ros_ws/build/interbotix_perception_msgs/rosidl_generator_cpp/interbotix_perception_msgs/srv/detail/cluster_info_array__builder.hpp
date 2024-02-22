// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__BUILDER_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__BUILDER_HPP_

#include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_perception_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_perception_msgs::srv::ClusterInfoArray_Request>()
{
  return ::interbotix_perception_msgs::srv::ClusterInfoArray_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interbotix_perception_msgs


namespace interbotix_perception_msgs
{

namespace srv
{

namespace builder
{

class Init_ClusterInfoArray_Response_clusters
{
public:
  Init_ClusterInfoArray_Response_clusters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interbotix_perception_msgs::srv::ClusterInfoArray_Response clusters(::interbotix_perception_msgs::srv::ClusterInfoArray_Response::_clusters_type arg)
  {
    msg_.clusters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::ClusterInfoArray_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_perception_msgs::srv::ClusterInfoArray_Response>()
{
  return interbotix_perception_msgs::srv::builder::Init_ClusterInfoArray_Response_clusters();
}

}  // namespace interbotix_perception_msgs

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__BUILDER_HPP_
