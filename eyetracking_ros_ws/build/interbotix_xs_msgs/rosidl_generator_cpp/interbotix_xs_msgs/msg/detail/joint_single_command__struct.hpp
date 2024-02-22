// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_xs_msgs:msg/JointSingleCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__STRUCT_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__msg__JointSingleCommand __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__msg__JointSingleCommand __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointSingleCommand_
{
  using Type = JointSingleCommand_<ContainerAllocator>;

  explicit JointSingleCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->cmd = 0.0f;
    }
  }

  explicit JointSingleCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->cmd = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _cmd_type =
    float;
  _cmd_type cmd;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__cmd(
    const float & _arg)
  {
    this->cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__msg__JointSingleCommand
    std::shared_ptr<interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__msg__JointSingleCommand
    std::shared_ptr<interbotix_xs_msgs::msg::JointSingleCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointSingleCommand_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointSingleCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointSingleCommand_

// alias to use template instance with default allocator
using JointSingleCommand =
  interbotix_xs_msgs::msg::JointSingleCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_SINGLE_COMMAND__STRUCT_HPP_
