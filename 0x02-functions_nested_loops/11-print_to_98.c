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
	int m = n;

	for (m; m <= 98; m++)
	{
		printf("%d", m);

		if (m != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}

	for (m; m >= 98; m--)
	{
		printf("%d", m);

		if (m != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
