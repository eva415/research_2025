// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/ApplePrediction.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__APPLE_PREDICTION__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__APPLE_PREDICTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/apple_prediction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::ApplePrediction_Request>()
{
  return ::harvest_interfaces::srv::ApplePrediction_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_ApplePrediction_Response_apple_poses
{
public:
  Init_ApplePrediction_Response_apple_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::ApplePrediction_Response apple_poses(::harvest_interfaces::srv::ApplePrediction_Response::_apple_poses_type arg)
  {
    msg_.apple_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::ApplePrediction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::ApplePrediction_Response>()
{
  return harvest_interfaces::srv::builder::Init_ApplePrediction_Response_apple_poses();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__APPLE_PREDICTION__BUILDER_HPP_
