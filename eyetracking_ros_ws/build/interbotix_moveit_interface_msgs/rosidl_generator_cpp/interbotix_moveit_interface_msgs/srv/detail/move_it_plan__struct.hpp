// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_moveit_interface_msgs:srv/MoveItPlan.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__STRUCT_HPP_
#define INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'ee_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interbotix_moveit_interface_msgs__srv__MoveItPlan_Request __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_moveit_interface_msgs__srv__MoveItPlan_Request __declspec(deprecated)
#endif

namespace interbotix_moveit_interface_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveItPlan_Request_
{
  using Type = MoveItPlan_Request_<ContainerAllocator>;

  explicit MoveItPlan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ee_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0;
    }
  }

  explicit MoveItPlan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ee_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = 0;
    }
  }

  // field types and members
  using _cmd_type =
    int8_t;
  _cmd_type cmd;
  using _ee_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _ee_pose_type ee_pose;

  // setters for named parameter idiom
  Type & set__cmd(
    const int8_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__ee_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->ee_pose = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t CMD_NONE =
    0;
  static constexpr int8_t CMD_PLAN_POSE =
    1;
  static constexpr int8_t CMD_PLAN_POSITION =
    2;
  static constexpr int8_t CMD_PLAN_ORIENTATION =
    3;
  static constexpr int8_t CMD_EXECUTE =
    4;

  // pointer types
  using RawPtr =
    interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_moveit_interface_msgs__srv__MoveItPlan_Request
    std::shared_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_moveit_interface_msgs__srv__MoveItPlan_Request
    std::shared_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItPlan_Request_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->ee_pose != other.ee_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItPlan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItPlan_Request_

// alias to use template instance with default allocator
using MoveItPlan_Request =
  interbotix_moveit_interface_msgs::srv::MoveItPlan_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t MoveItPlan_Request_<ContainerAllocator>::CMD_NONE;
template<typename ContainerAllocator>
constexpr int8_t MoveItPlan_Request_<ContainerAllocator>::CMD_PLAN_POSE;
template<typename ContainerAllocator>
constexpr int8_t MoveItPlan_Request_<ContainerAllocator>::CMD_PLAN_POSITION;
template<typename ContainerAllocator>
constexpr int8_t MoveItPlan_Request_<ContainerAllocator>::CMD_PLAN_ORIENTATION;
template<typename ContainerAllocator>
constexpr int8_t MoveItPlan_Request_<ContainerAllocator>::CMD_EXECUTE;

}  // namespace srv

}  // namespace interbotix_moveit_interface_msgs


// Include directives for member types
// Member 'msg'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interbotix_moveit_interface_msgs__srv__MoveItPlan_Response __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_moveit_interface_msgs__srv__MoveItPlan_Response __declspec(deprecated)
#endif

namespace interbotix_moveit_interface_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveItPlan_Response_
{
  using Type = MoveItPlan_Response_<ContainerAllocator>;

  explicit MoveItPlan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MoveItPlan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _msg_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _msg_type msg;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__msg(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_moveit_interface_msgs__srv__MoveItPlan_Response
    std::shared_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_moveit_interface_msgs__srv__MoveItPlan_Response
    std::shared_ptr<interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItPlan_Response_ & other) const
  {
    if (this->msg != other.msg) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItPlan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItPlan_Response_

// alias to use template instance with default allocator
using MoveItPlan_Response =
  interbotix_moveit_interface_msgs::srv::MoveItPlan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_moveit_interface_msgs

namespace interbotix_moveit_interface_msgs
{

namespace srv
{

struct MoveItPlan
{
  using Request = interbotix_moveit_interface_msgs::srv::MoveItPlan_Request;
  using Response = interbotix_moveit_interface_msgs::srv::MoveItPlan_Response;
};

}  // namespace srv

}  // namespace interbotix_moveit_interface_msgs

#endif  // INTERBOTIX_MOVEIT_INTERFACE_MSGS__SRV__DETAIL__MOVE_IT_PLAN__STRUCT_HPP_
