// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_xs_msgs:msg/JointTemps.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TEMPS__STRUCT_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TEMPS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__msg__JointTemps __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__msg__JointTemps __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointTemps_
{
  using Type = JointTemps_<ContainerAllocator>;

  explicit JointTemps_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointTemps_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _temps_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _temps_type temps;

  // setters for named parameter idiom
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__temps(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->temps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__msg__JointTemps
    std::shared_ptr<interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__msg__JointTemps
    std::shared_ptr<interbotix_xs_msgs::msg::JointTemps_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTemps_ & other) const
  {
    if (this->names != other.names) {
      return false;
    }
    if (this->temps != other.temps) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTemps_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTemps_

// alias to use template instance with default allocator
using JointTemps =
  interbotix_xs_msgs::msg::JointTemps_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TEMPS__STRUCT_HPP_
