#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat- a function that concatenates two strings.
 *@s1:param 1
 *@s2:param 2
 *Return: returns a pointer to allocated space.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, l, m, size, k;

		l = _strlen(s1);
		m = _strlen(s2);
		size = l + m + 1;
		a = malloc(size * (sizeof(char)));
		i = 0;
		k = 0;
		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			while (i <= size)
			{
				if (i < l)
				{

					a[i] = s1[i];
				}
				else
				{
					a[i] = s2[k];
					k++;
				}
				i++;
			}
			return (a);
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
	int i, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	return (l);
}
