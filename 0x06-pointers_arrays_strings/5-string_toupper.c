#include"main.h"

/**
 * string_toupper- a function that changes
 * all lowercase letters to upper case
 * @s: string to be converted
 *
 * Return: return s (all capital)
 */
char *string_toupper(char *s)
{

	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = s[i];
		if (j <= 122 && j >= 97)
		{
			s[i] = s[i] - 32;
		}
		else
		{
			s[i] = j;
		}
		i++;
	}
	return (s);
}
