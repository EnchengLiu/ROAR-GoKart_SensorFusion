// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/VelCovGeodetic.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__STRUCT_H_

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

// Struct defined in msg/VelCovGeodetic in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__VelCovGeodetic
{
  std_msgs__msg__Header header;
  septentrio_gnss_driver__msg__BlockHeader block_header;
  uint8_t mode;
  uint8_t error;
  float cov_vnvn;
  float cov_veve;
  float cov_vuvu;
  float cov_dtdt;
  float cov_vnve;
  float cov_vnvu;
  float cov_vndt;
  float cov_vevu;
  float cov_vedt;
  float cov_vudt;
} septentrio_gnss_driver__msg__VelCovGeodetic;

// Struct for a sequence of septentrio_gnss_driver__msg__VelCovGeodetic.
typedef struct septentrio_gnss_driver__msg__VelCovGeodetic__Sequence
{
  septentrio_gnss_driver__msg__VelCovGeodetic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__VelCovGeodetic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VEL_COV_GEODETIC__STRUCT_H_
