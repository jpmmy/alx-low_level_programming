#include "main.h"

/**
 * _strlen - function that returns the l of a string
 * @s: pointer to the char value
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;
	int l;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	return (l);
}
