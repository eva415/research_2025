// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/VoxelGrid.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/VoxelGrid in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__VoxelGrid_Request
{
  float voxel_size;
} harvest_interfaces__srv__VoxelGrid_Request;

// Struct for a sequence of harvest_interfaces__srv__VoxelGrid_Request.
typedef struct harvest_interfaces__srv__VoxelGrid_Request__Sequence
{
  harvest_interfaces__srv__VoxelGrid_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__VoxelGrid_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'voxel_centers'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'voxel_colors'
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in srv/VoxelGrid in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__VoxelGrid_Response
{
  geometry_msgs__msg__Point__Sequence voxel_centers;
  std_msgs__msg__ColorRGBA__Sequence voxel_colors;
} harvest_interfaces__srv__VoxelGrid_Response;

// Struct for a sequence of harvest_interfaces__srv__VoxelGrid_Response.
typedef struct harvest_interfaces__srv__VoxelGrid_Response__Sequence
{
  harvest_interfaces__srv__VoxelGrid_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__VoxelGrid_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__VOXEL_GRID__STRUCT_H_
