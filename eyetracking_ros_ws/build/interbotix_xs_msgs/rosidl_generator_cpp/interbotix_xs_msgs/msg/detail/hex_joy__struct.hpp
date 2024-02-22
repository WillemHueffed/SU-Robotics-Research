// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_xs_msgs:msg/HexJoy.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__STRUCT_HPP_
#define INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interbotix_xs_msgs__msg__HexJoy __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_xs_msgs__msg__HexJoy __declspec(deprecated)
#endif

namespace interbotix_xs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HexJoy_
{
  using Type = HexJoy_<ContainerAllocator>;

  explicit HexJoy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->world_x_cmd = 0;
      this->world_y_cmd = 0;
      this->world_yaw_cmd = 0;
      this->place_x_cmd = 0;
      this->place_y_cmd = 0;
      this->place_z_cmd = 0;
      this->place_roll_cmd = 0;
      this->place_pitch_cmd = 0;
      this->pose_cmd = 0;
      this->move_type_cmd = 0;
      this->gait_toggle_cmd = 0;
      this->leg_toggle_cmd = 0;
      this->stance_cmd = 0;
      this->reboot_cmd = 0;
      this->set_home_pose_cmd = 0;
      this->speed_cmd = 0;
      this->speed_toggle_cmd = 0;
    }
  }

  explicit HexJoy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->world_x_cmd = 0;
      this->world_y_cmd = 0;
      this->world_yaw_cmd = 0;
      this->place_x_cmd = 0;
      this->place_y_cmd = 0;
      this->place_z_cmd = 0;
      this->place_roll_cmd = 0;
      this->place_pitch_cmd = 0;
      this->pose_cmd = 0;
      this->move_type_cmd = 0;
      this->gait_toggle_cmd = 0;
      this->leg_toggle_cmd = 0;
      this->stance_cmd = 0;
      this->reboot_cmd = 0;
      this->set_home_pose_cmd = 0;
      this->speed_cmd = 0;
      this->speed_toggle_cmd = 0;
    }
  }

  // field types and members
  using _world_x_cmd_type =
    int8_t;
  _world_x_cmd_type world_x_cmd;
  using _world_y_cmd_type =
    int8_t;
  _world_y_cmd_type world_y_cmd;
  using _world_yaw_cmd_type =
    int8_t;
  _world_yaw_cmd_type world_yaw_cmd;
  using _place_x_cmd_type =
    int8_t;
  _place_x_cmd_type place_x_cmd;
  using _place_y_cmd_type =
    int8_t;
  _place_y_cmd_type place_y_cmd;
  using _place_z_cmd_type =
    int8_t;
  _place_z_cmd_type place_z_cmd;
  using _place_roll_cmd_type =
    int8_t;
  _place_roll_cmd_type place_roll_cmd;
  using _place_pitch_cmd_type =
    int8_t;
  _place_pitch_cmd_type place_pitch_cmd;
  using _pose_cmd_type =
    int8_t;
  _pose_cmd_type pose_cmd;
  using _move_type_cmd_type =
    int8_t;
  _move_type_cmd_type move_type_cmd;
  using _gait_toggle_cmd_type =
    int8_t;
  _gait_toggle_cmd_type gait_toggle_cmd;
  using _leg_toggle_cmd_type =
    int8_t;
  _leg_toggle_cmd_type leg_toggle_cmd;
  using _stance_cmd_type =
    int8_t;
  _stance_cmd_type stance_cmd;
  using _reboot_cmd_type =
    int8_t;
  _reboot_cmd_type reboot_cmd;
  using _set_home_pose_cmd_type =
    int8_t;
  _set_home_pose_cmd_type set_home_pose_cmd;
  using _speed_cmd_type =
    int8_t;
  _speed_cmd_type speed_cmd;
  using _speed_toggle_cmd_type =
    int8_t;
  _speed_toggle_cmd_type speed_toggle_cmd;

  // setters for named parameter idiom
  Type & set__world_x_cmd(
    const int8_t & _arg)
  {
    this->world_x_cmd = _arg;
    return *this;
  }
  Type & set__world_y_cmd(
    const int8_t & _arg)
  {
    this->world_y_cmd = _arg;
    return *this;
  }
  Type & set__world_yaw_cmd(
    const int8_t & _arg)
  {
    this->world_yaw_cmd = _arg;
    return *this;
  }
  Type & set__place_x_cmd(
    const int8_t & _arg)
  {
    this->place_x_cmd = _arg;
    return *this;
  }
  Type & set__place_y_cmd(
    const int8_t & _arg)
  {
    this->place_y_cmd = _arg;
    return *this;
  }
  Type & set__place_z_cmd(
    const int8_t & _arg)
  {
    this->place_z_cmd = _arg;
    return *this;
  }
  Type & set__place_roll_cmd(
    const int8_t & _arg)
  {
    this->place_roll_cmd = _arg;
    return *this;
  }
  Type & set__place_pitch_cmd(
    const int8_t & _arg)
  {
    this->place_pitch_cmd = _arg;
    return *this;
  }
  Type & set__pose_cmd(
    const int8_t & _arg)
  {
    this->pose_cmd = _arg;
    return *this;
  }
  Type & set__move_type_cmd(
    const int8_t & _arg)
  {
    this->move_type_cmd = _arg;
    return *this;
  }
  Type & set__gait_toggle_cmd(
    const int8_t & _arg)
  {
    this->gait_toggle_cmd = _arg;
    return *this;
  }
  Type & set__leg_toggle_cmd(
    const int8_t & _arg)
  {
    this->leg_toggle_cmd = _arg;
    return *this;
  }
  Type & set__stance_cmd(
    const int8_t & _arg)
  {
    this->stance_cmd = _arg;
    return *this;
  }
  Type & set__reboot_cmd(
    const int8_t & _arg)
  {
    this->reboot_cmd = _arg;
    return *this;
  }
  Type & set__set_home_pose_cmd(
    const int8_t & _arg)
  {
    this->set_home_pose_cmd = _arg;
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
  static constexpr int8_t WORLD_X_INC =
    1;
  static constexpr int8_t WORLD_X_DEC =
    2;
  static constexpr int8_t WORLD_Y_INC =
    3;
  static constexpr int8_t WORLD_Y_DEC =
    4;
  static constexpr int8_t WORLD_YAW_CCW =
    5;
  static constexpr int8_t WORLD_YAW_CW =
    6;
  static constexpr int8_t PLACE_X_INC =
    7;
  static constexpr int8_t PLACE_X_DEC =
    8;
  static constexpr int8_t PLACE_Y_INC =
    9;
  static constexpr int8_t PLACE_Y_DEC =
    10;
  static constexpr int8_t PLACE_Z_INC =
    11;
  static constexpr int8_t PLACE_Z_DEC =
    12;
  static constexpr int8_t PLACE_ROLL_CCW =
    13;
  static constexpr int8_t PLACE_ROLL_CW =
    14;
  static constexpr int8_t PLACE_PITCH_UP =
    15;
  static constexpr int8_t PLACE_PITCH_DOWN =
    16;
  static constexpr int8_t MOVE_HEXAPOD =
    17;
  static constexpr int8_t MOVE_LEG =
    18;
  static constexpr int8_t HOME_POSE =
    19;
  static constexpr int8_t SLEEP_POSE =
    20;
  static constexpr int8_t GAIT_NEXT =
    21;
  static constexpr int8_t GAIT_PREVIOUS =
    22;
  static constexpr int8_t LEG_NEXT =
    23;
  static constexpr int8_t LEG_PREVIOUS =
    24;
  static constexpr int8_t WIDEN_STANCE =
    25;
  static constexpr int8_t NARROW_STANCE =
    26;
  static constexpr int8_t REBOOT_MOTORS =
    27;
  static constexpr int8_t SET_HOME_POSE =
    28;
  static constexpr int8_t SPEED_INC =
    29;
  static constexpr int8_t SPEED_DEC =
    30;
  static constexpr int8_t SPEED_COARSE =
    31;
  static constexpr int8_t SPEED_FINE =
    32;

  // pointer types
  using RawPtr =
    interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_xs_msgs__msg__HexJoy
    std::shared_ptr<interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_xs_msgs__msg__HexJoy
    std::shared_ptr<interbotix_xs_msgs::msg::HexJoy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HexJoy_ & other) const
  {
    if (this->world_x_cmd != other.world_x_cmd) {
      return false;
    }
    if (this->world_y_cmd != other.world_y_cmd) {
      return false;
    }
    if (this->world_yaw_cmd != other.world_yaw_cmd) {
      return false;
    }
    if (this->place_x_cmd != other.place_x_cmd) {
      return false;
    }
    if (this->place_y_cmd != other.place_y_cmd) {
      return false;
    }
    if (this->place_z_cmd != other.place_z_cmd) {
      return false;
    }
    if (this->place_roll_cmd != other.place_roll_cmd) {
      return false;
    }
    if (this->place_pitch_cmd != other.place_pitch_cmd) {
      return false;
    }
    if (this->pose_cmd != other.pose_cmd) {
      return false;
    }
    if (this->move_type_cmd != other.move_type_cmd) {
      return false;
    }
    if (this->gait_toggle_cmd != other.gait_toggle_cmd) {
      return false;
    }
    if (this->leg_toggle_cmd != other.leg_toggle_cmd) {
      return false;
    }
    if (this->stance_cmd != other.stance_cmd) {
      return false;
    }
    if (this->reboot_cmd != other.reboot_cmd) {
      return false;
    }
    if (this->set_home_pose_cmd != other.set_home_pose_cmd) {
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
  bool operator!=(const HexJoy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HexJoy_

// alias to use template instance with default allocator
using HexJoy =
  interbotix_xs_msgs::msg::HexJoy_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::WORLD_X_INC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::WORLD_X_DEC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::WORLD_Y_INC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::WORLD_Y_DEC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::WORLD_YAW_CCW;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::WORLD_YAW_CW;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_X_INC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_X_DEC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_Y_INC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_Y_DEC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_Z_INC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_Z_DEC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_ROLL_CCW;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_ROLL_CW;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_PITCH_UP;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::PLACE_PITCH_DOWN;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::MOVE_HEXAPOD;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::MOVE_LEG;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::HOME_POSE;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::SLEEP_POSE;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::GAIT_NEXT;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::GAIT_PREVIOUS;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::LEG_NEXT;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::LEG_PREVIOUS;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::WIDEN_STANCE;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::NARROW_STANCE;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::REBOOT_MOTORS;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::SET_HOME_POSE;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::SPEED_INC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::SPEED_DEC;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::SPEED_COARSE;
template<typename ContainerAllocator>
constexpr int8_t HexJoy_<ContainerAllocator>::SPEED_FINE;

}  // namespace msg

}  // namespace interbotix_xs_msgs

#endif  // INTERBOTIX_XS_MSGS__MSG__DETAIL__HEX_JOY__STRUCT_HPP_
