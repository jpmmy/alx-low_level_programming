#include <stdio.h>
/**
 * main - entry point
 *
 * function prints numbers less than 10
 *
 * Return: return 0 for main
 */
int main(void)
{
	int w;

	w = 0;
	while (w < 10)
	{
		printf("%d", w);
		w++;
	}
	putchar('\n');
	return (0);
}
