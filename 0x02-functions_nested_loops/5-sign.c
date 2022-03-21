#include"main.h"
/**
 * print_sign - prints sign of a number
 * @n: character to be checked
 *
 * prints sign of a number
 *
 * Return: return 1 if n > 0 , return 0 n = 0 and return -1 if n < 0
 * also print + 0 and - respectively
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		 _putchar('+');
	} else if (n < 0)
	{
		x = -1;
		_putchar('-');
	} else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	return (x);
}
