// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__BUILDER_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__BUILDER_HPP_

#include "interbotix_perception_msgs/srv/detail/filter_params__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interbotix_perception_msgs
{

namespace srv
{

namespace builder
{

class Init_FilterParams_Request_cluster_max_size
{
public:
  explicit Init_FilterParams_Request_cluster_max_size(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  ::interbotix_perception_msgs::srv::FilterParams_Request cluster_max_size(::interbotix_perception_msgs::srv::FilterParams_Request::_cluster_max_size_type arg)
  {
    msg_.cluster_max_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_cluster_min_size
{
public:
  explicit Init_FilterParams_Request_cluster_min_size(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_cluster_max_size cluster_min_size(::interbotix_perception_msgs::srv::FilterParams_Request::_cluster_min_size_type arg)
  {
    msg_.cluster_min_size = std::move(arg);
    return Init_FilterParams_Request_cluster_max_size(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_cluster_tol
{
public:
  explicit Init_FilterParams_Request_cluster_tol(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_cluster_min_size cluster_tol(::interbotix_perception_msgs::srv::FilterParams_Request::_cluster_tol_type arg)
  {
    msg_.cluster_tol = std::move(arg);
    return Init_FilterParams_Request_cluster_min_size(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_ror_min_neighbors
{
public:
  explicit Init_FilterParams_Request_ror_min_neighbors(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_cluster_tol ror_min_neighbors(::interbotix_perception_msgs::srv::FilterParams_Request::_ror_min_neighbors_type arg)
  {
    msg_.ror_min_neighbors = std::move(arg);
    return Init_FilterParams_Request_cluster_tol(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_ror_radius_search
{
public:
  explicit Init_FilterParams_Request_ror_radius_search(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_ror_min_neighbors ror_radius_search(::interbotix_perception_msgs::srv::FilterParams_Request::_ror_radius_search_type arg)
  {
    msg_.ror_radius_search = std::move(arg);
    return Init_FilterParams_Request_ror_min_neighbors(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_plane_dist_thresh
{
public:
  explicit Init_FilterParams_Request_plane_dist_thresh(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_ror_radius_search plane_dist_thresh(::interbotix_perception_msgs::srv::FilterParams_Request::_plane_dist_thresh_type arg)
  {
    msg_.plane_dist_thresh = std::move(arg);
    return Init_FilterParams_Request_ror_radius_search(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_plane_max_iter
{
public:
  explicit Init_FilterParams_Request_plane_max_iter(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_plane_dist_thresh plane_max_iter(::interbotix_perception_msgs::srv::FilterParams_Request::_plane_max_iter_type arg)
  {
    msg_.plane_max_iter = std::move(arg);
    return Init_FilterParams_Request_plane_dist_thresh(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_voxel_leaf_size
{
public:
  explicit Init_FilterParams_Request_voxel_leaf_size(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_plane_max_iter voxel_leaf_size(::interbotix_perception_msgs::srv::FilterParams_Request::_voxel_leaf_size_type arg)
  {
    msg_.voxel_leaf_size = std::move(arg);
    return Init_FilterParams_Request_plane_max_iter(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_z_filter_max
{
public:
  explicit Init_FilterParams_Request_z_filter_max(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_voxel_leaf_size z_filter_max(::interbotix_perception_msgs::srv::FilterParams_Request::_z_filter_max_type arg)
  {
    msg_.z_filter_max = std::move(arg);
    return Init_FilterParams_Request_voxel_leaf_size(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_z_filter_min
{
public:
  explicit Init_FilterParams_Request_z_filter_min(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_z_filter_max z_filter_min(::interbotix_perception_msgs::srv::FilterParams_Request::_z_filter_min_type arg)
  {
    msg_.z_filter_min = std::move(arg);
    return Init_FilterParams_Request_z_filter_max(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_y_filter_max
{
public:
  explicit Init_FilterParams_Request_y_filter_max(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_z_filter_min y_filter_max(::interbotix_perception_msgs::srv::FilterParams_Request::_y_filter_max_type arg)
  {
    msg_.y_filter_max = std::move(arg);
    return Init_FilterParams_Request_z_filter_min(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_y_filter_min
{
public:
  explicit Init_FilterParams_Request_y_filter_min(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_y_filter_max y_filter_min(::interbotix_perception_msgs::srv::FilterParams_Request::_y_filter_min_type arg)
  {
    msg_.y_filter_min = std::move(arg);
    return Init_FilterParams_Request_y_filter_max(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_x_filter_max
{
public:
  explicit Init_FilterParams_Request_x_filter_max(::interbotix_perception_msgs::srv::FilterParams_Request & msg)
  : msg_(msg)
  {}
  Init_FilterParams_Request_y_filter_min x_filter_max(::interbotix_perception_msgs::srv::FilterParams_Request::_x_filter_max_type arg)
  {
    msg_.x_filter_max = std::move(arg);
    return Init_FilterParams_Request_y_filter_min(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

class Init_FilterParams_Request_x_filter_min
{
public:
  Init_FilterParams_Request_x_filter_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FilterParams_Request_x_filter_max x_filter_min(::interbotix_perception_msgs::srv::FilterParams_Request::_x_filter_min_type arg)
  {
    msg_.x_filter_min = std::move(arg);
    return Init_FilterParams_Request_x_filter_max(msg_);
  }

private:
  ::interbotix_perception_msgs::srv::FilterParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_perception_msgs::srv::FilterParams_Request>()
{
  return interbotix_perception_msgs::srv::builder::Init_FilterParams_Request_x_filter_min();
}

}  // namespace interbotix_perception_msgs


namespace interbotix_perception_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interbotix_perception_msgs::srv::FilterParams_Response>()
{
  return ::interbotix_perception_msgs::srv::FilterParams_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace interbotix_perception_msgs

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__BUILDER_HPP_
