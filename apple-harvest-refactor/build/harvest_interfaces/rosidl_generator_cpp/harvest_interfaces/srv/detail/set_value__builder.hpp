// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/SetValue.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__SET_VALUE__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__SET_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/set_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetValue_Request_val
{
public:
  Init_SetValue_Request_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::SetValue_Request val(::harvest_interfaces::srv::SetValue_Request::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::SetValue_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::SetValue_Request>()
{
  return harvest_interfaces::srv::builder::Init_SetValue_Request_val();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetValue_Response_success
{
public:
  Init_SetValue_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::SetValue_Response success(::harvest_interfaces::srv::SetValue_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::SetValue_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::SetValue_Response>()
{
  return harvest_interfaces::srv::builder::Init_SetValue_Response_success();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__SET_VALUE__BUILDER_HPP_
