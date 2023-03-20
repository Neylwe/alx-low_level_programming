# 0x0D. C - Preprocessor

# Description

## Preprocessor
- a preprocessor (or precompiler) is a program that processes its input data to produce output that is used as input in another program.
- It is a macro processor that is used automatically by the C compiler to transform your program before actual compilation.

## Guard
- an #include guard, sometimes called a macro guard, header guard or file guard, is a particular construct used to avoid the problem of double inclusion when dealing with the include directive.
- The code guards protect against multiple inclusion in a single transaction, but does not protect against multiple inclusion when two different object files are compiled separately and subsequently linked after.

# Learning objectives 
- What are macros and how to use them
- What are the most common predefined macros
- How to include guard in your header files

# Mandatory Tasks
0. Object-like Macro
- Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

1. Pi
- Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

2. File name
- Write a program that prints the name of the file it was compiled from, followed by a new line.

3. Function-like macro
- Write a function-like macro ABS(x) that computes the absolute value of a number x.

4. SUM
- Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
