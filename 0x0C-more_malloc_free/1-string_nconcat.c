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
	unsigned int l1 = 0, l2 = 0, i;
	char *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n > l2)
		n = l2;
	ret = malloc(sizeof(char) * ((l1 + n) + 1));
	if (ret == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		ret[i] = s1[i];
	for (; i < (l1 + n); i++)
		ret[i] = s2[i - l1];
	ret[i] = '\0';
	return (ret);
}
