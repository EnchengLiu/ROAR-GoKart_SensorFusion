// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from septentrio_gnss_driver:msg/BaseVectorGeod.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/base_vector_geod__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "septentrio_gnss_driver/msg/detail/base_vector_geod__struct.h"
#include "septentrio_gnss_driver/msg/detail/base_vector_geod__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "septentrio_gnss_driver/msg/detail/block_header__functions.h"  // block_header
#include "septentrio_gnss_driver/msg/detail/vector_info_geod__functions.h"  // vector_info_geod
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, BlockHeader)();
size_t get_serialized_size_septentrio_gnss_driver__msg__VectorInfoGeod(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_septentrio_gnss_driver__msg__VectorInfoGeod(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, VectorInfoGeod)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_septentrio_gnss_driver
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_septentrio_gnss_driver
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _BaseVectorGeod__ros_msg_type = septentrio_gnss_driver__msg__BaseVectorGeod;

static bool _BaseVectorGeod__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseVectorGeod__ros_msg_type * ros_message = static_cast<const _BaseVectorGeod__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: block_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, BlockHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->block_header, cdr))
    {
      return false;
    }
  }

  // Field name: n
  {
    cdr << ros_message->n;
  }

  // Field name: sb_length
  {
    cdr << ros_message->sb_length;
  }

  // Field name: vector_info_geod
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, VectorInfoGeod
      )()->data);
    size_t size = ros_message->vector_info_geod.size;
    auto array_ptr = ros_message->vector_info_geod.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _BaseVectorGeod__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseVectorGeod__ros_msg_type * ros_message = static_cast<_BaseVectorGeod__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: block_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, BlockHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->block_header))
    {
      return false;
    }
  }

  // Field name: n
  {
    cdr >> ros_message->n;
  }

  // Field name: sb_length
  {
    cdr >> ros_message->sb_length;
  }

  // Field name: vector_info_geod
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, VectorInfoGeod
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vector_info_geod.data) {
      septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__fini(&ros_message->vector_info_geod);
    }
    if (!septentrio_gnss_driver__msg__VectorInfoGeod__Sequence__init(&ros_message->vector_info_geod, size)) {
      return "failed to create array for field 'vector_info_geod'";
    }
    auto array_ptr = ros_message->vector_info_geod.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t get_serialized_size_septentrio_gnss_driver__msg__BaseVectorGeod(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseVectorGeod__ros_msg_type * ros_message = static_cast<const _BaseVectorGeod__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name block_header

  current_alignment += get_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
    &(ros_message->block_header), current_alignment);
  // field.name n
  {
    size_t item_size = sizeof(ros_message->n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sb_length
  {
    size_t item_size = sizeof(ros_message->sb_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vector_info_geod
  {
    size_t array_size = ros_message->vector_info_geod.size;
    auto array_ptr = ros_message->vector_info_geod.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_septentrio_gnss_driver__msg__VectorInfoGeod(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseVectorGeod__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_septentrio_gnss_driver__msg__BaseVectorGeod(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t max_serialized_size_septentrio_gnss_driver__msg__BaseVectorGeod(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: block_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_septentrio_gnss_driver__msg__BlockHeader(
        full_bounded, current_alignment);
    }
  }
  // member: n
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sb_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vector_info_geod
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_septentrio_gnss_driver__msg__VectorInfoGeod(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BaseVectorGeod__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_septentrio_gnss_driver__msg__BaseVectorGeod(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BaseVectorGeod = {
  "septentrio_gnss_driver::msg",
  "BaseVectorGeod",
  _BaseVectorGeod__cdr_serialize,
  _BaseVectorGeod__cdr_deserialize,
  _BaseVectorGeod__get_serialized_size,
  _BaseVectorGeod__max_serialized_size
};

static rosidl_message_type_support_t _BaseVectorGeod__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseVectorGeod,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, BaseVectorGeod)() {
  return &_BaseVectorGeod__type_support;
}

#if defined(__cplusplus)
}
#endif
