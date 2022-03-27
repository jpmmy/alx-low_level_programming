#include"main.h"

/**
 * print_number - prints an integer
 * @n:number to be printed
 *
 * Return: return nothing
 *
 */

void print_number(int n)
{

	unsigned int x, y;
	int i;
	int aux = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	x = n;
	y = x;
	if (x > 9)
	{
		while (x >= 10)
		{
			aux = aux * 10;
			x = x / 10;
		}
		_putchar((y / aux) + '0');
		aux = aux / 10;

		for (i = aux; i >= 1; i = i / 10)
			_putchar((y / i) % 10 + '0');
	}
	else
		_putchar(x + '0');
}
