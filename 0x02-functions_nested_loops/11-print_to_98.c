#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * Description: prints all natural numbers from n to 98
 * Return: collection of numbers
 * @n: integer value recieved
 */
void print_to_98(int n)
{
	for (n <= 98; n++)
	{
		printf("%d", n);

		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}

	for (n >= 98; n--)
	{
		printf("%d", n);

		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
