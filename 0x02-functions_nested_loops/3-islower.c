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
	int j = 'a';
	int x;

	x = 0;
	for (; i <= 'Z' && c != i ; i++)
	{
	if (c == j)
	{
		x = 1;
		break;
	}
	j++;
	}
	return (x);
}
