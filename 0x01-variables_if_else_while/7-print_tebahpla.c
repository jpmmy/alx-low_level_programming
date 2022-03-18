#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * function that alphabets in reverse
 *
 * Return: return 0 for main
 */
int main(void)
{
	int w;

	w = 'z';
	while (w >= 'a')
	{
		putchar(w);
		w = w - 1;
	}
	putchar('\n');
	return (0);
}
