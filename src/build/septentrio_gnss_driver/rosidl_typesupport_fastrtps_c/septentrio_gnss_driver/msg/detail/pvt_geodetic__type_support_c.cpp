// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from septentrio_gnss_driver:msg/PVTGeodetic.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/pvt_geodetic__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "septentrio_gnss_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "septentrio_gnss_driver/msg/detail/pvt_geodetic__struct.h"
#include "septentrio_gnss_driver/msg/detail/pvt_geodetic__functions.h"
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


using _PVTGeodetic__ros_msg_type = septentrio_gnss_driver__msg__PVTGeodetic;

static bool _PVTGeodetic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PVTGeodetic__ros_msg_type * ros_message = static_cast<const _PVTGeodetic__ros_msg_type *>(untyped_ros_message);
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

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: undulation
  {
    cdr << ros_message->undulation;
  }

  // Field name: vn
  {
    cdr << ros_message->vn;
  }

  // Field name: ve
  {
    cdr << ros_message->ve;
  }

  // Field name: vu
  {
    cdr << ros_message->vu;
  }

  // Field name: cog
  {
    cdr << ros_message->cog;
  }

  // Field name: rx_clk_bias
  {
    cdr << ros_message->rx_clk_bias;
  }

  // Field name: rx_clk_drift
  {
    cdr << ros_message->rx_clk_drift;
  }

  // Field name: time_system
  {
    cdr << ros_message->time_system;
  }

  // Field name: datum
  {
    cdr << ros_message->datum;
  }

  // Field name: nr_sv
  {
    cdr << ros_message->nr_sv;
  }

  // Field name: wa_corr_info
  {
    cdr << ros_message->wa_corr_info;
  }

  // Field name: reference_id
  {
    cdr << ros_message->reference_id;
  }

  // Field name: mean_corr_age
  {
    cdr << ros_message->mean_corr_age;
  }

  // Field name: signal_info
  {
    cdr << ros_message->signal_info;
  }

  // Field name: alert_flag
  {
    cdr << ros_message->alert_flag;
  }

  // Field name: nr_bases
  {
    cdr << ros_message->nr_bases;
  }

  // Field name: ppp_info
  {
    cdr << ros_message->ppp_info;
  }

  // Field name: latency
  {
    cdr << ros_message->latency;
  }

  // Field name: h_accuracy
  {
    cdr << ros_message->h_accuracy;
  }

  // Field name: v_accuracy
  {
    cdr << ros_message->v_accuracy;
  }

  // Field name: misc
  {
    cdr << ros_message->misc;
  }

  return true;
}

static bool _PVTGeodetic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PVTGeodetic__ros_msg_type * ros_message = static_cast<_PVTGeodetic__ros_msg_type *>(untyped_ros_message);
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

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: undulation
  {
    cdr >> ros_message->undulation;
  }

  // Field name: vn
  {
    cdr >> ros_message->vn;
  }

  // Field name: ve
  {
    cdr >> ros_message->ve;
  }

  // Field name: vu
  {
    cdr >> ros_message->vu;
  }

  // Field name: cog
  {
    cdr >> ros_message->cog;
  }

  // Field name: rx_clk_bias
  {
    cdr >> ros_message->rx_clk_bias;
  }

  // Field name: rx_clk_drift
  {
    cdr >> ros_message->rx_clk_drift;
  }

  // Field name: time_system
  {
    cdr >> ros_message->time_system;
  }

  // Field name: datum
  {
    cdr >> ros_message->datum;
  }

  // Field name: nr_sv
  {
    cdr >> ros_message->nr_sv;
  }

  // Field name: wa_corr_info
  {
    cdr >> ros_message->wa_corr_info;
  }

  // Field name: reference_id
  {
    cdr >> ros_message->reference_id;
  }

  // Field name: mean_corr_age
  {
    cdr >> ros_message->mean_corr_age;
  }

  // Field name: signal_info
  {
    cdr >> ros_message->signal_info;
  }

  // Field name: alert_flag
  {
    cdr >> ros_message->alert_flag;
  }

  // Field name: nr_bases
  {
    cdr >> ros_message->nr_bases;
  }

  // Field name: ppp_info
  {
    cdr >> ros_message->ppp_info;
  }

  // Field name: latency
  {
    cdr >> ros_message->latency;
  }

  // Field name: h_accuracy
  {
    cdr >> ros_message->h_accuracy;
  }

  // Field name: v_accuracy
  {
    cdr >> ros_message->v_accuracy;
  }

  // Field name: misc
  {
    cdr >> ros_message->misc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t get_serialized_size_septentrio_gnss_driver__msg__PVTGeodetic(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PVTGeodetic__ros_msg_type * ros_message = static_cast<const _PVTGeodetic__ros_msg_type *>(untyped_ros_message);
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
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name undulation
  {
    size_t item_size = sizeof(ros_message->undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vn
  {
    size_t item_size = sizeof(ros_message->vn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ve
  {
    size_t item_size = sizeof(ros_message->ve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vu
  {
    size_t item_size = sizeof(ros_message->vu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cog
  {
    size_t item_size = sizeof(ros_message->cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_clk_bias
  {
    size_t item_size = sizeof(ros_message->rx_clk_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_clk_drift
  {
    size_t item_size = sizeof(ros_message->rx_clk_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_system
  {
    size_t item_size = sizeof(ros_message->time_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name datum
  {
    size_t item_size = sizeof(ros_message->datum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nr_sv
  {
    size_t item_size = sizeof(ros_message->nr_sv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wa_corr_info
  {
    size_t item_size = sizeof(ros_message->wa_corr_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_id
  {
    size_t item_size = sizeof(ros_message->reference_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mean_corr_age
  {
    size_t item_size = sizeof(ros_message->mean_corr_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_info
  {
    size_t item_size = sizeof(ros_message->signal_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alert_flag
  {
    size_t item_size = sizeof(ros_message->alert_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nr_bases
  {
    size_t item_size = sizeof(ros_message->nr_bases);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ppp_info
  {
    size_t item_size = sizeof(ros_message->ppp_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latency
  {
    size_t item_size = sizeof(ros_message->latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name h_accuracy
  {
    size_t item_size = sizeof(ros_message->h_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_accuracy
  {
    size_t item_size = sizeof(ros_message->v_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name misc
  {
    size_t item_size = sizeof(ros_message->misc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PVTGeodetic__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_septentrio_gnss_driver__msg__PVTGeodetic(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_septentrio_gnss_driver
size_t max_serialized_size_septentrio_gnss_driver__msg__PVTGeodetic(
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
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: undulation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ve
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cog
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_clk_bias
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rx_clk_drift
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_system
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: datum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nr_sv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wa_corr_info
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reference_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mean_corr_age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: signal_info
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: alert_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nr_bases
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ppp_info
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: latency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: h_accuracy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: v_accuracy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: misc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PVTGeodetic__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_septentrio_gnss_driver__msg__PVTGeodetic(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PVTGeodetic = {
  "septentrio_gnss_driver::msg",
  "PVTGeodetic",
  _PVTGeodetic__cdr_serialize,
  _PVTGeodetic__cdr_deserialize,
  _PVTGeodetic__get_serialized_size,
  _PVTGeodetic__max_serialized_size
};

static rosidl_message_type_support_t _PVTGeodetic__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PVTGeodetic,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, septentrio_gnss_driver, msg, PVTGeodetic)() {
  return &_PVTGeodetic__type_support;
}

#if defined(__cplusplus)
}
#endif
