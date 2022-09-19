#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * *a - first pointer variable
 * *b - second pointer variable
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
