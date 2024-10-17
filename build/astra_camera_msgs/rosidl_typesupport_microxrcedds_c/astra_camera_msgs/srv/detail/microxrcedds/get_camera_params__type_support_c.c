// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from astra_camera_msgs:srv/GetCameraParams.idl
// generated code does not contain a copyright notice
#include "astra_camera_msgs/srv/detail/get_camera_params__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "astra_camera_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "astra_camera_msgs/srv/detail/get_camera_params__struct.h"
#include "astra_camera_msgs/srv/detail/get_camera_params__functions.h"

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


// forward declare type support functions


typedef astra_camera_msgs__srv__GetCameraParams_Request _GetCameraParams_Request__ros_msg_type;

static bool _GetCameraParams_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetCameraParams_Request__ros_msg_type * ros_message = (_GetCameraParams_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _GetCameraParams_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetCameraParams_Request__ros_msg_type * ros_message = (_GetCameraParams_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_astra_camera_msgs
size_t get_serialized_size_astra_camera_msgs__srv__GetCameraParams_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetCameraParams_Request__ros_msg_type * ros_message = (const _GetCameraParams_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetCameraParams_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_astra_camera_msgs__srv__GetCameraParams_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_astra_camera_msgs
size_t max_serialized_size_astra_camera_msgs__srv__GetCameraParams_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _GetCameraParams_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_astra_camera_msgs__srv__GetCameraParams_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetCameraParams_Request = {
  "astra_camera_msgs::srv",
  "GetCameraParams_Request",
  _GetCameraParams_Request__cdr_serialize,
  _GetCameraParams_Request__cdr_deserialize,
  _GetCameraParams_Request__get_serialized_size,
  get_serialized_size_astra_camera_msgs__srv__GetCameraParams_Request,
  _GetCameraParams_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetCameraParams_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetCameraParams_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, astra_camera_msgs, srv, GetCameraParams_Request)() {
  return &_GetCameraParams_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "astra_camera_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "astra_camera_msgs/srv/detail/get_camera_params__struct.h"
// already included above
// #include "astra_camera_msgs/srv/detail/get_camera_params__functions.h"

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

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


typedef astra_camera_msgs__srv__GetCameraParams_Response _GetCameraParams_Response__ros_msg_type;

static bool _GetCameraParams_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetCameraParams_Response__ros_msg_type * ros_message = (_GetCameraParams_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: l_intr_p
  {
    const size_t size = 4;
    rv = ucdr_serialize_array_float(cdr, ros_message->l_intr_p, size);
  }
  // Member: r_intr_p
  {
    const size_t size = 4;
    rv = ucdr_serialize_array_float(cdr, ros_message->r_intr_p, size);
  }
  // Member: r2l_r
  {
    const size_t size = 9;
    rv = ucdr_serialize_array_float(cdr, ros_message->r2l_r, size);
  }
  // Member: r2l_t
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_float(cdr, ros_message->r2l_t, size);
  }
  // Member: l_k
  {
    const size_t size = 5;
    rv = ucdr_serialize_array_float(cdr, ros_message->l_k, size);
  }
  // Member: r_k
  {
    const size_t size = 5;
    rv = ucdr_serialize_array_float(cdr, ros_message->r_k, size);
  }
  // Member: success
  rv = ucdr_serialize_bool(cdr, (ros_message->success) ? 0x01 : 0x00);
  // Member: message
 {
    uint32_t string_len = (ros_message->message.data == NULL) ? 0 : (uint32_t)strlen(ros_message->message.data) + 1;
    ros_message->message.size = (ros_message->message.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->message.data, string_len);
  }

  return rv;
}

static bool _GetCameraParams_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetCameraParams_Response__ros_msg_type * ros_message = (_GetCameraParams_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: l_intr_p
  {
    const size_t size = 4;
    rv = ucdr_deserialize_array_float(cdr, ros_message->l_intr_p, size);
  }
  // Field name: r_intr_p
  {
    const size_t size = 4;
    rv = ucdr_deserialize_array_float(cdr, ros_message->r_intr_p, size);
  }
  // Field name: r2l_r
  {
    const size_t size = 9;
    rv = ucdr_deserialize_array_float(cdr, ros_message->r2l_r, size);
  }
  // Field name: r2l_t
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_float(cdr, ros_message->r2l_t, size);
  }
  // Field name: l_k
  {
    const size_t size = 5;
    rv = ucdr_deserialize_array_float(cdr, ros_message->l_k, size);
  }
  // Field name: r_k
  {
    const size_t size = 5;
    rv = ucdr_deserialize_array_float(cdr, ros_message->r_k, size);
  }
  // Field name: success
  rv = ucdr_deserialize_bool(cdr, &ros_message->success);
  // Field name: message
  {
    size_t capacity = ros_message->message.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->message.data, capacity, &string_size);
    if (rv) {
      ros_message->message.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->message.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_astra_camera_msgs
size_t get_serialized_size_astra_camera_msgs__srv__GetCameraParams_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetCameraParams_Response__ros_msg_type * ros_message = (const _GetCameraParams_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: l_intr_p
  {
    const size_t array_size = 4;
    const size_t item_size = sizeof(ros_message->l_intr_p[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: r_intr_p
  {
    const size_t array_size = 4;
    const size_t item_size = sizeof(ros_message->r_intr_p[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: r2l_r
  {
    const size_t array_size = 9;
    const size_t item_size = sizeof(ros_message->r2l_r[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: r2l_t
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->r2l_t[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: l_k
  {
    const size_t array_size = 5;
    const size_t item_size = sizeof(ros_message->l_k[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: r_k
  {
    const size_t array_size = 5;
    const size_t item_size = sizeof(ros_message->r_k[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: success
  {
    const size_t item_size = sizeof(ros_message->success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->message.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _GetCameraParams_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_astra_camera_msgs__srv__GetCameraParams_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_astra_camera_msgs
size_t max_serialized_size_astra_camera_msgs__srv__GetCameraParams_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: l_intr_p
  {
    const size_t array_size = 4;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: r_intr_p
  {
    const size_t array_size = 4;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: r2l_r
  {
    const size_t array_size = 9;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: r2l_t
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: l_k
  {
    const size_t array_size = 5;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: r_k
  {
    const size_t array_size = 5;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: message
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _GetCameraParams_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_astra_camera_msgs__srv__GetCameraParams_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetCameraParams_Response = {
  "astra_camera_msgs::srv",
  "GetCameraParams_Response",
  _GetCameraParams_Response__cdr_serialize,
  _GetCameraParams_Response__cdr_deserialize,
  _GetCameraParams_Response__get_serialized_size,
  get_serialized_size_astra_camera_msgs__srv__GetCameraParams_Response,
  _GetCameraParams_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetCameraParams_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetCameraParams_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, astra_camera_msgs, srv, GetCameraParams_Response)() {
  return &_GetCameraParams_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "astra_camera_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "astra_camera_msgs/srv/get_camera_params.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetCameraParams__callbacks = {
  "astra_camera_msgs::srv",
  "GetCameraParams",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, astra_camera_msgs, srv, GetCameraParams_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, astra_camera_msgs, srv, GetCameraParams_Response),
};

static rosidl_service_type_support_t GetCameraParams__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &GetCameraParams__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, astra_camera_msgs, srv, GetCameraParams)() {
  return &GetCameraParams__handle;
}

#if defined(__cplusplus)
}
#endif
