#include"main.h"

/**
 * _strncat - a function that concatenates strings src and dest
 * @dest:param dest
 * @src:param src
 * @n:n bytes;
 *
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
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
	while (src[i] != '\0' && i < n)
	{
		s1[j] = src[i];
		i++;
		j++;
	}
	dest = s1;
	return (dest);
}
