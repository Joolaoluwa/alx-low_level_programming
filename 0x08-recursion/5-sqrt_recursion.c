#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number
 * @c: iterator
 * Return: square root or -1
 */

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c % (n / c) == 0)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer value recieved
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
