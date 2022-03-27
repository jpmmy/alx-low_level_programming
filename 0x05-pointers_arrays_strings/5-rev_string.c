#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char t;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j <= i / 2; j++)
	{
		t = s[j];
		s[j] = s[i - j];
		s[i - j] = t;
	}
}
