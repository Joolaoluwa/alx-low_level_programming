#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: counts the amount of integers passed
 * @argv: a one dimensional array of characters
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int c;
	int t = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (c = 1; c < argc; c++)
		{
			if (!isdigit(*argv[c]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				t += atoi(argv[c]);
			}
		}
	}
	printf("%d\n", t);

	return (0);
}
