#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Writes a function that prints a name
 * @name: pointer string name to print
 * @f: pointer function that prints
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)

		f(name);
}
