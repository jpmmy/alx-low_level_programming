#include "main.h"

/**
 * _puts - A function that prints a string to stdout
 *  followed by a new line
 *  @str: a string passed to be printed
 *
 *  Return: return none
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
