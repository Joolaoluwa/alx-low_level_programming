#include "main.h"
#include <stdio.h>

/**
 * print_array - n elements of an array of integers
 * @a: integer value recieved
 * @n: integer value recieved
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
