#include "main.h"
#include <stdlib.h>

/**
 * _strdup - writes a function that returns to a pointer to a newly
 * allocated space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: an input pointer of the string
 * Return: NULL if str = NULL . On success the funtion returns
 * a pointer to duplicated string
 */
char *_strdup(char *str)
{
	int a, b;
	char *c;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (*(str + a) != '\0')
	{
		a++;
	}
	c = malloc(sizeof(char) * a + 1);

	if (c == NULL)
		return (NULL);

	b =  0;
	while (str[b] != '\0')
	{
		c[b] = str[b];
		b++;
	}
	c[b] = '\0';
	return (c);
}
