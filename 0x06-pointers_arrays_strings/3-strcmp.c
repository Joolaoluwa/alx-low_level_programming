#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first stringf vlaue recieved
 * @s2: second string value recieved
 * Return: an integer value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s[i] != '\0';)
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
