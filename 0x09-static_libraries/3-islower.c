#include "main.h"

/**
 * _islower - Entry point
 * Description: checks if a character is lowercase
 * @c: the integer value it recieves
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		/* refer int c*/
		if (c == ch)
			return (1);
	}

	return (0);
}
