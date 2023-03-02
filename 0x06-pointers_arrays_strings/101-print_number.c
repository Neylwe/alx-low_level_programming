#include "main.h"

/**
 * print_number - funcction that prints an integer
 * @n: an input integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int a1;

	if (n < 0)
	{
		a1 = -n;
		_putchar('-');
	} else
	{
		a1 = n;
	}
	if (a1 / 10)
		print_number(a1 / 10);

	_putchar((a1 % 10) + '0');
}
