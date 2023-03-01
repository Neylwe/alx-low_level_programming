#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: destination string concatenated
 * @src: source array string concatenated
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (temp);
}
