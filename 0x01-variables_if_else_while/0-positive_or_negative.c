#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * if condition to test positive and negative
 *
 * Return: return 0 for main
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
	printf("%d is 0\n", n);
	}
	else
	{
	printf("%d is positive\n", n);
	}
	return (0);
}
