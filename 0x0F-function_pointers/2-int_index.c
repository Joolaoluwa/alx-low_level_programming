#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function to the function to be,
 * used to compare values
 * Return: returns the index of the first element,
 * for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				return (i);
		}
	}

	return (-1);
}
