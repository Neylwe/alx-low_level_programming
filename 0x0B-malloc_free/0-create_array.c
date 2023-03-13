#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an arracy of chars,
 * and initializes it with a specific char.
 * @size: size oof array
 * @c: character to initialize arrays
 * Return: a pointer to the array, or NULL if = 0
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int a = 0;

	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (a < size)
	{
		a[b] = c;
		a++;
	}
	return (b);
}

