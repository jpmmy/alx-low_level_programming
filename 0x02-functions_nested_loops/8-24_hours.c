#include"main.h"
/**
 * jack_bauer - prints every minute
 *
 * prints every minute of the 24 hour
 *
 * Return: return nothing
 */
void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	for (; i < 24 ; i++)
	{
		for (; j < 60 ; j++)
		{
		if (j < 10 && i < 10)
		{
		_0f(i, j);
		}
		else if (j >= 10 && i < 10)
		{
			_1f(i, j);
		}
		else if (j < 10 && i >= 10)
		{
		_2f(i, j);
		}
		else if (j >= 10 && i >= 10)
		{
		_3f(i, j);
		}
		}
		j = 0;
	}
}
/**
 * _0f  - prints every minute
 * @num1:param1
 * @num2:param2
 *
 * for if 1
 * Return: return nothing
 */
int _0f(int num1, int num2)
{
_putchar('0');
_putchar('0' + num1);
_putchar(':');
_putchar('0');
_putchar('0' + num2);
_putchar('\n');
return (0);
}
/**
 * _1f  - prints every minute
 * @num1:param1
 * @num2:param2
 * for if 2
 * Return: return nothing
 */
int _1f(int num1, int num2)
{
	int s;
	int u;
_putchar('0');
_putchar('0' + num1);
_putchar(':');
s = num2 % 10;
u = num2;
u = u / 10;
_putchar('0' + u);
_putchar('0' + s);
_putchar('\n');
return (0);
}
/**
 * _2f  - prints every minute
 * @num1:param1
 * @num2:param2
 * for if 3
 * Return: return nothing
 */
int _2f(int num1, int num2)
{
	int s;
	int u;
s = num1 % 10;
u = num1;
u = u / 10;
_putchar('0' + u);
_putchar('0' + s);
_putchar(':');
_putchar('0');
_putchar('0' + num2);
_putchar('\n');
return (0);
}
/**
 * _3f  - prints every minute
 * @num1:param1
 * @num2:param2
 * for if 4
 * Return: return nothing
 */
int _3f(int num1, int num2)
{
	int s;
	int u;
s = num1 % 10;
u = num1;
u = u / 10;
_putchar('0' + u);
_putchar('0' + s);
s = 0;
s = num2 % 10;
u = num2;
u = u / 10;
_putchar(':');
_putchar('0' + u);
_putchar('0' + s);
_putchar('\n');
return (0);
}
