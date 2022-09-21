#include "main.h"

/**
 * _strncat -  a function that concatenates two strings
 * @dest: holding string
 * @src: adding string
 * @n:  bytes from src
 * Return: A concatenated string with the required number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = 0;

	return (dest);
}
