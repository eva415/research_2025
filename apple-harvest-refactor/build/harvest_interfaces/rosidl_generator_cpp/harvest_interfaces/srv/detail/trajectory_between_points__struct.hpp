// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from harvest_interfaces:srv/TrajectoryBetweenPoints.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__TRAJECTORY_BETWEEN_POINTS__STRUCT_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__TRAJECTORY_BETWEEN_POINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_coordinate'
// Member 'end_coordinate'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__TrajectoryBetweenPoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__TrajectoryBetweenPoints_Request __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryBetweenPoints_Request_
{
  using Type = TrajectoryBetweenPoints_Request_<ContainerAllocator>;

  explicit TrajectoryBetweenPoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_coordinate(_init),
    end_coordinate(_init)
  {
    (void)_init;
  }

  explicit TrajectoryBetweenPoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_coordinate(_alloc, _init),
    end_coordinate(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_coordinate_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _start_coordinate_type start_coordinate;
  using _end_coordinate_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _end_coordinate_type end_coordinate;

  // setters for named parameter idiom
  Type & set__start_coordinate(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->start_coordinate = _arg;
    return *this;
  }
  Type & set__end_coordinate(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->end_coordinate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__TrajectoryBetweenPoints_Request
    std::shared_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__TrajectoryBetweenPoints_Request
    std::shared_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryBetweenPoints_Request_ & other) const
  {
    if (this->start_coordinate != other.start_coordinate) {
      return false;
    }
    if (this->end_coordinate != other.end_coordinate) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryBetweenPoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryBetweenPoints_Request_

// alias to use template instance with default allocator
using TrajectoryBetweenPoints_Request =
  harvest_interfaces::srv::TrajectoryBetweenPoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces


#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__TrajectoryBetweenPoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__TrajectoryBetweenPoints_Response __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajectoryBetweenPoints_Response_
{
  using Type = TrajectoryBetweenPoints_Response_<ContainerAllocator>;

  explicit TrajectoryBetweenPoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit TrajectoryBetweenPoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__TrajectoryBetweenPoints_Response
    std::shared_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__TrajectoryBetweenPoints_Response
    std::shared_ptr<harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryBetweenPoints_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryBetweenPoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryBetweenPoints_Response_

// alias to use template instance with default allocator
using TrajectoryBetweenPoints_Response =
  harvest_interfaces::srv::TrajectoryBetweenPoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces

namespace harvest_interfaces
{

namespace srv
{

struct TrajectoryBetweenPoints
{
  using Request = harvest_interfaces::srv::TrajectoryBetweenPoints_Request;
  using Response = harvest_interfaces::srv::TrajectoryBetweenPoints_Response;
};

}  // namespace srv

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__TRAJECTORY_BETWEEN_POINTS__STRUCT_HPP_
