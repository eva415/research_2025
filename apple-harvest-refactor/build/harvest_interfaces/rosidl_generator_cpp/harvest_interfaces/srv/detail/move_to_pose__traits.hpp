// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from harvest_interfaces:srv/MoveToPose.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__TRAITS_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "harvest_interfaces/srv/detail/move_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPose_Request & msg, bool use_flow_style = false)
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
  const harvest_interfaces::srv::MoveToPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::MoveToPose_Request & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::MoveToPose_Request>()
{
  return "harvest_interfaces::srv::MoveToPose_Request";
}

template<>
inline const char * name<harvest_interfaces::srv::MoveToPose_Request>()
{
  return "harvest_interfaces/srv/MoveToPose_Request";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::MoveToPose_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::MoveToPose_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct is_message<harvest_interfaces::srv::MoveToPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'reverse_traj'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: reverse_traj
  {
    out << "reverse_traj: ";
    to_flow_style_yaml(msg.reverse_traj, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }

  // member: reverse_traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse_traj:\n";
    to_block_style_yaml(msg.reverse_traj, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToPose_Response & msg, bool use_flow_style = false)
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
  const harvest_interfaces::srv::MoveToPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::MoveToPose_Response & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::MoveToPose_Response>()
{
  return "harvest_interfaces::srv::MoveToPose_Response";
}

template<>
inline const char * name<harvest_interfaces::srv::MoveToPose_Response>()
{
  return "harvest_interfaces/srv/MoveToPose_Response";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::MoveToPose_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::MoveToPose_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<harvest_interfaces::srv::MoveToPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<harvest_interfaces::srv::MoveToPose>()
{
  return "harvest_interfaces::srv::MoveToPose";
}

template<>
inline const char * name<harvest_interfaces::srv::MoveToPose>()
{
  return "harvest_interfaces/srv/MoveToPose";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::MoveToPose>
  : std::integral_constant<
    bool,
    has_fixed_size<harvest_interfaces::srv::MoveToPose_Request>::value &&
    has_fixed_size<harvest_interfaces::srv::MoveToPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<harvest_interfaces::srv::MoveToPose>
  : std::integral_constant<
    bool,
    has_bounded_size<harvest_interfaces::srv::MoveToPose_Request>::value &&
    has_bounded_size<harvest_interfaces::srv::MoveToPose_Response>::value
  >
{
};

template<>
struct is_service<harvest_interfaces::srv::MoveToPose>
  : std::true_type
{
};

template<>
struct is_service_request<harvest_interfaces::srv::MoveToPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<harvest_interfaces::srv::MoveToPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__TRAITS_HPP_
