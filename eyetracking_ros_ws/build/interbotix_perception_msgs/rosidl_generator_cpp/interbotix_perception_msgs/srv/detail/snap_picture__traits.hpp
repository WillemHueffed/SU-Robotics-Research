// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_perception_msgs:srv/SnapPicture.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__TRAITS_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__TRAITS_HPP_

#include "interbotix_perception_msgs/srv/detail/snap_picture__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_perception_msgs::srv::SnapPicture_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename: ";
    value_to_yaml(msg.filename, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_perception_msgs::srv::SnapPicture_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_perception_msgs::srv::SnapPicture_Request>()
{
  return "interbotix_perception_msgs::srv::SnapPicture_Request";
}

template<>
inline const char * name<interbotix_perception_msgs::srv::SnapPicture_Request>()
{
  return "interbotix_perception_msgs/srv/SnapPicture_Request";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::srv::SnapPicture_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_perception_msgs::srv::SnapPicture_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_perception_msgs::srv::SnapPicture_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_perception_msgs::srv::SnapPicture_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: filepath
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filepath: ";
    value_to_yaml(msg.filepath, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_perception_msgs::srv::SnapPicture_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_perception_msgs::srv::SnapPicture_Response>()
{
  return "interbotix_perception_msgs::srv::SnapPicture_Response";
}

template<>
inline const char * name<interbotix_perception_msgs::srv::SnapPicture_Response>()
{
  return "interbotix_perception_msgs/srv/SnapPicture_Response";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::srv::SnapPicture_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_perception_msgs::srv::SnapPicture_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_perception_msgs::srv::SnapPicture_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interbotix_perception_msgs::srv::SnapPicture>()
{
  return "interbotix_perception_msgs::srv::SnapPicture";
}

template<>
inline const char * name<interbotix_perception_msgs::srv::SnapPicture>()
{
  return "interbotix_perception_msgs/srv/SnapPicture";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::srv::SnapPicture>
  : std::integral_constant<
    bool,
    has_fixed_size<interbotix_perception_msgs::srv::SnapPicture_Request>::value &&
    has_fixed_size<interbotix_perception_msgs::srv::SnapPicture_Response>::value
  >
{
};

template<>
struct has_bounded_size<interbotix_perception_msgs::srv::SnapPicture>
  : std::integral_constant<
    bool,
    has_bounded_size<interbotix_perception_msgs::srv::SnapPicture_Request>::value &&
    has_bounded_size<interbotix_perception_msgs::srv::SnapPicture_Response>::value
  >
{
};

template<>
struct is_service<interbotix_perception_msgs::srv::SnapPicture>
  : std::true_type
{
};

template<>
struct is_service_request<interbotix_perception_msgs::srv::SnapPicture_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interbotix_perception_msgs::srv::SnapPicture_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__SNAP_PICTURE__TRAITS_HPP_
