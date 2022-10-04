#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string recieved
 * @s2: second string recieved
 * Return: return a pointer that contains s1 and s2 to memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, limit;
	char *s;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	for (i = 0; s1[i] != '\0';)
		i++;

	for (j = 0; s2[j] != '\0';)
		j++;
	
	s = malloc(sizeof(*s) * (i + j + 1));
	if (s = NULL)
		return ('\0');

	for (k = 0; k <= i; k++)
	{
		s[k] = s1[k];
	}

	for (limit = 0; limit <= j; k++, j++)
	{
		s[k] = s2[limit];
	}
	return (s);
	free(s);
}
