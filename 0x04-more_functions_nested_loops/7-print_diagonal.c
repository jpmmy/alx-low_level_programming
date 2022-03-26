#include"main.h"

/**
 * print_diagonal - function that draws diagonal line in terminal
 * @n:number of times '\' is printed
 *
 * Return: return nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			_putchar('\\');
		}
		else
		{
		_putchar('\n');
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		}
	}
	_putchar('\n');
}
else
{
_putchar('\n');
}
}
