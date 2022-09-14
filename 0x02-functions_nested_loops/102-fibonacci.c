#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 0;
	long n = 1, o = 2;

	while (m < 50)
	{
		if (m == 0)
		{
			printf("%ld", n);
		}
		else if (m == 1)
		{
			printf(", %ld", o);
		}
		else
		{
			o += n;
			n = o - n;
			printf(", %ld", o);
		}
		++m;
	}
	printf("\n");
	return (0);
}
