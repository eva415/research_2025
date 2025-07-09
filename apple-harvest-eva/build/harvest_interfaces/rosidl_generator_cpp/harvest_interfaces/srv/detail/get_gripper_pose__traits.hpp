// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from harvest_interfaces:srv/GetGripperPose.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__GET_GRIPPER_POSE__TRAITS_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__GET_GRIPPER_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "harvest_interfaces/srv/detail/get_gripper_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGripperPose_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGripperPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGripperPose_Request & msg, bool use_flow_style = false)
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
  const harvest_interfaces::srv::GetGripperPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::GetGripperPose_Request & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::GetGripperPose_Request>()
{
  return "harvest_interfaces::srv::GetGripperPose_Request";
}

template<>
inline const char * name<harvest_interfaces::srv::GetGripperPose_Request>()
{
  return "harvest_interfaces/srv/GetGripperPose_Request";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::GetGripperPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::GetGripperPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<harvest_interfaces::srv::GetGripperPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGripperPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGripperPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGripperPose_Response & msg, bool use_flow_style = false)
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
  const harvest_interfaces::srv::GetGripperPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::GetGripperPose_Response & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::GetGripperPose_Response>()
{
  return "harvest_interfaces::srv::GetGripperPose_Response";
}

template<>
inline const char * name<harvest_interfaces::srv::GetGripperPose_Response>()
{
  return "harvest_interfaces/srv/GetGripperPose_Response";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::GetGripperPose_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::GetGripperPose_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<harvest_interfaces::srv::GetGripperPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<harvest_interfaces::srv::GetGripperPose>()
{
  return "harvest_interfaces::srv::GetGripperPose";
}

template<>
inline const char * name<harvest_interfaces::srv::GetGripperPose>()
{
  return "harvest_interfaces/srv/GetGripperPose";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::GetGripperPose>
  : std::integral_constant<
    bool,
    has_fixed_size<harvest_interfaces::srv::GetGripperPose_Request>::value &&
    has_fixed_size<harvest_interfaces::srv::GetGripperPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<harvest_interfaces::srv::GetGripperPose>
  : std::integral_constant<
    bool,
    has_bounded_size<harvest_interfaces::srv::GetGripperPose_Request>::value &&
    has_bounded_size<harvest_interfaces::srv::GetGripperPose_Response>::value
  >
{
};

template<>
struct is_service<harvest_interfaces::srv::GetGripperPose>
  : std::true_type
{
};

template<>
struct is_service_request<harvest_interfaces::srv::GetGripperPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<harvest_interfaces::srv::GetGripperPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HARVEST_INTERFACES__SRV__DETAIL__GET_GRIPPER_POSE__TRAITS_HPP_
