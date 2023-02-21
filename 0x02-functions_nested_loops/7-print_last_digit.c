#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: integer to find the last digit place
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
