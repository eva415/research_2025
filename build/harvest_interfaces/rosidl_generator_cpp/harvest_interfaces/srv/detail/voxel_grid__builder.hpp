// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/VoxelGrid.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/voxel_grid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_VoxelGrid_Request_voxel_size
{
public:
  Init_VoxelGrid_Request_voxel_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::VoxelGrid_Request voxel_size(::harvest_interfaces::srv::VoxelGrid_Request::_voxel_size_type arg)
  {
    msg_.voxel_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::VoxelGrid_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::VoxelGrid_Request>()
{
  return harvest_interfaces::srv::builder::Init_VoxelGrid_Request_voxel_size();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_VoxelGrid_Response_voxel_colors
{
public:
  explicit Init_VoxelGrid_Response_voxel_colors(::harvest_interfaces::srv::VoxelGrid_Response & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::srv::VoxelGrid_Response voxel_colors(::harvest_interfaces::srv::VoxelGrid_Response::_voxel_colors_type arg)
  {
    msg_.voxel_colors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::VoxelGrid_Response msg_;
};

class Init_VoxelGrid_Response_voxel_centers
{
public:
  Init_VoxelGrid_Response_voxel_centers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VoxelGrid_Response_voxel_colors voxel_centers(::harvest_interfaces::srv::VoxelGrid_Response::_voxel_centers_type arg)
  {
    msg_.voxel_centers = std::move(arg);
    return Init_VoxelGrid_Response_voxel_colors(msg_);
  }

private:
  ::harvest_interfaces::srv::VoxelGrid_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::VoxelGrid_Response>()
{
  return harvest_interfaces::srv::builder::Init_VoxelGrid_Response_voxel_centers();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__BUILDER_HPP_
