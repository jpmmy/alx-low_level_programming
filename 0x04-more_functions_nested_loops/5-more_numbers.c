#include"main.h"

/**
 * more_numbers - function to print 10 times the numbers
 * from 0 to 14 followed by a new line
 *
 * Return: return nothing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if( j>9)
				_putchar('0' + (j/10));
			_putchar('0' + (j%10));
		}
		_putchar('\n');
	}

}
