#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - writes a concatenates 2 strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: An input interger of number of string to cocatenate
 * Return: pointer to concatenate two string or return NULL
 * if dunction fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, len1 = 0, len2 = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;

	while (*(s2 + len2) != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	new_str = malloc(sizeof(char) * (len1 + n + 1));

	if (new_str == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		new_str[a] = s1[a];

	for (b = 0; b < n; a++, b++)
		new_str[a] = s2[b];

	new_str[a] = '\0';

	return (new_str);
}
