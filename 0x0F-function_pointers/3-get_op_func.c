#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: the operator passed as an argument to the program
 * Return: a pointer to the function that corresponds to the operator given as
 * a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int a  = 0;

	while (ops[a].op) /* while ops[a] contains a valid character */
	{
		if (*ops[a].op == *s && s[1] == '\0') /* user input */
			return (ops[a].f);
		a++;
	}
	return (NULL);
}
