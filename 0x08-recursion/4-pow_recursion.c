#include"main.h"
#include<stdio.h>

/**
 * _pow_recursion - a function that returns the
 * value of x raised to the power of y
 * @x:param x
 * @y:param y
 * Return: the value x raised to the power y
 */
int _pow_recursion(int x, int y)
{

	if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}



