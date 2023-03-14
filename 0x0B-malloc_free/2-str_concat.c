#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first input string pointer
 * @s2: second input string pointer
 * Return: A pointer that concatenates two strings
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *e;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;
	e = malloc(sizeof(char) * a + b + 1);
	if (e == NULL)
		return (NULL);
	c = 0;
	while (s1[c] != '\0')
	{
		e[c] = s1[c];
		c++;
	}
	d = 0;
	while (s2[d] != '\0')
	{
		e[c] = s2[d];
		c++;
		d++;
	}

	e[c] = '\0';
	return (e);
}
