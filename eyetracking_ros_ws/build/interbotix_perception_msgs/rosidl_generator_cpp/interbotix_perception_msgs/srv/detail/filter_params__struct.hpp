// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__STRUCT_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interbotix_perception_msgs__srv__FilterParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_perception_msgs__srv__FilterParams_Request __declspec(deprecated)
#endif

namespace interbotix_perception_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FilterParams_Request_
{
  using Type = FilterParams_Request_<ContainerAllocator>;

  explicit FilterParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_filter_min = 0.0f;
      this->x_filter_max = 0.0f;
      this->y_filter_min = 0.0f;
      this->y_filter_max = 0.0f;
      this->z_filter_min = 0.0f;
      this->z_filter_max = 0.0f;
      this->voxel_leaf_size = 0.0f;
      this->plane_max_iter = 0l;
      this->plane_dist_thresh = 0.0f;
      this->ror_radius_search = 0.0f;
      this->ror_min_neighbors = 0l;
      this->cluster_tol = 0.0f;
      this->cluster_min_size = 0l;
      this->cluster_max_size = 0l;
    }
  }

  explicit FilterParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_filter_min = 0.0f;
      this->x_filter_max = 0.0f;
      this->y_filter_min = 0.0f;
      this->y_filter_max = 0.0f;
      this->z_filter_min = 0.0f;
      this->z_filter_max = 0.0f;
      this->voxel_leaf_size = 0.0f;
      this->plane_max_iter = 0l;
      this->plane_dist_thresh = 0.0f;
      this->ror_radius_search = 0.0f;
      this->ror_min_neighbors = 0l;
      this->cluster_tol = 0.0f;
      this->cluster_min_size = 0l;
      this->cluster_max_size = 0l;
    }
  }

  // field types and members
  using _x_filter_min_type =
    float;
  _x_filter_min_type x_filter_min;
  using _x_filter_max_type =
    float;
  _x_filter_max_type x_filter_max;
  using _y_filter_min_type =
    float;
  _y_filter_min_type y_filter_min;
  using _y_filter_max_type =
    float;
  _y_filter_max_type y_filter_max;
  using _z_filter_min_type =
    float;
  _z_filter_min_type z_filter_min;
  using _z_filter_max_type =
    float;
  _z_filter_max_type z_filter_max;
  using _voxel_leaf_size_type =
    float;
  _voxel_leaf_size_type voxel_leaf_size;
  using _plane_max_iter_type =
    int32_t;
  _plane_max_iter_type plane_max_iter;
  using _plane_dist_thresh_type =
    float;
  _plane_dist_thresh_type plane_dist_thresh;
  using _ror_radius_search_type =
    float;
  _ror_radius_search_type ror_radius_search;
  using _ror_min_neighbors_type =
    int32_t;
  _ror_min_neighbors_type ror_min_neighbors;
  using _cluster_tol_type =
    float;
  _cluster_tol_type cluster_tol;
  using _cluster_min_size_type =
    int32_t;
  _cluster_min_size_type cluster_min_size;
  using _cluster_max_size_type =
    int32_t;
  _cluster_max_size_type cluster_max_size;

  // setters for named parameter idiom
  Type & set__x_filter_min(
    const float & _arg)
  {
    this->x_filter_min = _arg;
    return *this;
  }
  Type & set__x_filter_max(
    const float & _arg)
  {
    this->x_filter_max = _arg;
    return *this;
  }
  Type & set__y_filter_min(
    const float & _arg)
  {
    this->y_filter_min = _arg;
    return *this;
  }
  Type & set__y_filter_max(
    const float & _arg)
  {
    this->y_filter_max = _arg;
    return *this;
  }
  Type & set__z_filter_min(
    const float & _arg)
  {
    this->z_filter_min = _arg;
    return *this;
  }
  Type & set__z_filter_max(
    const float & _arg)
  {
    this->z_filter_max = _arg;
    return *this;
  }
  Type & set__voxel_leaf_size(
    const float & _arg)
  {
    this->voxel_leaf_size = _arg;
    return *this;
  }
  Type & set__plane_max_iter(
    const int32_t & _arg)
  {
    this->plane_max_iter = _arg;
    return *this;
  }
  Type & set__plane_dist_thresh(
    const float & _arg)
  {
    this->plane_dist_thresh = _arg;
    return *this;
  }
  Type & set__ror_radius_search(
    const float & _arg)
  {
    this->ror_radius_search = _arg;
    return *this;
  }
  Type & set__ror_min_neighbors(
    const int32_t & _arg)
  {
    this->ror_min_neighbors = _arg;
    return *this;
  }
  Type & set__cluster_tol(
    const float & _arg)
  {
    this->cluster_tol = _arg;
    return *this;
  }
  Type & set__cluster_min_size(
    const int32_t & _arg)
  {
    this->cluster_min_size = _arg;
    return *this;
  }
  Type & set__cluster_max_size(
    const int32_t & _arg)
  {
    this->cluster_max_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_perception_msgs__srv__FilterParams_Request
    std::shared_ptr<interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_perception_msgs__srv__FilterParams_Request
    std::shared_ptr<interbotix_perception_msgs::srv::FilterParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilterParams_Request_ & other) const
  {
    if (this->x_filter_min != other.x_filter_min) {
      return false;
    }
    if (this->x_filter_max != other.x_filter_max) {
      return false;
    }
    if (this->y_filter_min != other.y_filter_min) {
      return false;
    }
    if (this->y_filter_max != other.y_filter_max) {
      return false;
    }
    if (this->z_filter_min != other.z_filter_min) {
      return false;
    }
    if (this->z_filter_max != other.z_filter_max) {
      return false;
    }
    if (this->voxel_leaf_size != other.voxel_leaf_size) {
      return false;
    }
    if (this->plane_max_iter != other.plane_max_iter) {
      return false;
    }
    if (this->plane_dist_thresh != other.plane_dist_thresh) {
      return false;
    }
    if (this->ror_radius_search != other.ror_radius_search) {
      return false;
    }
    if (this->ror_min_neighbors != other.ror_min_neighbors) {
      return false;
    }
    if (this->cluster_tol != other.cluster_tol) {
      return false;
    }
    if (this->cluster_min_size != other.cluster_min_size) {
      return false;
    }
    if (this->cluster_max_size != other.cluster_max_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilterParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilterParams_Request_

// alias to use template instance with default allocator
using FilterParams_Request =
  interbotix_perception_msgs::srv::FilterParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_perception_msgs


#ifndef _WIN32
# define DEPRECATED__interbotix_perception_msgs__srv__FilterParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_perception_msgs__srv__FilterParams_Response __declspec(deprecated)
#endif

namespace interbotix_perception_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FilterParams_Response_
{
  using Type = FilterParams_Response_<ContainerAllocator>;

  explicit FilterParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit FilterParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_perception_msgs__srv__FilterParams_Response
    std::shared_ptr<interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_perception_msgs__srv__FilterParams_Response
    std::shared_ptr<interbotix_perception_msgs::srv::FilterParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilterParams_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilterParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilterParams_Response_

// alias to use template instance with default allocator
using FilterParams_Response =
  interbotix_perception_msgs::srv::FilterParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace interbotix_perception_msgs
{

namespace srv
{

struct FilterParams
{
  using Request = interbotix_perception_msgs::srv::FilterParams_Request;
  using Response = interbotix_perception_msgs::srv::FilterParams_Response;
};

}  // namespace srv

}  // namespace interbotix_perception_msgs

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__STRUCT_HPP_
