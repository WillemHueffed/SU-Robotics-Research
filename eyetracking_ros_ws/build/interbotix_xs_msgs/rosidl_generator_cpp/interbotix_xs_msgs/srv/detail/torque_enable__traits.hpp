// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_xs_msgs:srv/TorqueEnable.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__TORQUE_ENABLE__TRAITS_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__TORQUE_ENABLE__TRAITS_HPP_

#include "interbotix_xs_msgs/srv/detail/torque_enable__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::srv::TorqueEnable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_type: ";
    value_to_yaml(msg.cmd_type, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_xs_msgs::srv::TorqueEnable_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::TorqueEnable_Request>()
{
  return "interbotix_xs_msgs::srv::TorqueEnable_Request";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::TorqueEnable_Request>()
{
  return "interbotix_xs_msgs/srv/TorqueEnable_Request";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::TorqueEnable_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::TorqueEnable_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_xs_msgs::srv::TorqueEnable_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::srv::TorqueEnable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_xs_msgs::srv::TorqueEnable_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::TorqueEnable_Response>()
{
  return "interbotix_xs_msgs::srv::TorqueEnable_Response";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::TorqueEnable_Response>()
{
  return "interbotix_xs_msgs/srv/TorqueEnable_Response";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::TorqueEnable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::TorqueEnable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_xs_msgs::srv::TorqueEnable_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interbotix_xs_msgs::srv::TorqueEnable>()
{
  return "interbotix_xs_msgs::srv::TorqueEnable";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::TorqueEnable>()
{
  return "interbotix_xs_msgs/srv/TorqueEnable";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::TorqueEnable>
  : std::integral_constant<
    bool,
    has_fixed_size<interbotix_xs_msgs::srv::TorqueEnable_Request>::value &&
    has_fixed_size<interbotix_xs_msgs::srv::TorqueEnable_Response>::value
  >
{
};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::TorqueEnable>
  : std::integral_constant<
    bool,
    has_bounded_size<interbotix_xs_msgs::srv::TorqueEnable_Request>::value &&
    has_bounded_size<interbotix_xs_msgs::srv::TorqueEnable_Response>::value
  >
{
};

template<>
struct is_service<interbotix_xs_msgs::srv::TorqueEnable>
  : std::true_type
{
};

template<>
struct is_service_request<interbotix_xs_msgs::srv::TorqueEnable_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interbotix_xs_msgs::srv::TorqueEnable_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__TORQUE_ENABLE__TRAITS_HPP_
