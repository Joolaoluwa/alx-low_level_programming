#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: integer value recieved(size of the array)
 * @c: character recieved
 * Return: an array of characters
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return ('\0');
	}

	s = malloc(sizeof(*s) * size);

	if (s == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
