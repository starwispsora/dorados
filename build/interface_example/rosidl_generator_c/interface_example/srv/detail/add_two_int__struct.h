// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_example:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_EXAMPLE__SRV__DETAIL__ADD_TWO_INT__STRUCT_H_
#define INTERFACE_EXAMPLE__SRV__DETAIL__ADD_TWO_INT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInt in the package interface_example.
typedef struct interface_example__srv__AddTwoInt_Request
{
  int8_t a;
  int8_t b;
} interface_example__srv__AddTwoInt_Request;

// Struct for a sequence of interface_example__srv__AddTwoInt_Request.
typedef struct interface_example__srv__AddTwoInt_Request__Sequence
{
  interface_example__srv__AddTwoInt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_example__srv__AddTwoInt_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoInt in the package interface_example.
typedef struct interface_example__srv__AddTwoInt_Response
{
  int8_t sum;
} interface_example__srv__AddTwoInt_Response;

// Struct for a sequence of interface_example__srv__AddTwoInt_Response.
typedef struct interface_example__srv__AddTwoInt_Response__Sequence
{
  interface_example__srv__AddTwoInt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_example__srv__AddTwoInt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_EXAMPLE__SRV__DETAIL__ADD_TWO_INT__STRUCT_H_
