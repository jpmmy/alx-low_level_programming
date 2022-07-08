#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strdup - a function that returns a pointer to a newly
 * allocated space in memory,
 *@str:param 1
 *Return: returns a pointer to allocated space.
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, l;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		l = _strlen(str);
		a = malloc(l * (sizeof(char)));
		l = l + 1;
		i = 0;
		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			while (i < l)
			{
				a[i] = str[i];
				i++;
			}
			return (a);
		}
	}

}
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
