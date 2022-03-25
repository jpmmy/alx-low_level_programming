#include"main.h"

/**
 * _isupper - function that checks for upper case
 * @c:character to be checked
 *
 * Return: 1 if uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	char w;

	w = c;
	if (w >= 65 && w <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
