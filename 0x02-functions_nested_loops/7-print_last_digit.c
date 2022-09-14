#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: prints the last digit of a number
 * @n: integer value recieved
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (n < 0)
		m *= -1;

	_putchar(m + '0');

	return (m);
}
