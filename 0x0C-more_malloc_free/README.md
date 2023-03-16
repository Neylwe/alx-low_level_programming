# 0x0C. C - More malloc, freee

# Description

## Malloc
- Allocates memory of a requsted size and returns a pointer to the beginning of the allocated block. To hold this returned pointer, we must create a variable.

# Free
- When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

# Learning Objectives 
- How to use the exit function
- What are the functions calloc and realloc from the standard library and how to use them .

# Mandatory Tasks

0. Trust no one
- Write a function that allocates memory using malloc.
- Prototype: void *malloc_checked(unsigned int b)

1. string_nconcat
- Write a function that concatenates two strings.
- Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n)

2. _calloc
- Prototype: void *_calloc(unsigned int nmemb, unsigned int size)
- The _calloc function allocates memory for an array of nmemb elements 

3. array_range
- Write a function that creates an array of integers.
- Prototype: int *array_range(int min, int max)

# Advanced tasks

4. _realloc
- Write a function that reallocates a memory block using malloc and free
- Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

5. We must accept finite disappointment, but never lose infinite hope
- Write a program that multiplies two positive numbers.
