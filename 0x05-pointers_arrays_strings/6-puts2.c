#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string value recieved
 * Return: void
 */

void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0';)
		len++;
	
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
