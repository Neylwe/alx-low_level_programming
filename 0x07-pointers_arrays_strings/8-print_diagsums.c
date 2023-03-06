#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: square matrix of integers
 * @size: input integer with the size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b = 0, max = size * size, sum1 = 0, sum2 = 0;

	for (; b < max; b += size + 1)
	sum1 += a[b];

	for (b = size - 1; b < max - 1; b += size - 1)
		sum2 += a[b];
	printf("%d, %d\n", sum1, sum2);
}
