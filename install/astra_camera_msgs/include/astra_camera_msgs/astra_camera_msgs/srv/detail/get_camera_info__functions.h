// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from astra_camera_msgs:srv/GetCameraInfo.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_INFO__FUNCTIONS_H_
#define ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "astra_camera_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "astra_camera_msgs/srv/detail/get_camera_info__struct.h"

/// Initialize srv/GetCameraInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * astra_camera_msgs__srv__GetCameraInfo_Request
 * )) before or use
 * astra_camera_msgs__srv__GetCameraInfo_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Request__init(astra_camera_msgs__srv__GetCameraInfo_Request * msg);

/// Finalize srv/GetCameraInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__srv__GetCameraInfo_Request__fini(astra_camera_msgs__srv__GetCameraInfo_Request * msg);

/// Create srv/GetCameraInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * astra_camera_msgs__srv__GetCameraInfo_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
astra_camera_msgs__srv__GetCameraInfo_Request *
astra_camera_msgs__srv__GetCameraInfo_Request__create();

/// Destroy srv/GetCameraInfo message.
/**
 * It calls
 * astra_camera_msgs__srv__GetCameraInfo_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__srv__GetCameraInfo_Request__destroy(astra_camera_msgs__srv__GetCameraInfo_Request * msg);

/// Check for srv/GetCameraInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Request__are_equal(const astra_camera_msgs__srv__GetCameraInfo_Request * lhs, const astra_camera_msgs__srv__GetCameraInfo_Request * rhs);

/// Copy a srv/GetCameraInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Request__copy(
  const astra_camera_msgs__srv__GetCameraInfo_Request * input,
  astra_camera_msgs__srv__GetCameraInfo_Request * output);

/// Initialize array of srv/GetCameraInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * astra_camera_msgs__srv__GetCameraInfo_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__init(astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetCameraInfo messages.
/**
 * It calls
 * astra_camera_msgs__srv__GetCameraInfo_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__fini(astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * array);

/// Create array of srv/GetCameraInfo messages.
/**
 * It allocates the memory for the array and calls
 * astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence *
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetCameraInfo messages.
/**
 * It calls
 * astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__destroy(astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * array);

/// Check for srv/GetCameraInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__are_equal(const astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * lhs, const astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * rhs);

/// Copy an array of srv/GetCameraInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__copy(
  const astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * input,
  astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * output);

/// Initialize srv/GetCameraInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * astra_camera_msgs__srv__GetCameraInfo_Response
 * )) before or use
 * astra_camera_msgs__srv__GetCameraInfo_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Response__init(astra_camera_msgs__srv__GetCameraInfo_Response * msg);

/// Finalize srv/GetCameraInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__srv__GetCameraInfo_Response__fini(astra_camera_msgs__srv__GetCameraInfo_Response * msg);

/// Create srv/GetCameraInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * astra_camera_msgs__srv__GetCameraInfo_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
astra_camera_msgs__srv__GetCameraInfo_Response *
astra_camera_msgs__srv__GetCameraInfo_Response__create();

/// Destroy srv/GetCameraInfo message.
/**
 * It calls
 * astra_camera_msgs__srv__GetCameraInfo_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__srv__GetCameraInfo_Response__destroy(astra_camera_msgs__srv__GetCameraInfo_Response * msg);

/// Check for srv/GetCameraInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Response__are_equal(const astra_camera_msgs__srv__GetCameraInfo_Response * lhs, const astra_camera_msgs__srv__GetCameraInfo_Response * rhs);

/// Copy a srv/GetCameraInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Response__copy(
  const astra_camera_msgs__srv__GetCameraInfo_Response * input,
  astra_camera_msgs__srv__GetCameraInfo_Response * output);

/// Initialize array of srv/GetCameraInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * astra_camera_msgs__srv__GetCameraInfo_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__init(astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetCameraInfo messages.
/**
 * It calls
 * astra_camera_msgs__srv__GetCameraInfo_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__fini(astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * array);

/// Create array of srv/GetCameraInfo messages.
/**
 * It allocates the memory for the array and calls
 * astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence *
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetCameraInfo messages.
/**
 * It calls
 * astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__destroy(astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * array);

/// Check for srv/GetCameraInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__are_equal(const astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * lhs, const astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * rhs);

/// Copy an array of srv/GetCameraInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__copy(
  const astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * input,
  astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ASTRA_CAMERA_MSGS__SRV__DETAIL__GET_CAMERA_INFO__FUNCTIONS_H_
