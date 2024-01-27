// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from septentrio_gnss_driver:msg/GALAuthStatus.idl
// generated code does not contain a copyright notice
#include "septentrio_gnss_driver/msg/detail/gal_auth_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "septentrio_gnss_driver/msg/detail/gal_auth_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace septentrio_gnss_driver
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const septentrio_gnss_driver::msg::BlockHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  septentrio_gnss_driver::msg::BlockHeader &);
size_t get_serialized_size(
  const septentrio_gnss_driver::msg::BlockHeader &,
  size_t current_alignment);
size_t
max_serialized_size_BlockHeader(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace septentrio_gnss_driver


namespace septentrio_gnss_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
cdr_serialize(
  const septentrio_gnss_driver::msg::GALAuthStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: block_header
  septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.block_header,
    cdr);
  // Member: osnma_status
  cdr << ros_message.osnma_status;
  // Member: trusted_time_delta
  cdr << ros_message.trusted_time_delta;
  // Member: gal_active_mask
  cdr << ros_message.gal_active_mask;
  // Member: gal_authentic_mask
  cdr << ros_message.gal_authentic_mask;
  // Member: gps_active_mask
  cdr << ros_message.gps_active_mask;
  // Member: gps_authentic_mask
  cdr << ros_message.gps_authentic_mask;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  septentrio_gnss_driver::msg::GALAuthStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: block_header
  septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.block_header);

  // Member: osnma_status
  cdr >> ros_message.osnma_status;

  // Member: trusted_time_delta
  cdr >> ros_message.trusted_time_delta;

  // Member: gal_active_mask
  cdr >> ros_message.gal_active_mask;

  // Member: gal_authentic_mask
  cdr >> ros_message.gal_authentic_mask;

  // Member: gps_active_mask
  cdr >> ros_message.gps_active_mask;

  // Member: gps_authentic_mask
  cdr >> ros_message.gps_authentic_mask;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
get_serialized_size(
  const septentrio_gnss_driver::msg::GALAuthStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: block_header

  current_alignment +=
    septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.block_header, current_alignment);
  // Member: osnma_status
  {
    size_t item_size = sizeof(ros_message.osnma_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trusted_time_delta
  {
    size_t item_size = sizeof(ros_message.trusted_time_delta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_active_mask
  {
    size_t item_size = sizeof(ros_message.gal_active_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_authentic_mask
  {
    size_t item_size = sizeof(ros_message.gal_authentic_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_active_mask
  {
    size_t item_size = sizeof(ros_message.gps_active_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_authentic_mask
  {
    size_t item_size = sizeof(ros_message.gps_authentic_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_septentrio_gnss_driver
max_serialized_size_GALAuthStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: block_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::max_serialized_size_BlockHeader(
        full_bounded, current_alignment);
    }
  }

  // Member: osnma_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: trusted_time_delta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gal_active_mask
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gal_authentic_mask
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gps_active_mask
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gps_authentic_mask
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GALAuthStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const septentrio_gnss_driver::msg::GALAuthStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GALAuthStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<septentrio_gnss_driver::msg::GALAuthStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GALAuthStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const septentrio_gnss_driver::msg::GALAuthStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GALAuthStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GALAuthStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _GALAuthStatus__callbacks = {
  "septentrio_gnss_driver::msg",
  "GALAuthStatus",
  _GALAuthStatus__cdr_serialize,
  _GALAuthStatus__cdr_deserialize,
  _GALAuthStatus__get_serialized_size,
  _GALAuthStatus__max_serialized_size
};

static rosidl_message_type_support_t _GALAuthStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GALAuthStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace septentrio_gnss_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_septentrio_gnss_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<septentrio_gnss_driver::msg::GALAuthStatus>()
{
  return &septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::_GALAuthStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, septentrio_gnss_driver, msg, GALAuthStatus)() {
  return &septentrio_gnss_driver::msg::typesupport_fastrtps_cpp::_GALAuthStatus__handle;
}

#ifdef __cplusplus
}
#endif
