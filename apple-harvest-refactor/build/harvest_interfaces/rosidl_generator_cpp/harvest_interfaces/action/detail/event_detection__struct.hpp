// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from harvest_interfaces:action/EventDetection.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__ACTION__DETAIL__EVENT_DETECTION__STRUCT_HPP_
#define HARVEST_INTERFACES__ACTION__DETAIL__EVENT_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__action__EventDetection_Goal __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__action__EventDetection_Goal __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EventDetection_Goal_
{
  using Type = EventDetection_Goal_<ContainerAllocator>;

  explicit EventDetection_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->failure_ratio = 0.0f;
    }
  }

  explicit EventDetection_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->failure_ratio = 0.0f;
    }
  }

  // field types and members
  using _failure_ratio_type =
    float;
  _failure_ratio_type failure_ratio;

  // setters for named parameter idiom
  Type & set__failure_ratio(
    const float & _arg)
  {
    this->failure_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_Goal
    std::shared_ptr<harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_Goal
    std::shared_ptr<harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventDetection_Goal_ & other) const
  {
    if (this->failure_ratio != other.failure_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventDetection_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventDetection_Goal_

// alias to use template instance with default allocator
using EventDetection_Goal =
  harvest_interfaces::action::EventDetection_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace harvest_interfaces


#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__action__EventDetection_Result __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__action__EventDetection_Result __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EventDetection_Result_
{
  using Type = EventDetection_Result_<ContainerAllocator>;

  explicit EventDetection_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finished = false;
    }
  }

  explicit EventDetection_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finished = false;
    }
  }

  // field types and members
  using _finished_type =
    bool;
  _finished_type finished;

  // setters for named parameter idiom
  Type & set__finished(
    const bool & _arg)
  {
    this->finished = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::action::EventDetection_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::action::EventDetection_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_Result
    std::shared_ptr<harvest_interfaces::action::EventDetection_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_Result
    std::shared_ptr<harvest_interfaces::action::EventDetection_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventDetection_Result_ & other) const
  {
    if (this->finished != other.finished) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventDetection_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventDetection_Result_

// alias to use template instance with default allocator
using EventDetection_Result =
  harvest_interfaces::action::EventDetection_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace harvest_interfaces


#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__action__EventDetection_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__action__EventDetection_Feedback __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EventDetection_Feedback_
{
  using Type = EventDetection_Feedback_<ContainerAllocator>;

  explicit EventDetection_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->listening = false;
    }
  }

  explicit EventDetection_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->listening = false;
    }
  }

  // field types and members
  using _listening_type =
    bool;
  _listening_type listening;

  // setters for named parameter idiom
  Type & set__listening(
    const bool & _arg)
  {
    this->listening = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_Feedback
    std::shared_ptr<harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_Feedback
    std::shared_ptr<harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventDetection_Feedback_ & other) const
  {
    if (this->listening != other.listening) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventDetection_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventDetection_Feedback_

// alias to use template instance with default allocator
using EventDetection_Feedback =
  harvest_interfaces::action::EventDetection_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace harvest_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "harvest_interfaces/action/detail/event_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__action__EventDetection_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__action__EventDetection_SendGoal_Request __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EventDetection_SendGoal_Request_
{
  using Type = EventDetection_SendGoal_Request_<ContainerAllocator>;

  explicit EventDetection_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit EventDetection_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const harvest_interfaces::action::EventDetection_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_SendGoal_Request
    std::shared_ptr<harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_SendGoal_Request
    std::shared_ptr<harvest_interfaces::action::EventDetection_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventDetection_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventDetection_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventDetection_SendGoal_Request_

// alias to use template instance with default allocator
using EventDetection_SendGoal_Request =
  harvest_interfaces::action::EventDetection_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace harvest_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__action__EventDetection_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__action__EventDetection_SendGoal_Response __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EventDetection_SendGoal_Response_
{
  using Type = EventDetection_SendGoal_Response_<ContainerAllocator>;

  explicit EventDetection_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit EventDetection_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_SendGoal_Response
    std::shared_ptr<harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_SendGoal_Response
    std::shared_ptr<harvest_interfaces::action::EventDetection_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventDetection_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventDetection_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventDetection_SendGoal_Response_

// alias to use template instance with default allocator
using EventDetection_SendGoal_Response =
  harvest_interfaces::action::EventDetection_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace harvest_interfaces

namespace harvest_interfaces
{

namespace action
{

struct EventDetection_SendGoal
{
  using Request = harvest_interfaces::action::EventDetection_SendGoal_Request;
  using Response = harvest_interfaces::action::EventDetection_SendGoal_Response;
};

}  // namespace action

}  // namespace harvest_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__action__EventDetection_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__action__EventDetection_GetResult_Request __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EventDetection_GetResult_Request_
{
  using Type = EventDetection_GetResult_Request_<ContainerAllocator>;

  explicit EventDetection_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit EventDetection_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_GetResult_Request
    std::shared_ptr<harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_GetResult_Request
    std::shared_ptr<harvest_interfaces::action::EventDetection_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventDetection_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventDetection_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventDetection_GetResult_Request_

// alias to use template instance with default allocator
using EventDetection_GetResult_Request =
  harvest_interfaces::action::EventDetection_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace harvest_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "harvest_interfaces/action/detail/event_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__action__EventDetection_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__action__EventDetection_GetResult_Response __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EventDetection_GetResult_Response_
{
  using Type = EventDetection_GetResult_Response_<ContainerAllocator>;

  explicit EventDetection_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit EventDetection_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    harvest_interfaces::action::EventDetection_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const harvest_interfaces::action::EventDetection_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_GetResult_Response
    std::shared_ptr<harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_GetResult_Response
    std::shared_ptr<harvest_interfaces::action::EventDetection_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventDetection_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventDetection_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventDetection_GetResult_Response_

// alias to use template instance with default allocator
using EventDetection_GetResult_Response =
  harvest_interfaces::action::EventDetection_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace harvest_interfaces

namespace harvest_interfaces
{

namespace action
{

struct EventDetection_GetResult
{
  using Request = harvest_interfaces::action::EventDetection_GetResult_Request;
  using Response = harvest_interfaces::action::EventDetection_GetResult_Response;
};

}  // namespace action

}  // namespace harvest_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "harvest_interfaces/action/detail/event_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__action__EventDetection_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__action__EventDetection_FeedbackMessage __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct EventDetection_FeedbackMessage_
{
  using Type = EventDetection_FeedbackMessage_<ContainerAllocator>;

  explicit EventDetection_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit EventDetection_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const harvest_interfaces::action::EventDetection_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_FeedbackMessage
    std::shared_ptr<harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__action__EventDetection_FeedbackMessage
    std::shared_ptr<harvest_interfaces::action::EventDetection_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventDetection_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventDetection_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventDetection_FeedbackMessage_

// alias to use template instance with default allocator
using EventDetection_FeedbackMessage =
  harvest_interfaces::action::EventDetection_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace harvest_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace harvest_interfaces
{

namespace action
{

struct EventDetection
{
  /// The goal message defined in the action definition.
  using Goal = harvest_interfaces::action::EventDetection_Goal;
  /// The result message defined in the action definition.
  using Result = harvest_interfaces::action::EventDetection_Result;
  /// The feedback message defined in the action definition.
  using Feedback = harvest_interfaces::action::EventDetection_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = harvest_interfaces::action::EventDetection_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = harvest_interfaces::action::EventDetection_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = harvest_interfaces::action::EventDetection_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct EventDetection EventDetection;

}  // namespace action

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__ACTION__DETAIL__EVENT_DETECTION__STRUCT_HPP_
