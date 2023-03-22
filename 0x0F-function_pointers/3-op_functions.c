#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Function that adds two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}



/**
 * op_sub - Function that subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference between two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}



/**
 * op_mul - function that multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the result product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}



/**
 * op_div - function that divides an integer by another
 * @a: first integer
 * @b: second integer
 * Return: returns the result of the division of the two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}



/**
 * op_mod - function that divides two intgers and provides the remainder
 * @a: first integer
 * @b: second integer
 * Return: the remainder of the division between two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
