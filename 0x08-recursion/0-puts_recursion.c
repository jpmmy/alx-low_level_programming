#include"main.h"
#include<stdio.h>

/**
 * _puts_recursion - a function that prints a string followed
 * by a new line
 * @s:string to be printed
 * Return: none
 */

void _puts_recursion(char *s)
{
		int i;

		i = 0;
		while (s[i] != '\0')
		{
		_putchar(s[i]);
		i++;
		}
		_putchar('\n');
}


