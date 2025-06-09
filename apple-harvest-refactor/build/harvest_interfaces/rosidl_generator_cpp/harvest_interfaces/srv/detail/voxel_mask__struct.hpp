// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from harvest_interfaces:srv/VoxelMask.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__VOXEL_MASK__STRUCT_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__VOXEL_MASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__VoxelMask_Request __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__VoxelMask_Request __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VoxelMask_Request_
{
  using Type = VoxelMask_Request_<ContainerAllocator>;

  explicit VoxelMask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tree_pos = 0ll;
    }
  }

  explicit VoxelMask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tree_pos = 0ll;
    }
  }

  // field types and members
  using _tree_pos_type =
    int64_t;
  _tree_pos_type tree_pos;

  // setters for named parameter idiom
  Type & set__tree_pos(
    const int64_t & _arg)
  {
    this->tree_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__VoxelMask_Request
    std::shared_ptr<harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__VoxelMask_Request
    std::shared_ptr<harvest_interfaces::srv::VoxelMask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoxelMask_Request_ & other) const
  {
    if (this->tree_pos != other.tree_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoxelMask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoxelMask_Request_

// alias to use template instance with default allocator
using VoxelMask_Request =
  harvest_interfaces::srv::VoxelMask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces


#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__VoxelMask_Response __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__VoxelMask_Response __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VoxelMask_Response_
{
  using Type = VoxelMask_Response_<ContainerAllocator>;

  explicit VoxelMask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit VoxelMask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__VoxelMask_Response
    std::shared_ptr<harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__VoxelMask_Response
    std::shared_ptr<harvest_interfaces::srv::VoxelMask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoxelMask_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoxelMask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoxelMask_Response_

// alias to use template instance with default allocator
using VoxelMask_Response =
  harvest_interfaces::srv::VoxelMask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces

namespace harvest_interfaces
{

namespace srv
{

struct VoxelMask
{
  using Request = harvest_interfaces::srv::VoxelMask_Request;
  using Response = harvest_interfaces::srv::VoxelMask_Response;
};

}  // namespace srv

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__VOXEL_MASK__STRUCT_HPP_
