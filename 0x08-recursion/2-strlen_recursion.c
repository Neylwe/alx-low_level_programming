#include "main.h"

/**
 * _strlen_recursion - functions returns the length of a string
 * @s: an input string
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}
	return (a);
}
