// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/INSNavGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__STRUCT_H_

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

// Struct defined in msg/INSNavGeod in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__INSNavGeod
{
  std_msgs__msg__Header header;
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t gnss_mode;
  uint8_t error;
  uint16_t info;
  uint16_t gnss_age;
  double latitude;
  double longitude;
  double height;
  float undulation;
  uint16_t accuracy;
  uint16_t latency;
  uint8_t datum;
  uint16_t sb_list;
  float latitude_std_dev;
  float longitude_std_dev;
  float height_std_dev;
  float latitude_longitude_cov;
  float latitude_height_cov;
  float longitude_height_cov;
  float heading;
  float pitch;
  float roll;
  float heading_std_dev;
  float pitch_std_dev;
  float roll_std_dev;
  float heading_pitch_cov;
  float heading_roll_cov;
  float pitch_roll_cov;
  float ve;
  float vn;
  float vu;
  float ve_std_dev;
  float vn_std_dev;
  float vu_std_dev;
  float ve_vn_cov;
  float ve_vu_cov;
  float vn_vu_cov;
} septentrio_gnss_driver__msg__INSNavGeod;

// Struct for a sequence of septentrio_gnss_driver__msg__INSNavGeod.
typedef struct septentrio_gnss_driver__msg__INSNavGeod__Sequence
{
  septentrio_gnss_driver__msg__INSNavGeod * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__INSNavGeod__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__INS_NAV_GEOD__STRUCT_H_
