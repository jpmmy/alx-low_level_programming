#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * function prints single digit numbers combination
 *
 * Return: return 0 for main
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	j = '0';
	k = ',';
	l = ' ';
	for (i = 0; i < 10; i++)
	{
	putchar(j);
		if (i < 9)
		{
			putchar(k);
			putchar(l);
		}
	       j = j + 1;
	}
	putchar('\n');
	return (0);
}
