#include "main.h"

/**
 * _isupper - Entry point
 * Description: checks for uppercase character
 * @c: integer value recieved
 * Return: 1 if uppercase. 0 if otherwise
 */
int _isupper(int c)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}

	return (0);
}
