#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: an input string
 * Return: void
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
		a++;

	b -= 1;

	for (; b <= a; b += 2)
		_putchar(str[b]);

	_putchar('\n');
}
