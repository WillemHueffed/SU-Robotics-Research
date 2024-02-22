// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_xs_msgs:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__TRAITS_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__TRAITS_HPP_

#include "interbotix_xs_msgs/srv/detail/robot_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::srv::RobotInfo_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_xs_msgs::srv::RobotInfo_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::RobotInfo_Request>()
{
  return "interbotix_xs_msgs::srv::RobotInfo_Request";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::RobotInfo_Request>()
{
  return "interbotix_xs_msgs/srv/RobotInfo_Request";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::RobotInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::RobotInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_xs_msgs::srv::RobotInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_xs_msgs::srv::RobotInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_ids.size() == 0) {
      out << "joint_ids: []\n";
    } else {
      out << "joint_ids:\n";
      for (auto item : msg.joint_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_lower_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_lower_limits.size() == 0) {
      out << "joint_lower_limits: []\n";
    } else {
      out << "joint_lower_limits:\n";
      for (auto item : msg.joint_lower_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_upper_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_upper_limits.size() == 0) {
      out << "joint_upper_limits: []\n";
    } else {
      out << "joint_upper_limits:\n";
      for (auto item : msg.joint_upper_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_velocity_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_velocity_limits.size() == 0) {
      out << "joint_velocity_limits: []\n";
    } else {
      out << "joint_velocity_limits:\n";
      for (auto item : msg.joint_velocity_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_sleep_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_sleep_positions.size() == 0) {
      out << "joint_sleep_positions: []\n";
    } else {
      out << "joint_sleep_positions:\n";
      for (auto item : msg.joint_sleep_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_state_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_state_indices.size() == 0) {
      out << "joint_state_indices: []\n";
    } else {
      out << "joint_state_indices:\n";
      for (auto item : msg.joint_state_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: num_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_joints: ";
    value_to_yaml(msg.num_joints, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_xs_msgs::srv::RobotInfo_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::RobotInfo_Response>()
{
  return "interbotix_xs_msgs::srv::RobotInfo_Response";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::RobotInfo_Response>()
{
  return "interbotix_xs_msgs/srv/RobotInfo_Response";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::RobotInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::RobotInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_xs_msgs::srv::RobotInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interbotix_xs_msgs::srv::RobotInfo>()
{
  return "interbotix_xs_msgs::srv::RobotInfo";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::RobotInfo>()
{
  return "interbotix_xs_msgs/srv/RobotInfo";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::RobotInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<interbotix_xs_msgs::srv::RobotInfo_Request>::value &&
    has_fixed_size<interbotix_xs_msgs::srv::RobotInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::RobotInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<interbotix_xs_msgs::srv::RobotInfo_Request>::value &&
    has_bounded_size<interbotix_xs_msgs::srv::RobotInfo_Response>::value
  >
{
};

template<>
struct is_service<interbotix_xs_msgs::srv::RobotInfo>
  : std::true_type
{
};

template<>
struct is_service_request<interbotix_xs_msgs::srv::RobotInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interbotix_xs_msgs::srv::RobotInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__ROBOT_INFO__TRAITS_HPP_
