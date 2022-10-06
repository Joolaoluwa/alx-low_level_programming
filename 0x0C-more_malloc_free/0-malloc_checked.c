#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Returns a pointer to the allocated memory
 * function should cause normal process termination with
 * a status value of 98
 * @b: integer value recieved
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
