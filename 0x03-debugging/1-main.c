#include <stdio.h>

/**
 * main - causes an infinite loopp
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);	/*i is not incrementing in this loop */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
