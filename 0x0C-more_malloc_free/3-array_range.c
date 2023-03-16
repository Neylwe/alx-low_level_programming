#include "main.h"
#include <stdlib.h>

/**
 * array_range - writes a function that creates an array of intgers
 * @min: minimum start of range of values
 * @max: maximum range of values
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a, b;

	if (min > max)
		return (NULL);
	if (max - min == 0)
	{
		a = malloc(sizeof(int));
		a[0] = min;
	}
	else
	{
		a = malloc(sizeof(int) * (max - min + 1));
		if (a == NULL)
			return (NULL);
		for (b = 0; min <= max; b++, min++)
			a[b] = min;
	}
	return (a);
}
