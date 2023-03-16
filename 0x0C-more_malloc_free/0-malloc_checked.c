#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Writes a function that alloctaes memory using malloc
 * @b: unsigned input integer in argument size of memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
