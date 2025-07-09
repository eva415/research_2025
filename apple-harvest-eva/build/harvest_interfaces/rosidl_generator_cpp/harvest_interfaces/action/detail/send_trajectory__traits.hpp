// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from harvest_interfaces:action/SendTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__ACTION__DETAIL__SEND_TRAJECTORY__TRAITS_HPP_
#define HARVEST_INTERFACES__ACTION__DETAIL__SEND_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "harvest_interfaces/action/detail/send_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "std_msgs/msg/detail/float32_multi_array__traits.hpp"

namespace harvest_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SendTrajectory_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    out << "waypoints: ";
    to_flow_style_yaml(msg.waypoints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTrajectory_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints:\n";
    to_block_style_yaml(msg.waypoints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTrajectory_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::action::SendTrajectory_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::action::SendTrajectory_Goal & msg)
{
  return harvest_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_Goal>()
{
  return "harvest_interfaces::action::SendTrajectory_Goal";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_Goal>()
{
  return "harvest_interfaces/action/SendTrajectory_Goal";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_Goal>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_Goal>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32MultiArray>::value> {};

template<>
struct is_message<harvest_interfaces::action::SendTrajectory_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace harvest_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SendTrajectory_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTrajectory_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTrajectory_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::action::SendTrajectory_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::action::SendTrajectory_Result & msg)
{
  return harvest_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_Result>()
{
  return "harvest_interfaces::action::SendTrajectory_Result";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_Result>()
{
  return "harvest_interfaces/action/SendTrajectory_Result";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<harvest_interfaces::action::SendTrajectory_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace harvest_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SendTrajectory_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTrajectory_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTrajectory_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::action::SendTrajectory_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::action::SendTrajectory_Feedback & msg)
{
  return harvest_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_Feedback>()
{
  return "harvest_interfaces::action::SendTrajectory_Feedback";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_Feedback>()
{
  return "harvest_interfaces/action/SendTrajectory_Feedback";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<harvest_interfaces::action::SendTrajectory_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "harvest_interfaces/action/detail/send_trajectory__traits.hpp"

namespace harvest_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SendTrajectory_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTrajectory_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTrajectory_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::action::SendTrajectory_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::action::SendTrajectory_SendGoal_Request & msg)
{
  return harvest_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_SendGoal_Request>()
{
  return "harvest_interfaces::action::SendTrajectory_SendGoal_Request";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_SendGoal_Request>()
{
  return "harvest_interfaces/action/SendTrajectory_SendGoal_Request";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<harvest_interfaces::action::SendTrajectory_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<harvest_interfaces::action::SendTrajectory_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<harvest_interfaces::action::SendTrajectory_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace harvest_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SendTrajectory_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTrajectory_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTrajectory_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::action::SendTrajectory_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::action::SendTrajectory_SendGoal_Response & msg)
{
  return harvest_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_SendGoal_Response>()
{
  return "harvest_interfaces::action::SendTrajectory_SendGoal_Response";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_SendGoal_Response>()
{
  return "harvest_interfaces/action/SendTrajectory_SendGoal_Response";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<harvest_interfaces::action::SendTrajectory_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_SendGoal>()
{
  return "harvest_interfaces::action::SendTrajectory_SendGoal";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_SendGoal>()
{
  return "harvest_interfaces/action/SendTrajectory_SendGoal";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<harvest_interfaces::action::SendTrajectory_SendGoal_Request>::value &&
    has_fixed_size<harvest_interfaces::action::SendTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<harvest_interfaces::action::SendTrajectory_SendGoal_Request>::value &&
    has_bounded_size<harvest_interfaces::action::SendTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<harvest_interfaces::action::SendTrajectory_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<harvest_interfaces::action::SendTrajectory_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<harvest_interfaces::action::SendTrajectory_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace harvest_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SendTrajectory_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTrajectory_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTrajectory_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::action::SendTrajectory_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::action::SendTrajectory_GetResult_Request & msg)
{
  return harvest_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_GetResult_Request>()
{
  return "harvest_interfaces::action::SendTrajectory_GetResult_Request";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_GetResult_Request>()
{
  return "harvest_interfaces/action/SendTrajectory_GetResult_Request";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<harvest_interfaces::action::SendTrajectory_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__traits.hpp"

namespace harvest_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SendTrajectory_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTrajectory_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTrajectory_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::action::SendTrajectory_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::action::SendTrajectory_GetResult_Response & msg)
{
  return harvest_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_GetResult_Response>()
{
  return "harvest_interfaces::action::SendTrajectory_GetResult_Response";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_GetResult_Response>()
{
  return "harvest_interfaces/action/SendTrajectory_GetResult_Response";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<harvest_interfaces::action::SendTrajectory_Result>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<harvest_interfaces::action::SendTrajectory_Result>::value> {};

template<>
struct is_message<harvest_interfaces::action::SendTrajectory_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_GetResult>()
{
  return "harvest_interfaces::action::SendTrajectory_GetResult";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_GetResult>()
{
  return "harvest_interfaces/action/SendTrajectory_GetResult";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<harvest_interfaces::action::SendTrajectory_GetResult_Request>::value &&
    has_fixed_size<harvest_interfaces::action::SendTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<harvest_interfaces::action::SendTrajectory_GetResult_Request>::value &&
    has_bounded_size<harvest_interfaces::action::SendTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct is_service<harvest_interfaces::action::SendTrajectory_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<harvest_interfaces::action::SendTrajectory_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<harvest_interfaces::action::SendTrajectory_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "harvest_interfaces/action/detail/send_trajectory__traits.hpp"

namespace harvest_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SendTrajectory_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendTrajectory_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendTrajectory_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace harvest_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use harvest_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const harvest_interfaces::action::SendTrajectory_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  harvest_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use harvest_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const harvest_interfaces::action::SendTrajectory_FeedbackMessage & msg)
{
  return harvest_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<harvest_interfaces::action::SendTrajectory_FeedbackMessage>()
{
  return "harvest_interfaces::action::SendTrajectory_FeedbackMessage";
}

template<>
inline const char * name<harvest_interfaces::action::SendTrajectory_FeedbackMessage>()
{
  return "harvest_interfaces/action/SendTrajectory_FeedbackMessage";
}

template<>
struct has_fixed_size<harvest_interfaces::action::SendTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<harvest_interfaces::action::SendTrajectory_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<harvest_interfaces::action::SendTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<harvest_interfaces::action::SendTrajectory_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<harvest_interfaces::action::SendTrajectory_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<harvest_interfaces::action::SendTrajectory>
  : std::true_type
{
};

template<>
struct is_action_goal<harvest_interfaces::action::SendTrajectory_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<harvest_interfaces::action::SendTrajectory_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<harvest_interfaces::action::SendTrajectory_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HARVEST_INTERFACES__ACTION__DETAIL__SEND_TRAJECTORY__TRAITS_HPP_
