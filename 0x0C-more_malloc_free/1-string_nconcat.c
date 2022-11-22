#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two
 * strings
 * @s1:param 1
 * @s2:param 2
 * @n:param 3
 * Return:a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	char *ret;

	if (s1 == NULL)
	{
		l1 = 0;
		s1 = "";
	}
	else
	{
		l1 = _strlen(s1);
	}
	if (s2 == NULL)
	{
		l2 = 0;
		s2 = "";
	}
	else
	{
		l2 = _strlen(s2);
	}
	if (n >= l2)
	{
		ret = malloc(sizeof(char) * ((l1 + l2) + 1));
	}
	else
	{
		ret = malloc(sizeof(char) * ((l1 + n) + 1));
	}
	helper_conc(ret, s1, s2, n);
	return (ret);
}
/**
 * helper_conc - helper function for the concatenate function
 * @ret: param 1
 * @s1:param 2
 * @s2:patam 3
 * @n: param 4
 * Return: pointer to the allocated space.
 */
char *helper_conc(char *ret, char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;

	x = 0;
	y = 0;
	while (s1[x] != '\0')
	{
		ret[x] = s1[x];
		x++;
	}
	while (y <= n)
	{
		ret[x] = s2[y];
		x++;
		y++;
	}
	ret[x] = '\0';
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
