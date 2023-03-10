#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: an input string
 * Return: always 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}
	return (a);
}
