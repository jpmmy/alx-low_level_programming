#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * function shows alphabets in Upper case
 *
 * Return: return 0 for main
 */
int main(void)
{
	int w;
	int v;

	w = 'a';
	v = 'A';
	while (w <= 'z')
	{
		putchar(w);
		w = w + 1;
	}
	while (v <= 'Z')
	{
		putchar(v);
		v = v + 1;
	}
	putchar('\n');
	return (0);
}
