#include"main.h"
#include<stdio.h>
/**
 * print_number - Write a function that prints an integer.
 * @n: string to be converted
 *
 * Return: return nothing.
 */
void print_number(int n)
{
	int c, i, rv, te;

	rv = 0;
	te = n;
	if (n == 0)
	{
		_putchar('0' + n);
	}
	else if (n > 0)
	{
		te = n;
		rv = _print_rev(te);
		for (i = 0; rv > 0; i++)
		{
			c = rv % 10;
			_putchar('0' + c);
			rv = rv / 10;
		}
	}
	else
	{
		te = -(n);
		rv = _print_rev(te);
		_putchar('-');
		for (i = 0; rv > 0; i++)
		{
			c = rv % 10;
			_putchar('0' + c);
			rv = rv / 10;
		}
	}
}
/**
 * _print_rev - Write a function that reverses an integer.
 * @n: integer to be reversed
 *
 * Return: return n.
 */
int _print_rev(int n)
{
	int rd, rv;

	rv = 0;
	while (n != 0)
	{
		rd = n % 10;
		rv = rv * 10 + rd;
		n /= 10;
	}
	return (rv);
}
