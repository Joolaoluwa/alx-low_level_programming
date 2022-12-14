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
	int cents, coins = 0;

	cents = atoi(argv[1]);

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (cents > 0)
		{
			if (cents % 25 < cents)
			{
				cents -= 25;
				coins++;
			}
			else if (cents % 10 < cents)
			{
				cents -= 10;
				coins++;
			}
			else if (cents % 5 < cents)
			{
				cents -= 5;
				coins++;
			}
			else if (cents % 2 < cents)
			{
				cents -= 2;
				coins++;
			}
			else if (cents % 1 < cents)
			{
				cents -= 1;
				coins++;
			}
		}
		printf("%d\n", coins);
	}
	return (0);
}
