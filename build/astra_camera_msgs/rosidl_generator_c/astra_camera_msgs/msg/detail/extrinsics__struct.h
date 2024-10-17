// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from astra_camera_msgs:msg/Extrinsics.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DETAIL__EXTRINSICS__STRUCT_H_
#define ASTRA_CAMERA_MSGS__MSG__DETAIL__EXTRINSICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Extrinsics in the package astra_camera_msgs.
typedef struct astra_camera_msgs__msg__Extrinsics
{
  std_msgs__msg__Header header;
  double rotation[9];
  double translation[3];
} astra_camera_msgs__msg__Extrinsics;

// Struct for a sequence of astra_camera_msgs__msg__Extrinsics.
typedef struct astra_camera_msgs__msg__Extrinsics__Sequence
{
  astra_camera_msgs__msg__Extrinsics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} astra_camera_msgs__msg__Extrinsics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASTRA_CAMERA_MSGS__MSG__DETAIL__EXTRINSICS__STRUCT_H_
