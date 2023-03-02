#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: an input string
 * Return: encoded string *s
 */
char *rot13(char *s)
{
	int count = 0;
	int a;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
	for (a = 0; a < 52; a++)
	{
	if (*(s + count) == alphabet[a])
	{
	*(s + count) = rot13[a];
	break;
	}
	}
	count++;
	}

	return (s);
}
