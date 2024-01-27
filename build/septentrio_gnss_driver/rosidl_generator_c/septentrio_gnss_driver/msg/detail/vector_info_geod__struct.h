// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/VectorInfoGeod.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_GEOD__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_GEOD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VectorInfoGeod in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__VectorInfoGeod
{
  uint8_t nr_sv;
  uint8_t error;
  uint8_t mode;
  uint8_t misc;
  double delta_east;
  double delta_north;
  double delta_up;
  float delta_ve;
  float delta_vn;
  float delta_vu;
  uint16_t azimuth;
  int16_t elevation;
  uint16_t reference_id;
  uint16_t corr_age;
  uint32_t signal_info;
} septentrio_gnss_driver__msg__VectorInfoGeod;

// Struct for a sequence of septentrio_gnss_driver__msg__VectorInfoGeod.
typedef struct septentrio_gnss_driver__msg__VectorInfoGeod__Sequence
{
  septentrio_gnss_driver__msg__VectorInfoGeod * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__VectorInfoGeod__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__VECTOR_INFO_GEOD__STRUCT_H_
