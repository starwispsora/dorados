// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_H_
#define INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ArithmeticArgument in the package interface_example.
typedef struct interface_example__msg__ArithmeticArgument
{
  float argument_a;
  float argument_b;
} interface_example__msg__ArithmeticArgument;

// Struct for a sequence of interface_example__msg__ArithmeticArgument.
typedef struct interface_example__msg__ArithmeticArgument__Sequence
{
  interface_example__msg__ArithmeticArgument * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_example__msg__ArithmeticArgument__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_EXAMPLE__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_H_
