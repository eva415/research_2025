// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/MoveToPose.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/move_to_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Request_orientation
{
public:
  explicit Init_MoveToPose_Request_orientation(::harvest_interfaces::srv::MoveToPose_Request & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::srv::MoveToPose_Request orientation(::harvest_interfaces::srv::MoveToPose_Request::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::MoveToPose_Request msg_;
};

class Init_MoveToPose_Request_position
{
public:
  Init_MoveToPose_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPose_Request_orientation position(::harvest_interfaces::srv::MoveToPose_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MoveToPose_Request_orientation(msg_);
  }

private:
  ::harvest_interfaces::srv::MoveToPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::MoveToPose_Request>()
{
  return harvest_interfaces::srv::builder::Init_MoveToPose_Request_position();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToPose_Response_reverse_traj
{
public:
  explicit Init_MoveToPose_Response_reverse_traj(::harvest_interfaces::srv::MoveToPose_Response & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::srv::MoveToPose_Response reverse_traj(::harvest_interfaces::srv::MoveToPose_Response::_reverse_traj_type arg)
  {
    msg_.reverse_traj = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::MoveToPose_Response msg_;
};

class Init_MoveToPose_Response_result
{
public:
  Init_MoveToPose_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPose_Response_reverse_traj result(::harvest_interfaces::srv::MoveToPose_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MoveToPose_Response_reverse_traj(msg_);
  }

private:
  ::harvest_interfaces::srv::MoveToPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::MoveToPose_Response>()
{
  return harvest_interfaces::srv::builder::Init_MoveToPose_Response_result();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__BUILDER_HPP_
