#include"main.h"
#include<stdio.h>

/**
 * _sqrt_recursion - a function that returns the
 * @n:param n
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (square_root_finder(n, 1));
}
/**
 * square_root_finder - helper function to find square root
 * @n:param n
 * @guess: param guess
 * Return: guess
 */
int square_root_finder(int n, int guess)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		if ((guess * guess) == n)
		{
			return (guess);
		}
		else if ((guess * guess) > n)
		{
			return (-1);
		}
		else
		{
			guess += 1;
			return (square_root_finder(n, guess));
		}
	}
}



