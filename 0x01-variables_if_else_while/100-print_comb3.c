#include <stdio.h>

/** 
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a,b;

       	for (int n = '0'; n < '9'; n += 1)
	{
		for (int m = '1'; m <= '9'; m++)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n != '8' || m != '9')
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return 0;
}
