#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string value recieved
 * Return: void
 */

void rev_string(char *s)
{
	int count, length, middle;
	char temp;

	for (length = 0; s[length] != '\0';)
		length++;

	middle = length / 2;
	for (count = 0; count < middle; count++)
	{
		temp = s[count];
		s[count] = s[length - 1 - count];
		s[length - 1 - count] = temp;
	}
}
