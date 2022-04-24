#include"main.h"

/**
 * cap_string- a function that
 * capitalizes all words of a string.
 * @s: string to be converted
 *
 * Return: return s (all capital)
 */
char *cap_string(char *s)
{

	int i, l, j;

	i = 0;
	j = 0;
	l = _strlen_recursion(s);
	while (i < l && s[i] != '\0')
	{
		if (word_s(s[i]))
		{
			if (s[i] <= 'z' && s[i] >= 'a' && j == 1)
			{
				s[i] = s[i] - 32;
				j = 0;
			}
			else
			{
				j = 0;
			}
		}
		else
		{
			j = 1;
		}
		i++;
	}
	return (s);
}
/**
 * word_s - a helper function that checkes for word
 * separators.
 * @s:param s. a string to be checked.
 *
 *  Return: return 0 if character matches word separator and 1 if not
 */
int word_s(char s)
{
switch (s)
{
case ',':
	return (0);
case ';':
	return (0);
case '.':
	return (0);
case '!':
	return (0);
case '?':
	return (0);
case '"':
	return (0);
case '(':
	return (0);
case ')':
	return (0);
case '{':
	return (0);
case '}':
	return (0);
case ' ':
	return (0);
case '\t':
	return (0);
case '\n':
	return (0);
default:
	return (1);
}
}
/**
 * _strlen_recursion - a function that return the length of a string
 * @s:string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
