#include"main.h"

/**
 * _isdigit - function that checks for upper case
 * @c:character to be checked
 *
 * Return: 1 if is digit and 0 for otherwise
 */

int _isdigit(int c)
{
	char w;

	w = c;
	if (w >= 48 && w <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
