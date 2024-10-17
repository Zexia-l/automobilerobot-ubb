// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from astra_camera_msgs:srv/SetInt32.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__SET_INT32__STRUCT_H_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__SET_INT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetInt32 in the package astra_camera_msgs.
typedef struct astra_camera_msgs__srv__SetInt32_Request
{
  int32_t data;
} astra_camera_msgs__srv__SetInt32_Request;

// Struct for a sequence of astra_camera_msgs__srv__SetInt32_Request.
typedef struct astra_camera_msgs__srv__SetInt32_Request__Sequence
{
  astra_camera_msgs__srv__SetInt32_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} astra_camera_msgs__srv__SetInt32_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetInt32 in the package astra_camera_msgs.
typedef struct astra_camera_msgs__srv__SetInt32_Response
{
  bool success;
  rosidl_runtime_c__String message;
} astra_camera_msgs__srv__SetInt32_Response;

// Struct for a sequence of astra_camera_msgs__srv__SetInt32_Response.
typedef struct astra_camera_msgs__srv__SetInt32_Response__Sequence
{
  astra_camera_msgs__srv__SetInt32_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} astra_camera_msgs__srv__SetInt32_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__SET_INT32__STRUCT_H_
