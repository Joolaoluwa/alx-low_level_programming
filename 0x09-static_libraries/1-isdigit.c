#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: integer value recieved
 * Return: 1 if true. 0 if otherwise
 */

int _isdigit(int c)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (c == ch)
			return (1);
	}

	return (0);
}
