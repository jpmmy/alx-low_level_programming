#include "main.h"
/**
 * times_table - prints table
 *
 * function prints the 9 times table
 *
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	for (; i <= 9 ; i++)
	{
		for (; j <= 9 ; j++)
		{
			if (j == 0)
			{
				k = i * j;
				_putchar('0' + k);
			}
			else
			{
				k = i * j;
				_mo9(k);
			}
		}
		_putchar('\n');
		j = 0;
	}
}

/**
 * _mo9 - prints table
 * @num1:param 1
 *
 * function prints the 9 times table sub function
 *
 * Return: return 0
 */

int _mo9(int num1)
{
	int f;
	int l;

	if (num1 >= 10)
	{
		l = num1 % 10;
		f = num1 / 10;
		_putchar(',');
		_putchar(' ');
		_putchar('0' + f);
		_putchar('0' + l);
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + num1);

	}
return (0);
}
