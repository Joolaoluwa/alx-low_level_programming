#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks if alphabet
 * @c: integer value recieved
 * Return 1 if true. 0 if false
 */
int _isalpha(int c)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		if(c == j)
			return (1);
	}

	return (0);
}
