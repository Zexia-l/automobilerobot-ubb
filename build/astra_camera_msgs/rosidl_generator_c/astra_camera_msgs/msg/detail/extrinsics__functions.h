// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from astra_camera_msgs:msg/Extrinsics.idl
// generated code does not contain a copyright notice

#ifndef ASTRA_CAMERA_MSGS__MSG__DETAIL__EXTRINSICS__FUNCTIONS_H_
#define ASTRA_CAMERA_MSGS__MSG__DETAIL__EXTRINSICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "astra_camera_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "astra_camera_msgs/msg/detail/extrinsics__struct.h"

/// Initialize msg/Extrinsics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * astra_camera_msgs__msg__Extrinsics
 * )) before or use
 * astra_camera_msgs__msg__Extrinsics__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__msg__Extrinsics__init(astra_camera_msgs__msg__Extrinsics * msg);

/// Finalize msg/Extrinsics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__msg__Extrinsics__fini(astra_camera_msgs__msg__Extrinsics * msg);

/// Create msg/Extrinsics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * astra_camera_msgs__msg__Extrinsics__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
astra_camera_msgs__msg__Extrinsics *
astra_camera_msgs__msg__Extrinsics__create();

/// Destroy msg/Extrinsics message.
/**
 * It calls
 * astra_camera_msgs__msg__Extrinsics__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__msg__Extrinsics__destroy(astra_camera_msgs__msg__Extrinsics * msg);

/// Check for msg/Extrinsics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__msg__Extrinsics__are_equal(const astra_camera_msgs__msg__Extrinsics * lhs, const astra_camera_msgs__msg__Extrinsics * rhs);

/// Copy a msg/Extrinsics message.
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
astra_camera_msgs__msg__Extrinsics__copy(
  const astra_camera_msgs__msg__Extrinsics * input,
  astra_camera_msgs__msg__Extrinsics * output);

/// Initialize array of msg/Extrinsics messages.
/**
 * It allocates the memory for the number of elements and calls
 * astra_camera_msgs__msg__Extrinsics__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__msg__Extrinsics__Sequence__init(astra_camera_msgs__msg__Extrinsics__Sequence * array, size_t size);

/// Finalize array of msg/Extrinsics messages.
/**
 * It calls
 * astra_camera_msgs__msg__Extrinsics__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__msg__Extrinsics__Sequence__fini(astra_camera_msgs__msg__Extrinsics__Sequence * array);

/// Create array of msg/Extrinsics messages.
/**
 * It allocates the memory for the array and calls
 * astra_camera_msgs__msg__Extrinsics__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
astra_camera_msgs__msg__Extrinsics__Sequence *
astra_camera_msgs__msg__Extrinsics__Sequence__create(size_t size);

/// Destroy array of msg/Extrinsics messages.
/**
 * It calls
 * astra_camera_msgs__msg__Extrinsics__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
void
astra_camera_msgs__msg__Extrinsics__Sequence__destroy(astra_camera_msgs__msg__Extrinsics__Sequence * array);

/// Check for msg/Extrinsics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_astra_camera_msgs
bool
astra_camera_msgs__msg__Extrinsics__Sequence__are_equal(const astra_camera_msgs__msg__Extrinsics__Sequence * lhs, const astra_camera_msgs__msg__Extrinsics__Sequence * rhs);

/// Copy an array of msg/Extrinsics messages.
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
astra_camera_msgs__msg__Extrinsics__Sequence__copy(
  const astra_camera_msgs__msg__Extrinsics__Sequence * input,
  astra_camera_msgs__msg__Extrinsics__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ASTRA_CAMERA_MSGS__MSG__DETAIL__EXTRINSICS__FUNCTIONS_H_
