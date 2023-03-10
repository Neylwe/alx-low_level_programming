#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: - destination of string copied
 * @src: source of string to be copied
 * @n: input integer
 * Return: string destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
	dest[a] = '\0';
	}
	return (dest);
}
