// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from septentrio_gnss_driver:msg/RFBand.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/rf_band__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "septentrio_gnss_driver/msg/detail/rf_band__struct.h"
#include "septentrio_gnss_driver/msg/detail/rf_band__functions.h"
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


// forward declare type support functions


using _RFBand__ros_msg_type = septentrio_gnss_driver__msg__RFBand;

static bool _RFBand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RFBand__ros_msg_type * ros_message = static_cast<const _RFBand__ros_msg_type *>(untyped_ros_message);
  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: bandwidth
  {
    cdr << ros_message->bandwidth;
  }

  // Field name: info
  {
    cdr << ros_message->info;
  }

  return true;
}

static bool _RFBand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RFBand__ros_msg_type * ros_message = static_cast<_RFBand__ros_msg_type *>(untyped_ros_message);
  // Field name: frequency
  {
    cdr >> ros_message->frequency;
  }

  // Field name: bandwidth
  {
    cdr >> ros_message->bandwidth;
  }

  // Field name: info
  {
    cdr >> ros_message->info;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t get_serialized_size_septentrio_gnss_driver__msg__RFBand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RFBand__ros_msg_type * ros_message = static_cast<const _RFBand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bandwidth
  {
    size_t item_size = sizeof(ros_message->bandwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name info
  {
    size_t item_size = sizeof(ros_message->info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RFBand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_septentrio_gnss_driver__msg__RFBand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t max_serialized_size_septentrio_gnss_driver__msg__RFBand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: frequency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bandwidth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: info
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RFBand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_septentrio_gnss_driver__msg__RFBand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RFBand = {
  "septentrio_gnss_driver::msg",
  "RFBand",
  _RFBand__cdr_serialize,
  _RFBand__cdr_deserialize,
  _RFBand__get_serialized_size,
  _RFBand__max_serialized_size
};

static rosidl_message_type_support_t _RFBand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RFBand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, RFBand)() {
  return &_RFBand__type_support;
}

#if defined(__cplusplus)
}
#endif
