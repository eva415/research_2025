// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:action/EventDetection.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__ACTION__DETAIL__EVENT_DETECTION__BUILDER_HPP_
#define HARVEST_INTERFACES__ACTION__DETAIL__EVENT_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/action/detail/event_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_EventDetection_Goal_failure_ratio
{
public:
  Init_EventDetection_Goal_failure_ratio()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::action::EventDetection_Goal failure_ratio(::harvest_interfaces::action::EventDetection_Goal::_failure_ratio_type arg)
  {
    msg_.failure_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::EventDetection_Goal>()
{
  return harvest_interfaces::action::builder::Init_EventDetection_Goal_failure_ratio();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_EventDetection_Result_finished
{
public:
  Init_EventDetection_Result_finished()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::action::EventDetection_Result finished(::harvest_interfaces::action::EventDetection_Result::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::EventDetection_Result>()
{
  return harvest_interfaces::action::builder::Init_EventDetection_Result_finished();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_EventDetection_Feedback_listening
{
public:
  Init_EventDetection_Feedback_listening()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::action::EventDetection_Feedback listening(::harvest_interfaces::action::EventDetection_Feedback::_listening_type arg)
  {
    msg_.listening = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::EventDetection_Feedback>()
{
  return harvest_interfaces::action::builder::Init_EventDetection_Feedback_listening();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_EventDetection_SendGoal_Request_goal
{
public:
  explicit Init_EventDetection_SendGoal_Request_goal(::harvest_interfaces::action::EventDetection_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::action::EventDetection_SendGoal_Request goal(::harvest_interfaces::action::EventDetection_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_SendGoal_Request msg_;
};

class Init_EventDetection_SendGoal_Request_goal_id
{
public:
  Init_EventDetection_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventDetection_SendGoal_Request_goal goal_id(::harvest_interfaces::action::EventDetection_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_EventDetection_SendGoal_Request_goal(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::EventDetection_SendGoal_Request>()
{
  return harvest_interfaces::action::builder::Init_EventDetection_SendGoal_Request_goal_id();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_EventDetection_SendGoal_Response_stamp
{
public:
  explicit Init_EventDetection_SendGoal_Response_stamp(::harvest_interfaces::action::EventDetection_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::action::EventDetection_SendGoal_Response stamp(::harvest_interfaces::action::EventDetection_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_SendGoal_Response msg_;
};

class Init_EventDetection_SendGoal_Response_accepted
{
public:
  Init_EventDetection_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventDetection_SendGoal_Response_stamp accepted(::harvest_interfaces::action::EventDetection_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_EventDetection_SendGoal_Response_stamp(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::EventDetection_SendGoal_Response>()
{
  return harvest_interfaces::action::builder::Init_EventDetection_SendGoal_Response_accepted();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_EventDetection_GetResult_Request_goal_id
{
public:
  Init_EventDetection_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::action::EventDetection_GetResult_Request goal_id(::harvest_interfaces::action::EventDetection_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::EventDetection_GetResult_Request>()
{
  return harvest_interfaces::action::builder::Init_EventDetection_GetResult_Request_goal_id();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_EventDetection_GetResult_Response_result
{
public:
  explicit Init_EventDetection_GetResult_Response_result(::harvest_interfaces::action::EventDetection_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::action::EventDetection_GetResult_Response result(::harvest_interfaces::action::EventDetection_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_GetResult_Response msg_;
};

class Init_EventDetection_GetResult_Response_status
{
public:
  Init_EventDetection_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventDetection_GetResult_Response_result status(::harvest_interfaces::action::EventDetection_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_EventDetection_GetResult_Response_result(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::EventDetection_GetResult_Response>()
{
  return harvest_interfaces::action::builder::Init_EventDetection_GetResult_Response_status();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_EventDetection_FeedbackMessage_feedback
{
public:
  explicit Init_EventDetection_FeedbackMessage_feedback(::harvest_interfaces::action::EventDetection_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::action::EventDetection_FeedbackMessage feedback(::harvest_interfaces::action::EventDetection_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_FeedbackMessage msg_;
};

class Init_EventDetection_FeedbackMessage_goal_id
{
public:
  Init_EventDetection_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventDetection_FeedbackMessage_feedback goal_id(::harvest_interfaces::action::EventDetection_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_EventDetection_FeedbackMessage_feedback(msg_);
  }

private:
  ::harvest_interfaces::action::EventDetection_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::EventDetection_FeedbackMessage>()
{
  return harvest_interfaces::action::builder::Init_EventDetection_FeedbackMessage_goal_id();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__ACTION__DETAIL__EVENT_DETECTION__BUILDER_HPP_
