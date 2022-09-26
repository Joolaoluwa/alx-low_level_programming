#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: destination memory location
 * @b: source character recieved
 * @n: number of bytes filled in memory
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
