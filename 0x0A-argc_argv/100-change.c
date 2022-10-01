#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: count number of argument passed
 * @argv: a one-dimensional array of characters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("0\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cents -= 1;
		}

		ncoins++;
	}
	printf("%d\n", ncoins);

	return (0);
}
