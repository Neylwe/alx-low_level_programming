#include "main.h"

/**
 * factorial - function that retures the factorial of a given number
 * @n: integer
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
