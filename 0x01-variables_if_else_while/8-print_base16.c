#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, letter;

	for (num = 0; num < 10; num++)
		putchar(num % 10 + '0');
	for (letter = 97; letter < 102; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
