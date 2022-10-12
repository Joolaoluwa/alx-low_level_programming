#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given,
 * as a parameter on each element of an array.
 * @array: array of integers
 * @size: sixe og arrays
 * @action: function that prints an array og integers
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}