#include "main.h"

/**
 * print_number - funcction that prints an integer
 * @n: an input integer
 * Return: void
 */
void print_number(int n)
{
	int a;
	int b;
	int count;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}
	while (b > 9)
	{
	b /= 10;
	count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
	_putchar (((a / count) % 10) + 48);
	}
}
