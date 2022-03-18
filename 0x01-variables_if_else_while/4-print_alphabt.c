#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * function shows alphabets except q and e
 *
 * Return: return 0 for main
 */
int main(void)
{
	int w;

	w = 'a';
	while (w <= 'z')
	{
		if (w != 'e' && w != 'q')
		{
			putchar(w);
		}
		w = w + 1;
	}
	putchar('\n');
	return (0);
}
