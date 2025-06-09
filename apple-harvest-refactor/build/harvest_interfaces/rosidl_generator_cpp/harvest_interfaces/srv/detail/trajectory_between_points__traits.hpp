// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from harvest_interfaces:srv/TrajectoryBetweenPoints.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__TRAJECTORY_BETWEEN_POINTS__TRAITS_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__TRAJECTORY_BETWEEN_POINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "harvest_interfaces/srv/detail/trajectory_between_points__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_coordinate'
// Member 'end_coordinate'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrajectoryBetweenPoints_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_coordinate
  {
    out << "start_coordinate: ";
    to_flow_style_yaml(msg.start_coordinate, out);
    out << ", ";
  }

  // member: end_coordinate
  {
    out << "end_coordinate: ";
    to_flow_style_yaml(msg.end_coordinate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryBetweenPoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_coordinate:\n";
    to_block_style_yaml(msg.start_coordinate, out, indentation + 2);
  }

  // member: end_coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_coordinate:\n";
    to_block_style_yaml(msg.end_coordinate, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryBetweenPoints_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::srv::TrajectoryBetweenPoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::TrajectoryBetweenPoints_Request & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::TrajectoryBetweenPoints_Request>()
{
  return "harvest_interfaces::srv::TrajectoryBetweenPoints_Request";
}

template<>
inline const char * name<harvest_interfaces::srv::TrajectoryBetweenPoints_Request>()
{
  return "harvest_interfaces/srv/TrajectoryBetweenPoints_Request";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::TrajectoryBetweenPoints_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::TrajectoryBetweenPoints_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<harvest_interfaces::srv::TrajectoryBetweenPoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrajectoryBetweenPoints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryBetweenPoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryBetweenPoints_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::srv::TrajectoryBetweenPoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::TrajectoryBetweenPoints_Response & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::TrajectoryBetweenPoints_Response>()
{
  return "harvest_interfaces::srv::TrajectoryBetweenPoints_Response";
}

template<>
inline const char * name<harvest_interfaces::srv::TrajectoryBetweenPoints_Response>()
{
  return "harvest_interfaces/srv/TrajectoryBetweenPoints_Response";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::TrajectoryBetweenPoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::TrajectoryBetweenPoints_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<harvest_interfaces::srv::TrajectoryBetweenPoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<harvest_interfaces::srv::TrajectoryBetweenPoints>()
{
  return "harvest_interfaces::srv::TrajectoryBetweenPoints";
}

template<>
inline const char * name<harvest_interfaces::srv::TrajectoryBetweenPoints>()
{
  return "harvest_interfaces/srv/TrajectoryBetweenPoints";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::TrajectoryBetweenPoints>
  : std::integral_constant<
    bool,
    has_fixed_size<harvest_interfaces::srv::TrajectoryBetweenPoints_Request>::value &&
    has_fixed_size<harvest_interfaces::srv::TrajectoryBetweenPoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<harvest_interfaces::srv::TrajectoryBetweenPoints>
  : std::integral_constant<
    bool,
    has_bounded_size<harvest_interfaces::srv::TrajectoryBetweenPoints_Request>::value &&
    has_bounded_size<harvest_interfaces::srv::TrajectoryBetweenPoints_Response>::value
  >
{
};

template<>
struct is_service<harvest_interfaces::srv::TrajectoryBetweenPoints>
  : std::true_type
{
};

template<>
struct is_service_request<harvest_interfaces::srv::TrajectoryBetweenPoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<harvest_interfaces::srv::TrajectoryBetweenPoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HARVEST_INTERFACES__SRV__DETAIL__TRAJECTORY_BETWEEN_POINTS__TRAITS_HPP_
