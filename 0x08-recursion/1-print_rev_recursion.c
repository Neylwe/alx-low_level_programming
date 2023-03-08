#include "main.h"

/**
 * _print_rev_recursion - writes a function that prints a string in reverse
 * @s: input string printed in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
