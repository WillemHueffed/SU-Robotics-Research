// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__STRUCT_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__srv__MotorGains_Request __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__srv__MotorGains_Request __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorGains_Request_
{
  using Type = MotorGains_Request_<ContainerAllocator>;

  explicit MotorGains_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = "";
      this->name = "";
      this->kp_pos = 0l;
      this->ki_pos = 0l;
      this->kd_pos = 0l;
      this->k1 = 0l;
      this->k2 = 0l;
      this->kp_vel = 0l;
      this->ki_vel = 0l;
    }
  }

  explicit MotorGains_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd_type(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = "";
      this->name = "";
      this->kp_pos = 0l;
      this->ki_pos = 0l;
      this->kd_pos = 0l;
      this->k1 = 0l;
      this->k2 = 0l;
      this->kp_vel = 0l;
      this->ki_vel = 0l;
    }
  }

  // field types and members
  using _cmd_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_type_type cmd_type;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _kp_pos_type =
    int32_t;
  _kp_pos_type kp_pos;
  using _ki_pos_type =
    int32_t;
  _ki_pos_type ki_pos;
  using _kd_pos_type =
    int32_t;
  _kd_pos_type kd_pos;
  using _k1_type =
    int32_t;
  _k1_type k1;
  using _k2_type =
    int32_t;
  _k2_type k2;
  using _kp_vel_type =
    int32_t;
  _kp_vel_type kp_vel;
  using _ki_vel_type =
    int32_t;
  _ki_vel_type ki_vel;

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
  Type & set__kp_pos(
    const int32_t & _arg)
  {
    this->kp_pos = _arg;
    return *this;
  }
  Type & set__ki_pos(
    const int32_t & _arg)
  {
    this->ki_pos = _arg;
    return *this;
  }
  Type & set__kd_pos(
    const int32_t & _arg)
  {
    this->kd_pos = _arg;
    return *this;
  }
  Type & set__k1(
    const int32_t & _arg)
  {
    this->k1 = _arg;
    return *this;
  }
  Type & set__k2(
    const int32_t & _arg)
  {
    this->k2 = _arg;
    return *this;
  }
  Type & set__kp_vel(
    const int32_t & _arg)
  {
    this->kp_vel = _arg;
    return *this;
  }
  Type & set__ki_vel(
    const int32_t & _arg)
  {
    this->ki_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__srv__MotorGains_Request
    std::shared_ptr<interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__srv__MotorGains_Request
    std::shared_ptr<interbotix_xs_msgs::srv::MotorGains_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorGains_Request_ & other) const
  {
    if (this->cmd_type != other.cmd_type) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->kp_pos != other.kp_pos) {
      return false;
    }
    if (this->ki_pos != other.ki_pos) {
      return false;
    }
    if (this->kd_pos != other.kd_pos) {
      return false;
    }
    if (this->k1 != other.k1) {
      return false;
    }
    if (this->k2 != other.k2) {
      return false;
    }
    if (this->kp_vel != other.kp_vel) {
      return false;
    }
    if (this->ki_vel != other.ki_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorGains_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorGains_Request_

// alias to use template instance with default allocator
using MotorGains_Request =
  interbotix_xs_msgs::srv::MotorGains_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_xs_msgs


#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__srv__MotorGains_Response __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__srv__MotorGains_Response __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorGains_Response_
{
  using Type = MotorGains_Response_<ContainerAllocator>;

  explicit MotorGains_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MotorGains_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__srv__MotorGains_Response
    std::shared_ptr<interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__srv__MotorGains_Response
    std::shared_ptr<interbotix_xs_msgs::srv::MotorGains_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorGains_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorGains_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorGains_Response_

// alias to use template instance with default allocator
using MotorGains_Response =
  interbotix_xs_msgs::srv::MotorGains_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace interbotix_xs_msgs
{

namespace srv
{

struct MotorGains
{
  using Request = interbotix_xs_msgs::srv::MotorGains_Request;
  using Response = interbotix_xs_msgs::srv::MotorGains_Response;
};

}  // namespace srv

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__STRUCT_HPP_
