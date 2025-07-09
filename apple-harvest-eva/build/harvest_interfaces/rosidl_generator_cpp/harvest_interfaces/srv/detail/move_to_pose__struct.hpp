// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from harvest_interfaces:srv/MoveToPose.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__MoveToPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__MoveToPose_Request __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToPose_Request_
{
  using Type = MoveToPose_Request_<ContainerAllocator>;

  explicit MoveToPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init)
  {
    (void)_init;
  }

  explicit MoveToPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    orientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__MoveToPose_Request
    std::shared_ptr<harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__MoveToPose_Request
    std::shared_ptr<harvest_interfaces::srv::MoveToPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToPose_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToPose_Request_

// alias to use template instance with default allocator
using MoveToPose_Request =
  harvest_interfaces::srv::MoveToPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces


// Include directives for member types
// Member 'reverse_traj'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__MoveToPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__MoveToPose_Response __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToPose_Response_
{
  using Type = MoveToPose_Response_<ContainerAllocator>;

  explicit MoveToPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reverse_traj(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit MoveToPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reverse_traj(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;
  using _reverse_traj_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _reverse_traj_type reverse_traj;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__reverse_traj(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->reverse_traj = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__MoveToPose_Response
    std::shared_ptr<harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__MoveToPose_Response
    std::shared_ptr<harvest_interfaces::srv::MoveToPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToPose_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->reverse_traj != other.reverse_traj) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToPose_Response_

// alias to use template instance with default allocator
using MoveToPose_Response =
  harvest_interfaces::srv::MoveToPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces

namespace harvest_interfaces
{

namespace srv
{

struct MoveToPose
{
  using Request = harvest_interfaces::srv::MoveToPose_Request;
  using Response = harvest_interfaces::srv::MoveToPose_Response;
};

}  // namespace srv

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__MOVE_TO_POSE__STRUCT_HPP_
