#include "main.h"

/**
 * print-rev - prints a string, in reverse
 * @s: string value recieved
 * Return: void
 */

void print_rev(char *s)
{
	int i, j, l;

	i = 0;
	while (s[i] != '\0')
		i++;

	j = i;
	for (l = j - 1; l >= 0; l--)
		_putchar(s[l]);
}
