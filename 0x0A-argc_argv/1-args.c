#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it
 * @argc: number of argument(s)
 * @argv: array of characters
 * Return: 0 (Success)
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
