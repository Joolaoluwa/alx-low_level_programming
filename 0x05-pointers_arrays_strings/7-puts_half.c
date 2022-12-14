#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: string value recieved
 * Return: void
 */

void puts_half(char *str)
{
	int n, len, i;

	for (len = 0; str[len] != '\0';)
		len++;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (len % 2 != 0)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
