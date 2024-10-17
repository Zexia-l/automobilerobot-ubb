// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from astra_camera_msgs:msg/Extrinsics.idl
// generated code does not contain a copyright notice
#include "astra_camera_msgs/msg/detail/extrinsics__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "astra_camera_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "astra_camera_msgs/msg/detail/extrinsics__struct.h"
#include "astra_camera_msgs/msg/detail/extrinsics__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_astra_camera_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_astra_camera_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_astra_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef astra_camera_msgs__msg__Extrinsics _Extrinsics__ros_msg_type;

static bool _Extrinsics__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Extrinsics__ros_msg_type * ros_message = (_Extrinsics__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: rotation
  {
    const size_t size = 9;
    rv = ucdr_serialize_array_double(cdr, ros_message->rotation, size);
  }
  // Member: translation
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_double(cdr, ros_message->translation, size);
  }

  return rv;
}

static bool _Extrinsics__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Extrinsics__ros_msg_type * ros_message = (_Extrinsics__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: rotation
  {
    const size_t size = 9;
    rv = ucdr_deserialize_array_double(cdr, ros_message->rotation, size);
  }
  // Field name: translation
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_double(cdr, ros_message->translation, size);
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_astra_camera_msgs
size_t get_serialized_size_astra_camera_msgs__msg__Extrinsics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Extrinsics__ros_msg_type * ros_message = (const _Extrinsics__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: rotation
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message->rotation[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: translation
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->translation[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Extrinsics__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_astra_camera_msgs__msg__Extrinsics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_astra_camera_msgs
size_t max_serialized_size_astra_camera_msgs__msg__Extrinsics(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: rotation
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: translation
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }

  return current_alignment - initial_alignment;
}

static size_t _Extrinsics__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_astra_camera_msgs__msg__Extrinsics(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Extrinsics = {
  "astra_camera_msgs::msg",
  "Extrinsics",
  _Extrinsics__cdr_serialize,
  _Extrinsics__cdr_deserialize,
  _Extrinsics__get_serialized_size,
  get_serialized_size_astra_camera_msgs__msg__Extrinsics,
  _Extrinsics__max_serialized_size
};

static rosidl_message_type_support_t _Extrinsics__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Extrinsics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, astra_camera_msgs, msg, Extrinsics)() {
  return &_Extrinsics__type_support;
}

#if defined(__cplusplus)
}
#endif
