#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - writes a function that returns the sum of all it parameters
 * @n: numbers of parameters
 * Return: sum of all parameters. If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int a, sum = 0;

	va_start(nums, n);

	for (a = 0; a < n; a++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
