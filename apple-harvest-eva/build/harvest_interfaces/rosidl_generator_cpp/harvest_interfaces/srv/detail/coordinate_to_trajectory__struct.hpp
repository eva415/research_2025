// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from harvest_interfaces:srv/CoordinateToTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__COORDINATE_TO_TRAJECTORY__STRUCT_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__COORDINATE_TO_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coordinate'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__CoordinateToTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__CoordinateToTrajectory_Request __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CoordinateToTrajectory_Request_
{
  using Type = CoordinateToTrajectory_Request_<ContainerAllocator>;

  explicit CoordinateToTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinate(_init)
  {
    (void)_init;
  }

  explicit CoordinateToTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinate(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _coordinate_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _coordinate_type coordinate;

  // setters for named parameter idiom
  Type & set__coordinate(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->coordinate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__CoordinateToTrajectory_Request
    std::shared_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__CoordinateToTrajectory_Request
    std::shared_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinateToTrajectory_Request_ & other) const
  {
    if (this->coordinate != other.coordinate) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinateToTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinateToTrajectory_Request_

// alias to use template instance with default allocator
using CoordinateToTrajectory_Request =
  harvest_interfaces::srv::CoordinateToTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces


// Include directives for member types
// Member 'waypoints'
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__CoordinateToTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__CoordinateToTrajectory_Response __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CoordinateToTrajectory_Response_
{
  using Type = CoordinateToTrajectory_Response_<ContainerAllocator>;

  explicit CoordinateToTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit CoordinateToTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _waypoints_type =
    std_msgs::msg::Float32MultiArray_<ContainerAllocator>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std_msgs::msg::Float32MultiArray_<ContainerAllocator> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__CoordinateToTrajectory_Response
    std::shared_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__CoordinateToTrajectory_Response
    std::shared_ptr<harvest_interfaces::srv::CoordinateToTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinateToTrajectory_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinateToTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinateToTrajectory_Response_

// alias to use template instance with default allocator
using CoordinateToTrajectory_Response =
  harvest_interfaces::srv::CoordinateToTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces

namespace harvest_interfaces
{

namespace srv
{

struct CoordinateToTrajectory
{
  using Request = harvest_interfaces::srv::CoordinateToTrajectory_Request;
  using Response = harvest_interfaces::srv::CoordinateToTrajectory_Response;
};

}  // namespace srv

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__COORDINATE_TO_TRAJECTORY__STRUCT_HPP_
