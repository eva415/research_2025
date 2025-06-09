// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/SendTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__SEND_TRAJECTORY__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__SEND_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/send_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_SendTrajectory_Request_waypoints
{
public:
  Init_SendTrajectory_Request_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::SendTrajectory_Request waypoints(::harvest_interfaces::srv::SendTrajectory_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::SendTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::SendTrajectory_Request>()
{
  return harvest_interfaces::srv::builder::Init_SendTrajectory_Request_waypoints();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_SendTrajectory_Response_success
{
public:
  Init_SendTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::SendTrajectory_Response success(::harvest_interfaces::srv::SendTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::SendTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::SendTrajectory_Response>()
{
  return harvest_interfaces::srv::builder::Init_SendTrajectory_Response_success();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__SEND_TRAJECTORY__BUILDER_HPP_
