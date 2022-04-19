#include"main.h"
#include<stdio.h>
/**
 * is_palindrome - function to check if a string is palindrome
 * @s:param s
 * Return:1 or 0
 */
int is_palindrome(char *s)
{
	return (is_p(s, 0, _strlen(s) - 1));
}
/**
 * is_p - helper function to check a palindrome string
 * @s:string to be checked
 * @lin:param left index
 * @rin:param right index
 * Return:1 if the sring is palindrome or 0 if not
 */
int is_p(char *s, int lin, int rin)
{
	if (lin >= rin)
	{
		return (1);
	}
	if (s[lin] == s[rin])
	{
		return (is_p(s, lin + 1, rin - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * _strlen - a function that return the length of a string
 * @s:string to be measured
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
