#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string recieved
 * @src: second string recieved
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int count1, count2;

	for (count1 = 0; str[dest] != '\0';)
		count1++;

	for (count2 = 0; str[src] != '\0';)
	{
		dest[count1] = src[count2];
		count2++;
		count1++;
	}

	dest[count1] = '\0';

	return (dest);
}
