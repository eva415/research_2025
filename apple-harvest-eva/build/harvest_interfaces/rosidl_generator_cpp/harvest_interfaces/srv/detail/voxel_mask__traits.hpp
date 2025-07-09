// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from harvest_interfaces:srv/VoxelMask.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__VOXEL_MASK__TRAITS_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__VOXEL_MASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "harvest_interfaces/srv/detail/voxel_mask__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VoxelMask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: tree_pos
  {
    out << "tree_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoxelMask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tree_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tree_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoxelMask_Request & msg, bool use_flow_style = false)
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
  const harvest_interfaces::srv::VoxelMask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::VoxelMask_Request & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::VoxelMask_Request>()
{
  return "harvest_interfaces::srv::VoxelMask_Request";
}

template<>
inline const char * name<harvest_interfaces::srv::VoxelMask_Request>()
{
  return "harvest_interfaces/srv/VoxelMask_Request";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::VoxelMask_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::VoxelMask_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<harvest_interfaces::srv::VoxelMask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VoxelMask_Response & msg,
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
  const VoxelMask_Response & msg,
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

inline std::string to_yaml(const VoxelMask_Response & msg, bool use_flow_style = false)
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
  const harvest_interfaces::srv::VoxelMask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::VoxelMask_Response & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::VoxelMask_Response>()
{
  return "harvest_interfaces::srv::VoxelMask_Response";
}

template<>
inline const char * name<harvest_interfaces::srv::VoxelMask_Response>()
{
  return "harvest_interfaces/srv/VoxelMask_Response";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::VoxelMask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::VoxelMask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<harvest_interfaces::srv::VoxelMask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<harvest_interfaces::srv::VoxelMask>()
{
  return "harvest_interfaces::srv::VoxelMask";
}

template<>
inline const char * name<harvest_interfaces::srv::VoxelMask>()
{
  return "harvest_interfaces/srv/VoxelMask";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::VoxelMask>
  : std::integral_constant<
    bool,
    has_fixed_size<harvest_interfaces::srv::VoxelMask_Request>::value &&
    has_fixed_size<harvest_interfaces::srv::VoxelMask_Response>::value
  >
{
};

template<>
struct has_bounded_size<harvest_interfaces::srv::VoxelMask>
  : std::integral_constant<
    bool,
    has_bounded_size<harvest_interfaces::srv::VoxelMask_Request>::value &&
    has_bounded_size<harvest_interfaces::srv::VoxelMask_Response>::value
  >
{
};

template<>
struct is_service<harvest_interfaces::srv::VoxelMask>
  : std::true_type
{
};

template<>
struct is_service_request<harvest_interfaces::srv::VoxelMask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<harvest_interfaces::srv::VoxelMask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HARVEST_INTERFACES__SRV__DETAIL__VOXEL_MASK__TRAITS_HPP_
