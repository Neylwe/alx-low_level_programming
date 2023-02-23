#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			if (a % 3 == 0)
			{
				printf("Fizz");
			}
			if (a % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", a);
		}
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
