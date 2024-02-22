// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_xs_msgs:msg/LocobotJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__STRUCT_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__msg__LocobotJoy __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__msg__LocobotJoy __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocobotJoy_
{
  using Type = LocobotJoy_<ContainerAllocator>;

  explicit LocobotJoy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_x_cmd = 0.0;
      this->base_theta_cmd = 0.0;
      this->base_reset_odom_cmd = 0;
      this->pan_cmd = 0;
      this->tilt_cmd = 0;
      this->ee_x_cmd = 0;
      this->ee_y_cmd = 0;
      this->ee_z_cmd = 0;
      this->ee_roll_cmd = 0;
      this->ee_pitch_cmd = 0;
      this->waist_cmd = 0;
      this->gripper_cmd = 0;
      this->pose_cmd = 0;
      this->speed_cmd = 0;
      this->speed_toggle_cmd = 0;
      this->gripper_pwm_cmd = 0;
    }
  }

  explicit LocobotJoy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->base_x_cmd = 0.0;
      this->base_theta_cmd = 0.0;
      this->base_reset_odom_cmd = 0;
      this->pan_cmd = 0;
      this->tilt_cmd = 0;
      this->ee_x_cmd = 0;
      this->ee_y_cmd = 0;
      this->ee_z_cmd = 0;
      this->ee_roll_cmd = 0;
      this->ee_pitch_cmd = 0;
      this->waist_cmd = 0;
      this->gripper_cmd = 0;
      this->pose_cmd = 0;
      this->speed_cmd = 0;
      this->speed_toggle_cmd = 0;
      this->gripper_pwm_cmd = 0;
    }
  }

  // field types and members
  using _base_x_cmd_type =
    double;
  _base_x_cmd_type base_x_cmd;
  using _base_theta_cmd_type =
    double;
  _base_theta_cmd_type base_theta_cmd;
  using _base_reset_odom_cmd_type =
    int8_t;
  _base_reset_odom_cmd_type base_reset_odom_cmd;
  using _pan_cmd_type =
    int8_t;
  _pan_cmd_type pan_cmd;
  using _tilt_cmd_type =
    int8_t;
  _tilt_cmd_type tilt_cmd;
  using _ee_x_cmd_type =
    int8_t;
  _ee_x_cmd_type ee_x_cmd;
  using _ee_y_cmd_type =
    int8_t;
  _ee_y_cmd_type ee_y_cmd;
  using _ee_z_cmd_type =
    int8_t;
  _ee_z_cmd_type ee_z_cmd;
  using _ee_roll_cmd_type =
    int8_t;
  _ee_roll_cmd_type ee_roll_cmd;
  using _ee_pitch_cmd_type =
    int8_t;
  _ee_pitch_cmd_type ee_pitch_cmd;
  using _waist_cmd_type =
    int8_t;
  _waist_cmd_type waist_cmd;
  using _gripper_cmd_type =
    int8_t;
  _gripper_cmd_type gripper_cmd;
  using _pose_cmd_type =
    int8_t;
  _pose_cmd_type pose_cmd;
  using _speed_cmd_type =
    int8_t;
  _speed_cmd_type speed_cmd;
  using _speed_toggle_cmd_type =
    int8_t;
  _speed_toggle_cmd_type speed_toggle_cmd;
  using _gripper_pwm_cmd_type =
    int8_t;
  _gripper_pwm_cmd_type gripper_pwm_cmd;

  // setters for named parameter idiom
  Type & set__base_x_cmd(
    const double & _arg)
  {
    this->base_x_cmd = _arg;
    return *this;
  }
  Type & set__base_theta_cmd(
    const double & _arg)
  {
    this->base_theta_cmd = _arg;
    return *this;
  }
  Type & set__base_reset_odom_cmd(
    const int8_t & _arg)
  {
    this->base_reset_odom_cmd = _arg;
    return *this;
  }
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
  Type & set__ee_x_cmd(
    const int8_t & _arg)
  {
    this->ee_x_cmd = _arg;
    return *this;
  }
  Type & set__ee_y_cmd(
    const int8_t & _arg)
  {
    this->ee_y_cmd = _arg;
    return *this;
  }
  Type & set__ee_z_cmd(
    const int8_t & _arg)
  {
    this->ee_z_cmd = _arg;
    return *this;
  }
  Type & set__ee_roll_cmd(
    const int8_t & _arg)
  {
    this->ee_roll_cmd = _arg;
    return *this;
  }
  Type & set__ee_pitch_cmd(
    const int8_t & _arg)
  {
    this->ee_pitch_cmd = _arg;
    return *this;
  }
  Type & set__waist_cmd(
    const int8_t & _arg)
  {
    this->waist_cmd = _arg;
    return *this;
  }
  Type & set__gripper_cmd(
    const int8_t & _arg)
  {
    this->gripper_cmd = _arg;
    return *this;
  }
  Type & set__pose_cmd(
    const int8_t & _arg)
  {
    this->pose_cmd = _arg;
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
  Type & set__gripper_pwm_cmd(
    const int8_t & _arg)
  {
    this->gripper_pwm_cmd = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t RESET_ODOM =
    1;
  static constexpr int8_t PAN_CCW =
    2;
  static constexpr int8_t PAN_CW =
    3;
  static constexpr int8_t TILT_UP =
    4;
  static constexpr int8_t TILT_DOWN =
    5;
  static constexpr int8_t PAN_TILT_HOME =
    6;
  static constexpr int8_t EE_X_INC =
    7;
  static constexpr int8_t EE_X_DEC =
    8;
  static constexpr int8_t EE_Y_INC =
    9;
  static constexpr int8_t EE_Y_DEC =
    10;
  static constexpr int8_t EE_Z_INC =
    11;
  static constexpr int8_t EE_Z_DEC =
    12;
  static constexpr int8_t EE_ROLL_CCW =
    13;
  static constexpr int8_t EE_ROLL_CW =
    14;
  static constexpr int8_t EE_PITCH_UP =
    15;
  static constexpr int8_t EE_PITCH_DOWN =
    16;
  static constexpr int8_t WAIST_CCW =
    17;
  static constexpr int8_t WAIST_CW =
    18;
  static constexpr int8_t GRIPPER_RELEASE =
    19;
  static constexpr int8_t GRIPPER_GRASP =
    20;
  static constexpr int8_t HOME_POSE =
    21;
  static constexpr int8_t SLEEP_POSE =
    22;
  static constexpr int8_t SPEED_INC =
    23;
  static constexpr int8_t SPEED_DEC =
    24;
  static constexpr int8_t SPEED_COARSE =
    25;
  static constexpr int8_t SPEED_FINE =
    26;
  static constexpr int8_t GRIPPER_PWM_INC =
    27;
  static constexpr int8_t GRIPPER_PWM_DEC =
    28;

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__msg__LocobotJoy
    std::shared_ptr<interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__msg__LocobotJoy
    std::shared_ptr<interbotix_xs_msgs::msg::LocobotJoy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocobotJoy_ & other) const
  {
    if (this->base_x_cmd != other.base_x_cmd) {
      return false;
    }
    if (this->base_theta_cmd != other.base_theta_cmd) {
      return false;
    }
    if (this->base_reset_odom_cmd != other.base_reset_odom_cmd) {
      return false;
    }
    if (this->pan_cmd != other.pan_cmd) {
      return false;
    }
    if (this->tilt_cmd != other.tilt_cmd) {
      return false;
    }
    if (this->ee_x_cmd != other.ee_x_cmd) {
      return false;
    }
    if (this->ee_y_cmd != other.ee_y_cmd) {
      return false;
    }
    if (this->ee_z_cmd != other.ee_z_cmd) {
      return false;
    }
    if (this->ee_roll_cmd != other.ee_roll_cmd) {
      return false;
    }
    if (this->ee_pitch_cmd != other.ee_pitch_cmd) {
      return false;
    }
    if (this->waist_cmd != other.waist_cmd) {
      return false;
    }
    if (this->gripper_cmd != other.gripper_cmd) {
      return false;
    }
    if (this->pose_cmd != other.pose_cmd) {
      return false;
    }
    if (this->speed_cmd != other.speed_cmd) {
      return false;
    }
    if (this->speed_toggle_cmd != other.speed_toggle_cmd) {
      return false;
    }
    if (this->gripper_pwm_cmd != other.gripper_pwm_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocobotJoy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocobotJoy_

// alias to use template instance with default allocator
using LocobotJoy =
  interbotix_xs_msgs::msg::LocobotJoy_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::RESET_ODOM;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::PAN_CCW;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::PAN_CW;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::TILT_UP;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::TILT_DOWN;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::PAN_TILT_HOME;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_X_INC;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_X_DEC;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_Y_INC;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_Y_DEC;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_Z_INC;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_Z_DEC;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_ROLL_CCW;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_ROLL_CW;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_PITCH_UP;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::EE_PITCH_DOWN;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::WAIST_CCW;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::WAIST_CW;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::GRIPPER_RELEASE;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::GRIPPER_GRASP;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::HOME_POSE;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::SLEEP_POSE;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::SPEED_INC;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::SPEED_DEC;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::SPEED_COARSE;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::SPEED_FINE;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::GRIPPER_PWM_INC;
template<typename ContainerAllocator>
constexpr int8_t LocobotJoy_<ContainerAllocator>::GRIPPER_PWM_DEC;

}  // namespace msg

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__LOCOBOT_JOY__STRUCT_HPP_
