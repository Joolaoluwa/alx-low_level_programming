#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*f_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f_ptr = get_op_func(argv[2]);
	if (f_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	c = f_ptr(a, b);
	printf("%d\n", c);
	return (0);
}
