#include <stdio.h>

/**
 * main - function finds and prints the largest prime factor of the number
 * 612852475143 followed by a new line.
 * Return: 0;
 */

int main(void)
{
	long y = 612852475143;
	long x = 2;
	long l_prim = 0;

	while (y != 1)
	{
		if (y % x == 0)
		{
			y = y / x;
			l_prim = x;
		}
		x += 1;
	}
	printf("%ld\n", l_prim);
	return (0);
}
