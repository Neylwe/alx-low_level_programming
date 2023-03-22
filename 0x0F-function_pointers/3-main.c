#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - writes a program that performs simple operations
 * @argc: argumets counter
 * @argv: argument values
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(a, b);
	printf("%d\n", c);
	return (0);
}
