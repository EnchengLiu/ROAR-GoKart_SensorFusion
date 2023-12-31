// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/MeasEpoch.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH__STRUCT_H_

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
// Member 'block_header'
#include "septentrio_gnss_driver/msg/detail/block_header__struct.h"
// Member 'type1'
#include "septentrio_gnss_driver/msg/detail/meas_epoch_channel_type1__struct.h"

// Struct defined in msg/MeasEpoch in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__MeasEpoch
{
  std_msgs__msg__Header header;
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t n;
  uint8_t sb1_length;
  uint8_t sb2_length;
  uint8_t common_flags;
  uint8_t cum_clk_jumps;
  septentrio_gnss_driver__msg__MeasEpochChannelType1__Sequence type1;
} septentrio_gnss_driver__msg__MeasEpoch;

// Struct for a sequence of septentrio_gnss_driver__msg__MeasEpoch.
typedef struct septentrio_gnss_driver__msg__MeasEpoch__Sequence
{
  septentrio_gnss_driver__msg__MeasEpoch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__MeasEpoch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__MEAS_EPOCH__STRUCT_H_
