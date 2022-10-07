#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string value recieved
 * @s2: seconf string value recieved
 * @n: number of bytes to be copied
 * Return: concatenated string of s1 and n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sconcat;
	int ls1, ls2, lout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0';)
		ls1++;

	for (ls2 = 0; s2[ls2] != '\0';)
		ls2++;

	if (n > ls2)
		n = ls2;
	
	lout = ls1 + n;

	sconcat = malloc(sizeof(*sconcat) * (lout + 1));

	if (sconcat == NULL)
		return (NULL);

	for (i = 0; i < lout; i++)
	{
		if (i < ls1)
			sconcat[i] = s1[i];
		else
			sconcat[i] = s2[i - ls1];
	}

	sconcat[i] = '\0';

	return (sconcat);
}
