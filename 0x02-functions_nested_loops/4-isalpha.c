#include"main.h"
/**
 * _isalpha - prints alphabet in upper case
 * @c: character to be checked
 *
 * prints alphabets in lower case
 *
 * Return: return 1 if c is a letter else return 0
 */
int _isalpha(int c)
{
	int i = 'A';
	int j = 'a';
	int x;

	x = 0;
	for (; i <= 'Z' ; i++)
	{
	if (c == j || c == i) 
	{
		x = 1;
		break;
	}
	j++;
	}
	return (x);
}
