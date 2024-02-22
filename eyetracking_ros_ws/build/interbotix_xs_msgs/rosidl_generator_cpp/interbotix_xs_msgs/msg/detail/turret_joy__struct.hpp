// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_xs_msgs:msg/TurretJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__STRUCT_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__msg__TurretJoy __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__msg__TurretJoy __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurretJoy_
{
  using Type = TurretJoy_<ContainerAllocator>;

  explicit TurretJoy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan_cmd = 0;
      this->tilt_cmd = 0;
      this->speed_cmd = 0;
      this->speed_toggle_cmd = 0;
    }
  }

  explicit TurretJoy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan_cmd = 0;
      this->tilt_cmd = 0;
      this->speed_cmd = 0;
      this->speed_toggle_cmd = 0;
    }
  }

  // field types and members
  using _pan_cmd_type =
    int8_t;
  _pan_cmd_type pan_cmd;
  using _tilt_cmd_type =
    int8_t;
  _tilt_cmd_type tilt_cmd;
  using _speed_cmd_type =
    int8_t;
  _speed_cmd_type speed_cmd;
  using _speed_toggle_cmd_type =
    int8_t;
  _speed_toggle_cmd_type speed_toggle_cmd;

  // setters for named parameter idiom
  Type & set__pan_cmd(
    const int8_t & _arg)
  {
    this->pan_cmd = _arg;
    return *this;
  }
  Type & set__tilt_cmd(
    const int8_t & _arg)
  {
    this->tilt_cmd = _arg;
    return *this;
  }
  Type & set__speed_cmd(
    const int8_t & _arg)
  {
    this->speed_cmd = _arg;
    return *this;
  }
  Type & set__speed_toggle_cmd(
    const int8_t & _arg)
  {
    this->speed_toggle_cmd = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t PAN_CCW =
    1;
  static constexpr int8_t PAN_CW =
    2;
  static constexpr int8_t TILT_UP =
    3;
  static constexpr int8_t TILT_DOWN =
    4;
  static constexpr int8_t PAN_TILT_HOME =
    5;
  static constexpr int8_t SPEED_INC =
    6;
  static constexpr int8_t SPEED_DEC =
    7;
  static constexpr int8_t SPEED_COARSE =
    8;
  static constexpr int8_t SPEED_FINE =
    9;

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__msg__TurretJoy
    std::shared_ptr<interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__msg__TurretJoy
    std::shared_ptr<interbotix_xs_msgs::msg::TurretJoy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurretJoy_ & other) const
  {
    if (this->pan_cmd != other.pan_cmd) {
      return false;
    }
    if (this->tilt_cmd != other.tilt_cmd) {
      return false;
    }
    if (this->speed_cmd != other.speed_cmd) {
      return false;
    }
    if (this->speed_toggle_cmd != other.speed_toggle_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurretJoy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurretJoy_

// alias to use template instance with default allocator
using TurretJoy =
  interbotix_xs_msgs::msg::TurretJoy_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t TurretJoy_<ContainerAllocator>::PAN_CCW;
template<typename ContainerAllocator>
constexpr int8_t TurretJoy_<ContainerAllocator>::PAN_CW;
template<typename ContainerAllocator>
constexpr int8_t TurretJoy_<ContainerAllocator>::TILT_UP;
template<typename ContainerAllocator>
constexpr int8_t TurretJoy_<ContainerAllocator>::TILT_DOWN;
template<typename ContainerAllocator>
constexpr int8_t TurretJoy_<ContainerAllocator>::PAN_TILT_HOME;
template<typename ContainerAllocator>
constexpr int8_t TurretJoy_<ContainerAllocator>::SPEED_INC;
template<typename ContainerAllocator>
constexpr int8_t TurretJoy_<ContainerAllocator>::SPEED_DEC;
template<typename ContainerAllocator>
constexpr int8_t TurretJoy_<ContainerAllocator>::SPEED_COARSE;
template<typename ContainerAllocator>
constexpr int8_t TurretJoy_<ContainerAllocator>::SPEED_FINE;

}  // namespace msg

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__TURRET_JOY__STRUCT_HPP_
