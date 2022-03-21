#include"main.h"
/**
 * _islower - prints alphabet in lower case
 * @c: character to be checked
 *
 * prints alphabets in lower case
 *
 * Return: return 0 on fail and return 1 on success
 */
int _islower(int c)
{
	int i = 'A';
	int x;

	x = 0;
	for (; i <= 'Z' ; i++)
	{
	if (c != i)
	{
		x = 1;
	} else
	{
		x = 0;
		break;
	}
	}
	return (x);
}
