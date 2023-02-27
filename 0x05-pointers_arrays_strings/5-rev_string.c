#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: an input string
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	char d;

	while (s[b] != '\0')
	{
		b++;
	}
	c = b - 1;

	for (a = 0; a < b / 2; a++)
	{
		d = s[a];
		s[a] = s[c];
		s[c--] = d;
	}
}
