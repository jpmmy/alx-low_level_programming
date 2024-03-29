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
	int i, y, l1, l2;
	char *ret;


	if (s1 == NULL)
	{
		l1 = 0;
	}
	else
	{
		l1 = _strlen(s1);
	}
	if (s2 == NULL)
	{
		l2 = 0;
	}
	else
	{
		l2 = _strlen(s2);
	}
	ret = malloc(((l1 + l2) + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	i = 0;
	y = 0;
	if (l1 > 0)
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	if (l2 > 0)
	while (s2[y] != '\0')
	{
		ret[i] = s2[y];
		i++;
		y++;
	}
	ret[i] = '\0';
	return (ret);
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
