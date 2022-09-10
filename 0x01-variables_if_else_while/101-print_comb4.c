#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a < '8'; a++)
	{
		for (b = '1'; b < '9'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (b < c && a < b)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7' || b != '8' || c != '9')
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
