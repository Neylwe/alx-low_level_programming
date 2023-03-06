#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: double pointer to string
 * @to: pointer to the sring
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
