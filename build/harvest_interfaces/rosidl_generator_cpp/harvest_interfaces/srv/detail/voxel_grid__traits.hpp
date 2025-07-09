// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from harvest_interfaces:srv/VoxelGrid.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__TRAITS_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "harvest_interfaces/srv/detail/voxel_grid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VoxelGrid_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: voxel_size
  {
    out << "voxel_size: ";
    rosidl_generator_traits::value_to_yaml(msg.voxel_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoxelGrid_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: voxel_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voxel_size: ";
    rosidl_generator_traits::value_to_yaml(msg.voxel_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoxelGrid_Request & msg, bool use_flow_style = false)
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
  const harvest_interfaces::srv::VoxelGrid_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::VoxelGrid_Request & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::VoxelGrid_Request>()
{
  return "harvest_interfaces::srv::VoxelGrid_Request";
}

template<>
inline const char * name<harvest_interfaces::srv::VoxelGrid_Request>()
{
  return "harvest_interfaces/srv/VoxelGrid_Request";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::VoxelGrid_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::VoxelGrid_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<harvest_interfaces::srv::VoxelGrid_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'voxel_centers'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'voxel_colors'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace harvest_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VoxelGrid_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: voxel_centers
  {
    if (msg.voxel_centers.size() == 0) {
      out << "voxel_centers: []";
    } else {
      out << "voxel_centers: [";
      size_t pending_items = msg.voxel_centers.size();
      for (auto item : msg.voxel_centers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: voxel_colors
  {
    if (msg.voxel_colors.size() == 0) {
      out << "voxel_colors: []";
    } else {
      out << "voxel_colors: [";
      size_t pending_items = msg.voxel_colors.size();
      for (auto item : msg.voxel_colors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoxelGrid_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: voxel_centers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.voxel_centers.size() == 0) {
      out << "voxel_centers: []\n";
    } else {
      out << "voxel_centers:\n";
      for (auto item : msg.voxel_centers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: voxel_colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.voxel_colors.size() == 0) {
      out << "voxel_colors: []\n";
    } else {
      out << "voxel_colors:\n";
      for (auto item : msg.voxel_colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoxelGrid_Response & msg, bool use_flow_style = false)
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
  const harvest_interfaces::srv::VoxelGrid_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::srv::VoxelGrid_Response & msg)
{
  return harvest_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::srv::VoxelGrid_Response>()
{
  return "harvest_interfaces::srv::VoxelGrid_Response";
}

template<>
inline const char * name<harvest_interfaces::srv::VoxelGrid_Response>()
{
  return "harvest_interfaces/srv/VoxelGrid_Response";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::VoxelGrid_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<harvest_interfaces::srv::VoxelGrid_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<harvest_interfaces::srv::VoxelGrid_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<harvest_interfaces::srv::VoxelGrid>()
{
  return "harvest_interfaces::srv::VoxelGrid";
}

template<>
inline const char * name<harvest_interfaces::srv::VoxelGrid>()
{
  return "harvest_interfaces/srv/VoxelGrid";
}

template<>
struct has_fixed_size<harvest_interfaces::srv::VoxelGrid>
  : std::integral_constant<
    bool,
    has_fixed_size<harvest_interfaces::srv::VoxelGrid_Request>::value &&
    has_fixed_size<harvest_interfaces::srv::VoxelGrid_Response>::value
  >
{
};

template<>
struct has_bounded_size<harvest_interfaces::srv::VoxelGrid>
  : std::integral_constant<
    bool,
    has_bounded_size<harvest_interfaces::srv::VoxelGrid_Request>::value &&
    has_bounded_size<harvest_interfaces::srv::VoxelGrid_Response>::value
  >
{
};

template<>
struct is_service<harvest_interfaces::srv::VoxelGrid>
  : std::true_type
{
};

template<>
struct is_service_request<harvest_interfaces::srv::VoxelGrid_Request>
  : std::true_type
{
};

template<>
struct is_service_response<harvest_interfaces::srv::VoxelGrid_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__TRAITS_HPP_
