#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: counts the argument passed
 * @argv: a one dimensional array of characters
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
