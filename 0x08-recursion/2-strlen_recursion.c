#include"main.h"
#include<stdio.h>

/**
 * _strlen_recursion - a function that return the length of a string
 * @s:string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	static int l;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		l++;
	}
		return (l);
}


