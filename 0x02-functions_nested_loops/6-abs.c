#include"main.h"
/**
 * _abs - prints absolute integer
 * @n:number to check
 *
 * prints absolute integer
 *
 * Return: return 0
 */
int _abs(int n)
{
	int x;

	if (n < 0)
	{
		x = n * (-1);
	} else
	{
		x = n * 1;
	}
	return (x);
}
