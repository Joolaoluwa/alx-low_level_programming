#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, c = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			c += n;
		n++;
	}
	printf("%d", c);
	return (0);
}
