#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - writes a function that searches for an integer
 * @array: pointer to array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the cmp
 * function does not return 0. if no element matches, return -1.
 * if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (a = 0; a < size; a++)

		{
			cmp(array[a]);
			if (cmp(array[a]) == 1)
			{
				return (a);
			}
		}
	}
	return (-1);
}
