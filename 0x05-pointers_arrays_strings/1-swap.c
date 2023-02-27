#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer input pointer
 * @b: second integer input pointer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
