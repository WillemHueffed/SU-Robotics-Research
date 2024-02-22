// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__STRUCT_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interbotix_perception_msgs__srv__ClusterInfoArray_Request __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_perception_msgs__srv__ClusterInfoArray_Request __declspec(deprecated)
#endif

namespace interbotix_perception_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClusterInfoArray_Request_
{
  using Type = ClusterInfoArray_Request_<ContainerAllocator>;

  explicit ClusterInfoArray_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ClusterInfoArray_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_perception_msgs__srv__ClusterInfoArray_Request
    std::shared_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_perception_msgs__srv__ClusterInfoArray_Request
    std::shared_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClusterInfoArray_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClusterInfoArray_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClusterInfoArray_Request_

// alias to use template instance with default allocator
using ClusterInfoArray_Request =
  interbotix_perception_msgs::srv::ClusterInfoArray_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_perception_msgs


// Include directives for member types
// Member 'clusters'
#include "interbotix_perception_msgs/msg/detail/cluster_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interbotix_perception_msgs__srv__ClusterInfoArray_Response __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_perception_msgs__srv__ClusterInfoArray_Response __declspec(deprecated)
#endif

namespace interbotix_perception_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClusterInfoArray_Response_
{
  using Type = ClusterInfoArray_Response_<ContainerAllocator>;

  explicit ClusterInfoArray_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ClusterInfoArray_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _clusters_type =
    std::vector<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>>>;
  _clusters_type clusters;

  // setters for named parameter idiom
  Type & set__clusters(
    const std::vector<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interbotix_perception_msgs::msg::ClusterInfo_<ContainerAllocator>>> & _arg)
  {
    this->clusters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_perception_msgs__srv__ClusterInfoArray_Response
    std::shared_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_perception_msgs__srv__ClusterInfoArray_Response
    std::shared_ptr<interbotix_perception_msgs::srv::ClusterInfoArray_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClusterInfoArray_Response_ & other) const
  {
    if (this->clusters != other.clusters) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClusterInfoArray_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClusterInfoArray_Response_

// alias to use template instance with default allocator
using ClusterInfoArray_Response =
  interbotix_perception_msgs::srv::ClusterInfoArray_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace interbotix_perception_msgs
{

namespace srv
{

struct ClusterInfoArray
{
  using Request = interbotix_perception_msgs::srv::ClusterInfoArray_Request;
  using Response = interbotix_perception_msgs::srv::ClusterInfoArray_Response;
};

}  // namespace srv

}  // namespace interbotix_perception_msgs

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__STRUCT_HPP_
