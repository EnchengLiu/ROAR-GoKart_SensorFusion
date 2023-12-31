// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from septentrio_gnss_driver:msg/RFStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "septentrio_gnss_driver/msg/detail/rf_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace septentrio_gnss_driver
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RFStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) septentrio_gnss_driver::msg::RFStatus(_init);
}

void RFStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<septentrio_gnss_driver::msg::RFStatus *>(message_memory);
  typed_message->~RFStatus();
}

size_t size_function__RFStatus__rfband(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<septentrio_gnss_driver::msg::RFBand> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RFStatus__rfband(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<septentrio_gnss_driver::msg::RFBand> *>(untyped_member);
  return &member[index];
}

void * get_function__RFStatus__rfband(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<septentrio_gnss_driver::msg::RFBand> *>(untyped_member);
  return &member[index];
}

void resize_function__RFStatus__rfband(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<septentrio_gnss_driver::msg::RFBand> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RFStatus_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::RFStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "block_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<septentrio_gnss_driver::msg::BlockHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::RFStatus, block_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::RFStatus, n),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sb_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::RFStatus, sb_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::RFStatus, flags),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfband",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<septentrio_gnss_driver::msg::RFBand>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::RFStatus, rfband),  // bytes offset in struct
    nullptr,  // default value
    size_function__RFStatus__rfband,  // size() function pointer
    get_const_function__RFStatus__rfband,  // get_const(index) function pointer
    get_function__RFStatus__rfband,  // get(index) function pointer
    resize_function__RFStatus__rfband  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RFStatus_message_members = {
  "septentrio_gnss_driver::msg",  // message namespace
  "RFStatus",  // message name
  6,  // number of fields
  sizeof(septentrio_gnss_driver::msg::RFStatus),
  RFStatus_message_member_array,  // message members
  RFStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  RFStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RFStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RFStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace septentrio_gnss_driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<septentrio_gnss_driver::msg::RFStatus>()
{
  return &::septentrio_gnss_driver::msg::rosidl_typesupport_introspection_cpp::RFStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, septentrio_gnss_driver, msg, RFStatus)() {
  return &::septentrio_gnss_driver::msg::rosidl_typesupport_introspection_cpp::RFStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
