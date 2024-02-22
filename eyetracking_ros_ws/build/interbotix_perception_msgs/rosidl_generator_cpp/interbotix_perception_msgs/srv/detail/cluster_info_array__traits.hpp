// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_perception_msgs:srv/ClusterInfoArray.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__TRAITS_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__TRAITS_HPP_

#include "interbotix_perception_msgs/srv/detail/cluster_info_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_perception_msgs::srv::ClusterInfoArray_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_perception_msgs::srv::ClusterInfoArray_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_perception_msgs::srv::ClusterInfoArray_Request>()
{
  return "interbotix_perception_msgs::srv::ClusterInfoArray_Request";
}

template<>
inline const char * name<interbotix_perception_msgs::srv::ClusterInfoArray_Request>()
{
  return "interbotix_perception_msgs/srv/ClusterInfoArray_Request";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::srv::ClusterInfoArray_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_perception_msgs::srv::ClusterInfoArray_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_perception_msgs::srv::ClusterInfoArray_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'clusters'
#include "interbotix_perception_msgs/msg/detail/cluster_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interbotix_perception_msgs::srv::ClusterInfoArray_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: clusters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.clusters.size() == 0) {
      out << "clusters: []\n";
    } else {
      out << "clusters:\n";
      for (auto item : msg.clusters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interbotix_perception_msgs::srv::ClusterInfoArray_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interbotix_perception_msgs::srv::ClusterInfoArray_Response>()
{
  return "interbotix_perception_msgs::srv::ClusterInfoArray_Response";
}

template<>
inline const char * name<interbotix_perception_msgs::srv::ClusterInfoArray_Response>()
{
  return "interbotix_perception_msgs/srv/ClusterInfoArray_Response";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::srv::ClusterInfoArray_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_perception_msgs::srv::ClusterInfoArray_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_perception_msgs::srv::ClusterInfoArray_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interbotix_perception_msgs::srv::ClusterInfoArray>()
{
  return "interbotix_perception_msgs::srv::ClusterInfoArray";
}

template<>
inline const char * name<interbotix_perception_msgs::srv::ClusterInfoArray>()
{
  return "interbotix_perception_msgs/srv/ClusterInfoArray";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::srv::ClusterInfoArray>
  : std::integral_constant<
    bool,
    has_fixed_size<interbotix_perception_msgs::srv::ClusterInfoArray_Request>::value &&
    has_fixed_size<interbotix_perception_msgs::srv::ClusterInfoArray_Response>::value
  >
{
};

template<>
struct has_bounded_size<interbotix_perception_msgs::srv::ClusterInfoArray>
  : std::integral_constant<
    bool,
    has_bounded_size<interbotix_perception_msgs::srv::ClusterInfoArray_Request>::value &&
    has_bounded_size<interbotix_perception_msgs::srv::ClusterInfoArray_Response>::value
  >
{
};

template<>
struct is_service<interbotix_perception_msgs::srv::ClusterInfoArray>
  : std::true_type
{
};

template<>
struct is_service_request<interbotix_perception_msgs::srv::ClusterInfoArray_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interbotix_perception_msgs::srv::ClusterInfoArray_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__CLUSTER_INFO_ARRAY__TRAITS_HPP_
