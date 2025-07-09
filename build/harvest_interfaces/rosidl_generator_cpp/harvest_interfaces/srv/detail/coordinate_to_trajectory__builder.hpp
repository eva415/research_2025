// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/CoordinateToTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__COORDINATE_TO_TRAJECTORY__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__COORDINATE_TO_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/coordinate_to_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_CoordinateToTrajectory_Request_coordinate
{
public:
  Init_CoordinateToTrajectory_Request_coordinate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::CoordinateToTrajectory_Request coordinate(::harvest_interfaces::srv::CoordinateToTrajectory_Request::_coordinate_type arg)
  {
    msg_.coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::CoordinateToTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::CoordinateToTrajectory_Request>()
{
  return harvest_interfaces::srv::builder::Init_CoordinateToTrajectory_Request_coordinate();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_CoordinateToTrajectory_Response_waypoints
{
public:
  explicit Init_CoordinateToTrajectory_Response_waypoints(::harvest_interfaces::srv::CoordinateToTrajectory_Response & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::srv::CoordinateToTrajectory_Response waypoints(::harvest_interfaces::srv::CoordinateToTrajectory_Response::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::CoordinateToTrajectory_Response msg_;
};

class Init_CoordinateToTrajectory_Response_success
{
public:
  Init_CoordinateToTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinateToTrajectory_Response_waypoints success(::harvest_interfaces::srv::CoordinateToTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CoordinateToTrajectory_Response_waypoints(msg_);
  }

private:
  ::harvest_interfaces::srv::CoordinateToTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::CoordinateToTrajectory_Response>()
{
  return harvest_interfaces::srv::builder::Init_CoordinateToTrajectory_Response_success();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__COORDINATE_TO_TRAJECTORY__BUILDER_HPP_
