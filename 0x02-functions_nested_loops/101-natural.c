#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int n, c = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			c += n
		}
		n++;
	}
	printf("%d \n", c);
	return (0);
}
