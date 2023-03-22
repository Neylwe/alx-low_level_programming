#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - program that print the opcodes of its own main function.
 * @s: Address of the main function.
 * @x: Number of bytes to print.
 **/
void print_opcodes(char *s, int x)
{
	int a;

	for (; a < x; a++)
	{
		printf("%.2hhx", s[a]);
		if (a < x - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - program that print the opcodes of its own main function.
 * @argc: argument counter
 * @argv: Argument values
 * Return: O (success).
 */
int main(int argc, char **argv)
{
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, b);
	return (0);
}
