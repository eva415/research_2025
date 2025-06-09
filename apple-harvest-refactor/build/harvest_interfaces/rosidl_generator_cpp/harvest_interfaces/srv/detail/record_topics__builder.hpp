// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/RecordTopics.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__RECORD_TOPICS__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__RECORD_TOPICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/record_topics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_RecordTopics_Request_file_name_prefix
{
public:
  explicit Init_RecordTopics_Request_file_name_prefix(::harvest_interfaces::srv::RecordTopics_Request & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::srv::RecordTopics_Request file_name_prefix(::harvest_interfaces::srv::RecordTopics_Request::_file_name_prefix_type arg)
  {
    msg_.file_name_prefix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::RecordTopics_Request msg_;
};

class Init_RecordTopics_Request_topics
{
public:
  Init_RecordTopics_Request_topics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTopics_Request_file_name_prefix topics(::harvest_interfaces::srv::RecordTopics_Request::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return Init_RecordTopics_Request_file_name_prefix(msg_);
  }

private:
  ::harvest_interfaces::srv::RecordTopics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::RecordTopics_Request>()
{
  return harvest_interfaces::srv::builder::Init_RecordTopics_Request_topics();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_RecordTopics_Response_success
{
public:
  Init_RecordTopics_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::RecordTopics_Response success(::harvest_interfaces::srv::RecordTopics_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::RecordTopics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::RecordTopics_Response>()
{
  return harvest_interfaces::srv::builder::Init_RecordTopics_Response_success();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__RECORD_TOPICS__BUILDER_HPP_
