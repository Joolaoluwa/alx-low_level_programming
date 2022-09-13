#include "main.h"

/**
 * _abs(int) - Entry point
 * Description: computes the absolute value of an integer
 * @c: integer value recieved
 * Return: positive value of c
 */

int _abs(int c)
{
	if (c > 0)
	{
		return c;
	}
	else if (c < 0)
	{
		c *= -1;
		return c;
	}
	return 0;
}
