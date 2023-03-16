#include "main.h"
#include <stdlib.h>

/**
 * _calloc - writes a function that allocates memory for an array
 * using malloc.
 * @nmemb: allocates memory for array
 * @size: allocates the element of size of array
 * Return: a pointer to the allocatef memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;

	return (a);
}
