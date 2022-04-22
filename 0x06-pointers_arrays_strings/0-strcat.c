#include"main.h"

/**
 *_strcat - a function that concatenates strings s1 and s2
 * @dest:param dest
 * @src:param src
 *
 * Return: return src
 */

char *_strcat(char *dest, char *src)
{
	char *s1;
	int i, j;

	i = 0;
	j = 0;
	s1 = dest;
	while (dest[i] != '\0')
	{
		s1[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		s1[j] = src[i];
		i++;
		j++;
	}
	dest = s1;
	return (dest);
}
