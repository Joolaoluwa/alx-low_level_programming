#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int l1;
	long long int l2;
	float f;
	char c;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l1));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(l2));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
