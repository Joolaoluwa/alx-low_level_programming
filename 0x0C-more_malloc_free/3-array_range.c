#include "main.h"
#include <stdio.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
	}

	return (arr);
}
