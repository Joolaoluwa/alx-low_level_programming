#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string value recieved
 * Return: string length
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
