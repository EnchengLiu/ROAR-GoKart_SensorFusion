// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from septentrio_gnss_driver:msg/BaseVectorCart.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "septentrio_gnss_driver/msg/detail/base_vector_cart__struct.hpp"
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

void BaseVectorCart_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) septentrio_gnss_driver::msg::BaseVectorCart(_init);
}

void BaseVectorCart_fini_function(void * message_memory)
{
  auto typed_message = static_cast<septentrio_gnss_driver::msg::BaseVectorCart *>(message_memory);
  typed_message->~BaseVectorCart();
}

size_t size_function__BaseVectorCart__vector_info_cart(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<septentrio_gnss_driver::msg::VectorInfoCart> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BaseVectorCart__vector_info_cart(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<septentrio_gnss_driver::msg::VectorInfoCart> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseVectorCart__vector_info_cart(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<septentrio_gnss_driver::msg::VectorInfoCart> *>(untyped_member);
  return &member[index];
}

void resize_function__BaseVectorCart__vector_info_cart(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<septentrio_gnss_driver::msg::VectorInfoCart> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BaseVectorCart_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::BaseVectorCart, header),  // bytes offset in struct
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
    offsetof(septentrio_gnss_driver::msg::BaseVectorCart, block_header),  // bytes offset in struct
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
    offsetof(septentrio_gnss_driver::msg::BaseVectorCart, n),  // bytes offset in struct
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
    offsetof(septentrio_gnss_driver::msg::BaseVectorCart, sb_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vector_info_cart",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<septentrio_gnss_driver::msg::VectorInfoCart>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(septentrio_gnss_driver::msg::BaseVectorCart, vector_info_cart),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseVectorCart__vector_info_cart,  // size() function pointer
    get_const_function__BaseVectorCart__vector_info_cart,  // get_const(index) function pointer
    get_function__BaseVectorCart__vector_info_cart,  // get(index) function pointer
    resize_function__BaseVectorCart__vector_info_cart  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BaseVectorCart_message_members = {
  "septentrio_gnss_driver::msg",  // message namespace
  "BaseVectorCart",  // message name
  5,  // number of fields
  sizeof(septentrio_gnss_driver::msg::BaseVectorCart),
  BaseVectorCart_message_member_array,  // message members
  BaseVectorCart_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseVectorCart_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BaseVectorCart_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BaseVectorCart_message_members,
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
get_message_type_support_handle<septentrio_gnss_driver::msg::BaseVectorCart>()
{
  return &::septentrio_gnss_driver::msg::rosidl_typesupport_introspection_cpp::BaseVectorCart_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, septentrio_gnss_driver, msg, BaseVectorCart)() {
  return &::septentrio_gnss_driver::msg::rosidl_typesupport_introspection_cpp::BaseVectorCart_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
