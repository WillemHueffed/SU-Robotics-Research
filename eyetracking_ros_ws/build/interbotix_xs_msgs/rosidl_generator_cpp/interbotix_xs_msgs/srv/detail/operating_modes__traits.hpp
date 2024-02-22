// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_xs_msgs:srv/OperatingModes.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__TRAITS_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__TRAITS_HPP_

#include "interbotix_xs_msgs/srv/detail/operating_modes__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::srv::OperatingModes_Request & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: profile_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile_type: ";
    value_to_yaml(msg.profile_type, out);
    out << "\n";
  }

  // member: profile_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile_velocity: ";
    value_to_yaml(msg.profile_velocity, out);
    out << "\n";
  }

  // member: profile_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile_acceleration: ";
    value_to_yaml(msg.profile_acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_xs_msgs::srv::OperatingModes_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::OperatingModes_Request>()
{
  return "interbotix_xs_msgs::srv::OperatingModes_Request";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::OperatingModes_Request>()
{
  return "interbotix_xs_msgs/srv/OperatingModes_Request";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::OperatingModes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_xs_msgs::srv::OperatingModes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::srv::OperatingModes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_xs_msgs::srv::OperatingModes_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::OperatingModes_Response>()
{
  return "interbotix_xs_msgs::srv::OperatingModes_Response";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::OperatingModes_Response>()
{
  return "interbotix_xs_msgs/srv/OperatingModes_Response";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::OperatingModes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_xs_msgs::srv::OperatingModes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interbotix_xs_msgs::srv::OperatingModes>()
{
  return "interbotix_xs_msgs::srv::OperatingModes";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::OperatingModes>()
{
  return "interbotix_xs_msgs/srv/OperatingModes";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::OperatingModes>
  : std::integral_constant<
    bool,
    has_fixed_size<interbotix_xs_msgs::srv::OperatingModes_Request>::value &&
    has_fixed_size<interbotix_xs_msgs::srv::OperatingModes_Response>::value
  >
{
};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::OperatingModes>
  : std::integral_constant<
    bool,
    has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Request>::value &&
    has_bounded_size<interbotix_xs_msgs::srv::OperatingModes_Response>::value
  >
{
};

template<>
struct is_service<interbotix_xs_msgs::srv::OperatingModes>
  : std::true_type
{
};

template<>
struct is_service_request<interbotix_xs_msgs::srv::OperatingModes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interbotix_xs_msgs::srv::OperatingModes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__OPERATING_MODES__TRAITS_HPP_
