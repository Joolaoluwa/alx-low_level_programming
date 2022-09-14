#include "main.h"

/**
 * times_table - Entry point
 * Description: prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int row, col, product, tens, unit;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			product = row * col;
			tens = product / 10;
			unit = product % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(unit + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(unit + '0');
			}
		}
		_putchar('\n');
	}
}
