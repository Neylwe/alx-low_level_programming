#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates the first occurrence of the substring
 * @haystack: input string to search in
 * @needle: input string to locate into haystack string
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
