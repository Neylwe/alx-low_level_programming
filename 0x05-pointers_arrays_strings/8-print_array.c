#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: an input array
 * @n: number of elements of the array to be printed
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}

