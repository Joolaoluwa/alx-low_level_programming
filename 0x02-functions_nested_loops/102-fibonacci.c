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

	while (i < 50)
	{
		if (i == 0)
		{
			printf("ld", n);
		}
		else if (i == 1)
		{	
			printf("ld", o);
		}
		else
		{
			o += n;
			n = o - n;
			printf(", %ld", o);
		}
		++i;
	}
	printf("\n");
	return (0);
}
