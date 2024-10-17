// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from astra_camera_msgs:srv/GetCameraParams.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__STRUCT_H_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetCameraParams in the package astra_camera_msgs.
typedef struct astra_camera_msgs__srv__GetCameraParams_Request
{
  uint8_t structure_needs_at_least_one_member;
} astra_camera_msgs__srv__GetCameraParams_Request;

// Struct for a sequence of astra_camera_msgs__srv__GetCameraParams_Request.
typedef struct astra_camera_msgs__srv__GetCameraParams_Request__Sequence
{
  astra_camera_msgs__srv__GetCameraParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} astra_camera_msgs__srv__GetCameraParams_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetCameraParams in the package astra_camera_msgs.
typedef struct astra_camera_msgs__srv__GetCameraParams_Response
{
  float l_intr_p[4];
  float r_intr_p[4];
  float r2l_r[9];
  float r2l_t[3];
  float l_k[5];
  float r_k[5];
  bool success;
  rosidl_runtime_c__String message;
} astra_camera_msgs__srv__GetCameraParams_Response;

// Struct for a sequence of astra_camera_msgs__srv__GetCameraParams_Response.
typedef struct astra_camera_msgs__srv__GetCameraParams_Response__Sequence
{
  astra_camera_msgs__srv__GetCameraParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} astra_camera_msgs__srv__GetCameraParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_PARAMS__STRUCT_H_
