// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interbotix_perception_msgs:srv/SnapPicture.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__STRUCT_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interbotix_perception_msgs__srv__SnapPicture_Request __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_perception_msgs__srv__SnapPicture_Request __declspec(deprecated)
#endif

namespace interbotix_perception_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SnapPicture_Request_
{
  using Type = SnapPicture_Request_<ContainerAllocator>;

  explicit SnapPicture_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  explicit SnapPicture_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filename_type filename;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_perception_msgs__srv__SnapPicture_Request
    std::shared_ptr<interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_perception_msgs__srv__SnapPicture_Request
    std::shared_ptr<interbotix_perception_msgs::srv::SnapPicture_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SnapPicture_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const SnapPicture_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SnapPicture_Request_

// alias to use template instance with default allocator
using SnapPicture_Request =
  interbotix_perception_msgs::srv::SnapPicture_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_perception_msgs


#ifndef _WIN32
# define DEPRECATED__interbotix_perception_msgs__srv__SnapPicture_Response __attribute__((deprecated))
#else
# define DEPRECATED__interbotix_perception_msgs__srv__SnapPicture_Response __declspec(deprecated)
#endif

namespace interbotix_perception_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SnapPicture_Response_
{
  using Type = SnapPicture_Response_<ContainerAllocator>;

  explicit SnapPicture_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->filepath = "";
    }
  }

  explicit SnapPicture_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filepath(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->filepath = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _filepath_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filepath_type filepath;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__filepath(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filepath = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interbotix_perception_msgs__srv__SnapPicture_Response
    std::shared_ptr<interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interbotix_perception_msgs__srv__SnapPicture_Response
    std::shared_ptr<interbotix_perception_msgs::srv::SnapPicture_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SnapPicture_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->filepath != other.filepath) {
      return false;
    }
    return true;
  }
  bool operator!=(const SnapPicture_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SnapPicture_Response_

// alias to use template instance with default allocator
using SnapPicture_Response =
  interbotix_perception_msgs::srv::SnapPicture_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace interbotix_perception_msgs
{

namespace srv
{

struct SnapPicture
{
  using Request = interbotix_perception_msgs::srv::SnapPicture_Request;
  using Response = interbotix_perception_msgs::srv::SnapPicture_Response;
};

}  // namespace srv

}  // namespace interbotix_perception_msgs

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__STRUCT_HPP_
