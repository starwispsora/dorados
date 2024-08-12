// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_example:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_H_
#define INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PLUS'.
enum
{
  interface_example__srv__ArithmeticOperator_Request__PLUS = 1
};

/// Constant 'MINUS'.
enum
{
  interface_example__srv__ArithmeticOperator_Request__MINUS = 2
};

/// Constant 'MULTIPLY'.
enum
{
  interface_example__srv__ArithmeticOperator_Request__MULTIPLY = 3
};

/// Constant 'DIVISION'.
enum
{
  interface_example__srv__ArithmeticOperator_Request__DIVISION = 4
};

/// Struct defined in srv/ArithmeticOperator in the package interface_example.
typedef struct interface_example__srv__ArithmeticOperator_Request
{
  int8_t arithmetic_operator;
} interface_example__srv__ArithmeticOperator_Request;

// Struct for a sequence of interface_example__srv__ArithmeticOperator_Request.
typedef struct interface_example__srv__ArithmeticOperator_Request__Sequence
{
  interface_example__srv__ArithmeticOperator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_example__srv__ArithmeticOperator_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ArithmeticOperator in the package interface_example.
typedef struct interface_example__srv__ArithmeticOperator_Response
{
  float arithmetic_result;
} interface_example__srv__ArithmeticOperator_Response;

// Struct for a sequence of interface_example__srv__ArithmeticOperator_Response.
typedef struct interface_example__srv__ArithmeticOperator_Response__Sequence
{
  interface_example__srv__ArithmeticOperator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_example__srv__ArithmeticOperator_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_EXAMPLE__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_H_
