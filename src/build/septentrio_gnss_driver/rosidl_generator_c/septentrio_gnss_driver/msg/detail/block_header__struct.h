// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from septentrio_gnss_driver:msg/BlockHeader.idl
// generated code does not contain a copyright notice

#ifndef SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__STRUCT_H_
#define SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BlockHeader in the package septentrio_gnss_driver.
typedef struct septentrio_gnss_driver__msg__BlockHeader
{
  uint8_t sync_1;
  uint8_t sync_2;
  uint16_t crc;
  uint16_t id;
  uint8_t revision;
  uint16_t length;
  uint32_t tow;
  uint16_t wnc;
} septentrio_gnss_driver__msg__BlockHeader;

// Struct for a sequence of septentrio_gnss_driver__msg__BlockHeader.
typedef struct septentrio_gnss_driver__msg__BlockHeader__Sequence
{
  septentrio_gnss_driver__msg__BlockHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} septentrio_gnss_driver__msg__BlockHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEPTENTRIO_GNSS_DRIVER__MSG__DETAIL__BLOCK_HEADER__STRUCT_H_
