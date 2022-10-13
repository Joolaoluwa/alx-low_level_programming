#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the subtraction of a and b
 * @a: first integer
 * @b: second integer
 * Return: returns the subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: returns product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function returns the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: returns the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function returns the remainder of,
 * the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: returns the remainder of,
 * the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
