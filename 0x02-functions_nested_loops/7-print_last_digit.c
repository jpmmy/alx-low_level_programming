#include "main.h"
/**
 * print_last_digit - prints the last digit
 *
 * prints the last digit of a given number
 *
 * Return: return 0
 */
int print_last_digit(int n)
{
	int x;
	int y;

	if(n<0)
	{
	x = n%10;
	x = -1*x;
	} else
	{
	x = n%10;
	}
	_putchar('0' + x);
	return (x);
}
