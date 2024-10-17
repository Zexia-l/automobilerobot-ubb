// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from astra_camera_msgs:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
#define ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__STRUCT_H_

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
// Member 'name'
// Member 'serial_number'
// Member 'firmware_version'
// Member 'supported_min_sdk_version'
// Member 'hardware_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DeviceInfo in the package astra_camera_msgs.
typedef struct astra_camera_msgs__msg__DeviceInfo
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String name;
  int32_t vid;
  int32_t pid;
  rosidl_runtime_c__String serial_number;
  rosidl_runtime_c__String firmware_version;
  rosidl_runtime_c__String supported_min_sdk_version;
  rosidl_runtime_c__String hardware_version;
} astra_camera_msgs__msg__DeviceInfo;

// Struct for a sequence of astra_camera_msgs__msg__DeviceInfo.
typedef struct astra_camera_msgs__msg__DeviceInfo__Sequence
{
  astra_camera_msgs__msg__DeviceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} astra_camera_msgs__msg__DeviceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASTRA_CAMERA_MSGS__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
