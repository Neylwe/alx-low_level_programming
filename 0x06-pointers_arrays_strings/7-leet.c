#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int a;
	int b;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[a])
	{

	for (b = 0; b < 10; b++)
	if (s[a] == str[b])
	s[a] = subs[b];

	a++;
	}

	return (s);
}
