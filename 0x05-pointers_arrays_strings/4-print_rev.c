#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string value recieved
 * Return: void
 */

void print_rev(char *s)
{
	int count, total, rev;


	for (count = 0; s[count] != '\0';)
		count++;

	total = count;
	for (rev = total - 1; rev >= 0; rev--)
		_putchar(s[rev]);

	_putchar('\n');
}
