#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * function prints numbers in hexadecimal
 *
 * Return: return 0 for main
 */
int main(void)
{
	int a;
	int b;
	int w;

	w = 'a';
	b = '0';
	a = 0;
	while (a <= 16)
	{
		if (a < 10)
		{
		putchar(b);
		b = b + 1;
		a = a + 1;
		}
		else if (a >= 10 && a <= 16)
		{
		putchar(w);
		w = w + 1;
		a = a + 1;
		}
	}
	putchar('\n');
	return (0);
}
