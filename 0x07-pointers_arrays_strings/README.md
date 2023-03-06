# 0x07. C - Even more pointers, arrays and strings

# Description

# Pointers
- A pointer is a variable which contains a memory address.

# Arrays
- Are contiguous memory ares that hold a number of values of the same type. 
They are used to store multiple values in a single variable, instead of declaring seperate
variables for each value.

# Strings
- Are one-dimensional array of characters terminated with a null character '\0'.

# Task objectives
- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

# Mandatory tasks

0. memset
- Writes a function that fills memory with a constant byte.
- Prototype: char *_memset(char *s, char b, unsigned int n)

1. memcpy
- Write a function that copies memory area.
- Prototype: char *_memcpy(char *dest, char *src, unsigned int n)

2. strchr
- Write a function that locates a character in a string.
- Prototype: char *_strchr(char *s, char c)

3. strspn
- Write a function that gets the length of a prefix substring
- Prototype: unsigned int _strspn(char *s, char *accept)

4. strpbrk
- Write a function that searches a string for any of a set of bytes.
- Prototype: char *_strpbrk(char *s, char *accept)

5. strstr
- Write a function that locates a substring.
- Prototype: char *_strstr(char *haystack, char *needle)

6. Chess is mental torture
- Write a function that prints the chessboard.
- Prototype: void print_chessboard(char (*a)[8])

7. The line of life is a ragged diagonal between duty and desire
- Write a function that prints the sum of the two diagonals of a square matrix of integers.
- Prototype: void print_diagsums(int *a, int size)

# Advanced tasks

8. Double pointer, double fun
- Write a function that sets the value of a pointer to a char.
- Prototype: void set_string(char **s, char *to)

9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure
- Create a file that contains the password for the crackme2 executable.
- Your file should contain the exact password, no new line, no extra space
