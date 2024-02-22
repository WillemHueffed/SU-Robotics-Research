// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_perception_msgs:msg/ClusterInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__STRUCT_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position'
// Member 'min_z_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interbotix_perception_msgs__msg__ClusterInfo __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_perception_msgs__msg__ClusterInfo __declspec(deprecated)
#endif

namespace interbotix_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClusterInfo_
{
  using Type = ClusterInfo_<ContainerAllocator>;

  explicit ClusterInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    color(_init),
    min_z_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->yaw = 0.0f;
      this->num_points = 0l;
    }
  }

  explicit ClusterInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc),
    position(_alloc, _init),
    color(_alloc, _init),
    min_z_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->yaw = 0.0f;
      this->num_points = 0l;
    }
  }

  // field types and members
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;
  using _min_z_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _min_z_point_type min_z_point;
  using _num_points_type =
    int32_t;
  _num_points_type num_points;

  // setters for named parameter idiom
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__min_z_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->min_z_point = _arg;
    return *this;
  }
  Type & set__num_points(
    const int32_t & _arg)
  {
    this->num_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_perception_msgs__msg__ClusterInfo
    std::shared_ptr<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_perception_msgs__msg__ClusterInfo
    std::shared_ptr<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClusterInfo_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->min_z_point != other.min_z_point) {
      return false;
    }
    if (this->num_points != other.num_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClusterInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClusterInfo_

// alias to use template instance with default allocator
using ClusterInfo =
  interbotix_perception_msgs::msg::ClusterInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interbotix_perception_msgs

#endif  // INTERBOTIX_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_INFO__STRUCT_HPP_
