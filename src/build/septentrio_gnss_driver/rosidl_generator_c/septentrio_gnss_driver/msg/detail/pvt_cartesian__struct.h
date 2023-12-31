// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/PVTCartesian.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_CARTESIAN__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_CARTESIAN__STRUCT_H_

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

// Struct defined in msg/PVTCartesian in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__PVTCartesian
{
  std_msgs__msg__Header header;
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t mode;
  uint8_t error;
  double x;
  double y;
  double z;
  float undulation;
  float vx;
  float vy;
  float vz;
  float cog;
  double rx_clk_bias;
  float rx_clk_drift;
  uint8_t time_system;
  uint8_t datum;
  uint8_t nr_sv;
  uint8_t wa_corr_info;
  uint16_t reference_id;
  uint16_t mean_corr_age;
  uint32_t signal_info;
  uint8_t alert_flag;
  uint8_t nr_bases;
  uint16_t ppp_info;
  uint16_t latency;
  uint16_t h_accuracy;
  uint16_t v_accuracy;
  uint8_t misc;
} septentrio_gnss_driver__msg__PVTCartesian;

// Struct for a sequence of septentrio_gnss_driver__msg__PVTCartesian.
typedef struct septentrio_gnss_driver__msg__PVTCartesian__Sequence
{
  septentrio_gnss_driver__msg__PVTCartesian * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__PVTCartesian__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__PVT_CARTESIAN__STRUCT_H_
