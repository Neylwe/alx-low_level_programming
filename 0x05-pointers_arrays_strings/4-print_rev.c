#include "main.h"

/**
 * print_rev - a function tha prints a string in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	while (a)
		_putchar(s[--a]);

	_putchar('\n');
}
