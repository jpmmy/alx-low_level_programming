#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * function that prints numbers less than 10
 *
 * Return: return 0 for main
 */
int main(void)
{
	int w;
	int a;

	w = '0';
	a = 0;
	while (a < 10)
	{
		putchar(w);
		a = a + 1;
		w = w + 1;
	}
	putchar('\n');
	return (0);
}
