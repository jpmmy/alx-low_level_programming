#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * function shows alphabets in reverse
 *
 * Return: return 0 for main
 */
int main(void)
{
	int w;
	int a;

	w = 'a';
	while (w <= 'z')
	{
		putchar(w);
		w = w + 1;
	}
	putchar('\n');
	return (0);
}
