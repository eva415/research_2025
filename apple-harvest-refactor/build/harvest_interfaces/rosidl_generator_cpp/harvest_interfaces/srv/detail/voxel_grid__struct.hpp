// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from harvest_interfaces:srv/VoxelGrid.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__STRUCT_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__VoxelGrid_Request __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__VoxelGrid_Request __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VoxelGrid_Request_
{
  using Type = VoxelGrid_Request_<ContainerAllocator>;

  explicit VoxelGrid_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voxel_size = 0.0f;
    }
  }

  explicit VoxelGrid_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voxel_size = 0.0f;
    }
  }

  // field types and members
  using _voxel_size_type =
    float;
  _voxel_size_type voxel_size;

  // setters for named parameter idiom
  Type & set__voxel_size(
    const float & _arg)
  {
    this->voxel_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__VoxelGrid_Request
    std::shared_ptr<harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__VoxelGrid_Request
    std::shared_ptr<harvest_interfaces::srv::VoxelGrid_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoxelGrid_Request_ & other) const
  {
    if (this->voxel_size != other.voxel_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoxelGrid_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoxelGrid_Request_

// alias to use template instance with default allocator
using VoxelGrid_Request =
  harvest_interfaces::srv::VoxelGrid_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces


// Include directives for member types
// Member 'voxel_centers'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'voxel_colors'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__harvest_interfaces__srv__VoxelGrid_Response __attribute__((deprecated))
#else
# define DEPRECATED__harvest_interfaces__srv__VoxelGrid_Response __declspec(deprecated)
#endif

namespace harvest_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VoxelGrid_Response_
{
  using Type = VoxelGrid_Response_<ContainerAllocator>;

  explicit VoxelGrid_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit VoxelGrid_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _voxel_centers_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _voxel_centers_type voxel_centers;
  using _voxel_colors_type =
    std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>>;
  _voxel_colors_type voxel_colors;

  // setters for named parameter idiom
  Type & set__voxel_centers(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->voxel_centers = _arg;
    return *this;
  }
  Type & set__voxel_colors(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>> & _arg)
  {
    this->voxel_colors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__harvest_interfaces__srv__VoxelGrid_Response
    std::shared_ptr<harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__harvest_interfaces__srv__VoxelGrid_Response
    std::shared_ptr<harvest_interfaces::srv::VoxelGrid_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoxelGrid_Response_ & other) const
  {
    if (this->voxel_centers != other.voxel_centers) {
      return false;
    }
    if (this->voxel_colors != other.voxel_colors) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoxelGrid_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoxelGrid_Response_

// alias to use template instance with default allocator
using VoxelGrid_Response =
  harvest_interfaces::srv::VoxelGrid_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace harvest_interfaces

namespace harvest_interfaces
{

namespace srv
{

struct VoxelGrid
{
  using Request = harvest_interfaces::srv::VoxelGrid_Request;
  using Response = harvest_interfaces::srv::VoxelGrid_Response;
};

}  // namespace srv

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__STRUCT_HPP_
