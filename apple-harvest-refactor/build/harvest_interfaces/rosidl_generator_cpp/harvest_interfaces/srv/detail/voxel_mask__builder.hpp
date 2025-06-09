// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/VoxelMask.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__VOXEL_MASK__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__VOXEL_MASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/voxel_mask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_VoxelMask_Request_tree_pos
{
public:
  Init_VoxelMask_Request_tree_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::VoxelMask_Request tree_pos(::harvest_interfaces::srv::VoxelMask_Request::_tree_pos_type arg)
  {
    msg_.tree_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::VoxelMask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::VoxelMask_Request>()
{
  return harvest_interfaces::srv::builder::Init_VoxelMask_Request_tree_pos();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_VoxelMask_Response_success
{
public:
  Init_VoxelMask_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::VoxelMask_Response success(::harvest_interfaces::srv::VoxelMask_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::VoxelMask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::VoxelMask_Response>()
{
  return harvest_interfaces::srv::builder::Init_VoxelMask_Response_success();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__VOXEL_MASK__BUILDER_HPP_
