#include "main.h"

/**
 * _puts_recursion - writes a function that prints a string
 * followed by a new line
 * @s: input string printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
