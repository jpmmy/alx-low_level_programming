#include"main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1:param s1
 * @s2:param s2
 *
 * Return: 0 , > 0 or < 0
 */
int _strcmp(char *s1, char *s2)
{
	int l, i;

	i = 0;
	l = _strlen_recursion(s1);
	if (s1[i] == s2[i])
	{
		while (i < l)
		{
			i++;
		}
		return (0);
	}
	else
	{

		if (s1[i] > s2[i])
		{
			return (1);
		}
		else
		{
			return (-1);
		}

	}
}
/**
 * _strlen_recursion - a function that return the length of a string
 * @s:string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
