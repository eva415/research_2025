// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/GetGripperPose.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__GET_GRIPPER_POSE__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__GET_GRIPPER_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/get_gripper_pose__struct.hpp"
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
auto build<::harvest_interfaces::srv::GetGripperPose_Request>()
{
  return ::harvest_interfaces::srv::GetGripperPose_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGripperPose_Response_point
{
public:
  Init_GetGripperPose_Response_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::GetGripperPose_Response point(::harvest_interfaces::srv::GetGripperPose_Response::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::GetGripperPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::GetGripperPose_Response>()
{
  return harvest_interfaces::srv::builder::Init_GetGripperPose_Response_point();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__GET_GRIPPER_POSE__BUILDER_HPP_
