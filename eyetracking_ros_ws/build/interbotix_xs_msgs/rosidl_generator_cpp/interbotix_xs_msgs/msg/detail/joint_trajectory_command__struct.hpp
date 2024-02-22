// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_xs_msgs:msg/JointTrajectoryCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__STRUCT_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'traj'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__msg__JointTrajectoryCommand __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__msg__JointTrajectoryCommand __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointTrajectoryCommand_
{
  using Type = JointTrajectoryCommand_<ContainerAllocator>;

  explicit JointTrajectoryCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : traj(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = "";
      this->name = "";
    }
  }

  explicit JointTrajectoryCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd_type(_alloc),
    name(_alloc),
    traj(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = "";
      this->name = "";
    }
  }

  // field types and members
  using _cmd_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_type_type cmd_type;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _traj_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _traj_type traj;

  // setters for named parameter idiom
  Type & set__cmd_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd_type = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__traj(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->traj = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__msg__JointTrajectoryCommand
    std::shared_ptr<interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__msg__JointTrajectoryCommand
    std::shared_ptr<interbotix_xs_msgs::msg::JointTrajectoryCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTrajectoryCommand_ & other) const
  {
    if (this->cmd_type != other.cmd_type) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->traj != other.traj) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTrajectoryCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTrajectoryCommand_

// alias to use template instance with default allocator
using JointTrajectoryCommand =
  interbotix_xs_msgs::msg::JointTrajectoryCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_COMMAND__STRUCT_HPP_
