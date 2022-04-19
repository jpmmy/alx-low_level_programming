#include"main.h"
#include<stdio.h>
/**
 * wildcmp - a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0
 * @s1:param s1
 * @s2:param s2
 * Return:1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	return (is_same(s1, s2, 0));
}
/**
 * is_same - helper function to check similarity of strings
 * @s1:param s1
 * @s2:param s2
 * @lin:param left index
 * Return:1 if the two strings are same or 0 if not
 */
int is_same(char *s1, char *s2, int lin)
{
	if (lin >= _strlen(s1) - 1 && _strlen(s2) == _strlen(s1))
	{
		return (1);
	}
	if (s2[lin] == '*')
		return (1);
	if (s1[lin] == s2[lin])
	{
		return (is_same(s1, s2, lin + 1));
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
