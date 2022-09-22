#include "main.h"

/**
 * reverse_array - reverses the integers in an array
 * @a: array value recieved
 * @n: length of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, middle, temp;

	i = n - 1;

	middle = n / 2;
	for (j = 0; j < middle; j++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i--] = temp;
	}
}
