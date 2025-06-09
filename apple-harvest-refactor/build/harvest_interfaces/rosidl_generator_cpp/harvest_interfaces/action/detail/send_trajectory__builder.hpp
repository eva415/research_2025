// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:action/SendTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__ACTION__DETAIL__SEND_TRAJECTORY__BUILDER_HPP_
#define HARVEST_INTERFACES__ACTION__DETAIL__SEND_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/action/detail/send_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_SendTrajectory_Goal_waypoints
{
public:
  Init_SendTrajectory_Goal_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::action::SendTrajectory_Goal waypoints(::harvest_interfaces::action::SendTrajectory_Goal::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::SendTrajectory_Goal>()
{
  return harvest_interfaces::action::builder::Init_SendTrajectory_Goal_waypoints();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_SendTrajectory_Result_success
{
public:
  Init_SendTrajectory_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::action::SendTrajectory_Result success(::harvest_interfaces::action::SendTrajectory_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::SendTrajectory_Result>()
{
  return harvest_interfaces::action::builder::Init_SendTrajectory_Result_success();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_SendTrajectory_Feedback_progress
{
public:
  Init_SendTrajectory_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::action::SendTrajectory_Feedback progress(::harvest_interfaces::action::SendTrajectory_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::SendTrajectory_Feedback>()
{
  return harvest_interfaces::action::builder::Init_SendTrajectory_Feedback_progress();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_SendTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_SendTrajectory_SendGoal_Request_goal(::harvest_interfaces::action::SendTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::action::SendTrajectory_SendGoal_Request goal(::harvest_interfaces::action::SendTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_SendGoal_Request msg_;
};

class Init_SendTrajectory_SendGoal_Request_goal_id
{
public:
  Init_SendTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendTrajectory_SendGoal_Request_goal goal_id(::harvest_interfaces::action::SendTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SendTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::SendTrajectory_SendGoal_Request>()
{
  return harvest_interfaces::action::builder::Init_SendTrajectory_SendGoal_Request_goal_id();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_SendTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_SendTrajectory_SendGoal_Response_stamp(::harvest_interfaces::action::SendTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::action::SendTrajectory_SendGoal_Response stamp(::harvest_interfaces::action::SendTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_SendGoal_Response msg_;
};

class Init_SendTrajectory_SendGoal_Response_accepted
{
public:
  Init_SendTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendTrajectory_SendGoal_Response_stamp accepted(::harvest_interfaces::action::SendTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SendTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::SendTrajectory_SendGoal_Response>()
{
  return harvest_interfaces::action::builder::Init_SendTrajectory_SendGoal_Response_accepted();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_SendTrajectory_GetResult_Request_goal_id
{
public:
  Init_SendTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::action::SendTrajectory_GetResult_Request goal_id(::harvest_interfaces::action::SendTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::SendTrajectory_GetResult_Request>()
{
  return harvest_interfaces::action::builder::Init_SendTrajectory_GetResult_Request_goal_id();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_SendTrajectory_GetResult_Response_result
{
public:
  explicit Init_SendTrajectory_GetResult_Response_result(::harvest_interfaces::action::SendTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::action::SendTrajectory_GetResult_Response result(::harvest_interfaces::action::SendTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_GetResult_Response msg_;
};

class Init_SendTrajectory_GetResult_Response_status
{
public:
  Init_SendTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendTrajectory_GetResult_Response_result status(::harvest_interfaces::action::SendTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SendTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::SendTrajectory_GetResult_Response>()
{
  return harvest_interfaces::action::builder::Init_SendTrajectory_GetResult_Response_status();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace action
{

namespace builder
{

class Init_SendTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_SendTrajectory_FeedbackMessage_feedback(::harvest_interfaces::action::SendTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::action::SendTrajectory_FeedbackMessage feedback(::harvest_interfaces::action::SendTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_FeedbackMessage msg_;
};

class Init_SendTrajectory_FeedbackMessage_goal_id
{
public:
  Init_SendTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendTrajectory_FeedbackMessage_feedback goal_id(::harvest_interfaces::action::SendTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SendTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::harvest_interfaces::action::SendTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::action::SendTrajectory_FeedbackMessage>()
{
  return harvest_interfaces::action::builder::Init_SendTrajectory_FeedbackMessage_goal_id();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__ACTION__DETAIL__SEND_TRAJECTORY__BUILDER_HPP_
