#include"main.h"
#include<stdio.h>

/**
 * _strncpy - a function that copies strings src and dest n legth at most
 * @dest:param dest
 * @src:param src
 * @n:n bytes;
 *
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s;
	int i;
	int l;

	l = _strlen_recursion(src);
	s = dest;
	i = 0;

	if (n < l)
	{
		while (i < n)
		{
			s[i] = src[i];
			i++;
		}
	}
	else
	{
		while (src[i] != '\0')
		{
			s[i] = src[i];
			i++;
		}
			while (i < n)
			{
				s[i] = '\0';
				i++;
			}
	}
	dest = s;
	return (dest);
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
