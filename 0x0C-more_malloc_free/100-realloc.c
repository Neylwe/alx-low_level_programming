#include "main.h"
#include <stdlib.h>

/**
 * _realloc - writes a function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: void pointer to new memory allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int b;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	a = malloc(new_size);

	if (a == NULL)
		return (NULL);
	for (b = 0; b < old_size && b < new_size; b++)
		a[b] = ((char *)ptr)[b];

	free(ptr);

	return (a);
}
