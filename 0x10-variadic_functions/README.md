# 0x10. C - Variadic functions

# Description

## Stdarg.h
- stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.
- It provides facilities for stepping through a list of function arguments of unknown number and type.

## Variadic Function
- A variadic function is one that takes a variable number of arguments.
- A common example is the printf() function defined in the <stdio. h> header. 
- The declaration of a variadic function uses ellipses as the last parameter.

## Const Keyword
- allows a programmer to tell the compiler that a particular variable should not be modified after the initial assignment in its declaration.

# Learning objectives
- What are variadic functions
- How to use va_start, va_arg and va_end macros
- Why and how to use the const type qualifier

# Mandatory Tasks
0. Beauty is variable, ugliness is constant
- Write a function that returns the sum of all its parameters.
- Prototype: int sum_them_all(const unsigned int n, ...);

1. To be is to be the value of a variable
- Write a function that prints numbers, followed by a new line.
- Prototype: void print_numbers(const char *separator, const unsigned int n, ...)

2. One woman's constant is another woman's variable
- Write a function that prints strings, followed by a new line.
- Prototype: void print_strings(const char *separator, const unsigned int n, ...)

3. To be is a to be the value of a variable
- Write a function that prints anything.
- Prototype: void print_all(const char * const format, ...)
