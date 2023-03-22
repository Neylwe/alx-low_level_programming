#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - writes a function that executes a function given
 * as a parameter on each element of an array.
 * @array: array to iterator
 * @size: size of array
 * @action: function to iterate
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
