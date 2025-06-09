// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/TrajectoryBetweenPoints.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__TRAJECTORY_BETWEEN_POINTS__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__TRAJECTORY_BETWEEN_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/trajectory_between_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_TrajectoryBetweenPoints_Request_end_coordinate
{
public:
  explicit Init_TrajectoryBetweenPoints_Request_end_coordinate(::harvest_interfaces::srv::TrajectoryBetweenPoints_Request & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::srv::TrajectoryBetweenPoints_Request end_coordinate(::harvest_interfaces::srv::TrajectoryBetweenPoints_Request::_end_coordinate_type arg)
  {
    msg_.end_coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::TrajectoryBetweenPoints_Request msg_;
};

class Init_TrajectoryBetweenPoints_Request_start_coordinate
{
public:
  Init_TrajectoryBetweenPoints_Request_start_coordinate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryBetweenPoints_Request_end_coordinate start_coordinate(::harvest_interfaces::srv::TrajectoryBetweenPoints_Request::_start_coordinate_type arg)
  {
    msg_.start_coordinate = std::move(arg);
    return Init_TrajectoryBetweenPoints_Request_end_coordinate(msg_);
  }

private:
  ::harvest_interfaces::srv::TrajectoryBetweenPoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::TrajectoryBetweenPoints_Request>()
{
  return harvest_interfaces::srv::builder::Init_TrajectoryBetweenPoints_Request_start_coordinate();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_TrajectoryBetweenPoints_Response_success
{
public:
  Init_TrajectoryBetweenPoints_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::TrajectoryBetweenPoints_Response success(::harvest_interfaces::srv::TrajectoryBetweenPoints_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::TrajectoryBetweenPoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::TrajectoryBetweenPoints_Response>()
{
  return harvest_interfaces::srv::builder::Init_TrajectoryBetweenPoints_Response_success();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__TRAJECTORY_BETWEEN_POINTS__BUILDER_HPP_
