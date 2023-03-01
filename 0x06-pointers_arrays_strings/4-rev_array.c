#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an input array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int aux;

	while (b < n--)
	{
		aux = a[b];
		a[b++] = a[n];
		a[n] = aux;
	}
}
