#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer,
 * to a newly allocated space in memory,
 * a function that returns a pointer.
 * to a newly allocated space in memory.
 * @str: string value recieved
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
	{
		return ('\0');
	}

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}

	s = malloc(sizeof(*s) * (i + 1));
	if (s == NULL)
	{
		return ('\0');
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		s[j] = str[j];
	}
	return (s);
	free(s);
}
