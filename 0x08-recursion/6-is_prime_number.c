#include"main.h"
#include<stdio.h>

/**
 * is_prime_number - a function that returns 1 if n is prime number
 * and return 0 if it is not.
 * @n:param n
 * Return: 1 or 0
 */
int is_prime_number(int n)
	{
		return (is_prime(n, 2));
	}
/**
 * is_prime - a helper function that returns 1 if n is prime number
 * and return 0 if it is not.
 * @n:param n
 * @i:param i
 * Return: 1 or 0
 */
int is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime(n, i + 1));
}
