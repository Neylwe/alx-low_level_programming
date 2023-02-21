#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 * followed by new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
