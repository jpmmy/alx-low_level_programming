#include"main.h"
#include<stdio.h>

/**
 * rot13 - a function that encodes a string into rot13.
 * @s: string to be converted
 *
 * Return: return s.
 */
char *rot13(char *s)
{
int i, j;
char cp;

for (i = 0; s[i] != '\0'; i++)
{
	cp = s[i];
	j = 0;
while (j < 1 && ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
	{
		if ((cp > 'm' && cp <= 'z') || (cp > 'M' && cp <= 'Z'))
			{
				cp = cp - 13;
			}
			else
			{
				cp = cp + 13;
			}
	j = 3;
	}
		s[i] = cp;
}

return (s);
}
