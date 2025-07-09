// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from harvest_interfaces:srv/ApplePrediction.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__APPLE_PREDICTION__STRUCT_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__APPLE_PREDICTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__ApplePrediction_Request __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__ApplePrediction_Request __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplePrediction_Request_
{
  using Type = ApplePrediction_Request_<ContainerAllocator>;

  explicit ApplePrediction_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ApplePrediction_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__ApplePrediction_Request
    std::shared_ptr<harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__ApplePrediction_Request
    std::shared_ptr<harvest_interfaces::srv::ApplePrediction_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplePrediction_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplePrediction_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplePrediction_Request_

// alias to use template instance with default allocator
using ApplePrediction_Request =
  harvest_interfaces::srv::ApplePrediction_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces


// Include directives for member types
// Member 'apple_poses'
#include "geometry_msgs/msg/detail/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__ApplePrediction_Response __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__ApplePrediction_Response __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplePrediction_Response_
{
  using Type = ApplePrediction_Response_<ContainerAllocator>;

  explicit ApplePrediction_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : apple_poses(_init)
  {
    (void)_init;
  }

  explicit ApplePrediction_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : apple_poses(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _apple_poses_type =
    geometry_msgs::msg::PoseArray_<ContainerAllocator>;
  _apple_poses_type apple_poses;

  // setters for named parameter idiom
  Type & set__apple_poses(
    const geometry_msgs::msg::PoseArray_<ContainerAllocator> & _arg)
  {
    this->apple_poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__ApplePrediction_Response
    std::shared_ptr<harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__ApplePrediction_Response
    std::shared_ptr<harvest_interfaces::srv::ApplePrediction_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplePrediction_Response_ & other) const
  {
    if (this->apple_poses != other.apple_poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplePrediction_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplePrediction_Response_

// alias to use template instance with default allocator
using ApplePrediction_Response =
  harvest_interfaces::srv::ApplePrediction_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces

namespace harvest_interfaces
{

namespace srv
{

struct ApplePrediction
{
  using Request = harvest_interfaces::srv::ApplePrediction_Request;
  using Response = harvest_interfaces::srv::ApplePrediction_Response;
};

}  // namespace srv

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__APPLE_PREDICTION__STRUCT_HPP_
