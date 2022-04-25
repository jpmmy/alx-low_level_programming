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

	int i;
	char cp;

	for (i = 0; s[i] != '\0'; i++)
	{
		cp = s[i];
		while ((cp >= 'a' && cp <= 'z') || (cp >= 'A' && cp <= 'Z'))
		{
			if ((cp > 'm' && cp <= 'z') || (cp > 'M' && cp <= 'Z'))
			{
				cp = cp - 13;
				goto retur;
			}
			else if ((cp >= 'a' && cp < 'n') || (cp >= 'A' && cp < 'N'))
			{
				cp = cp + 13;
				goto retur;
			}
		}
retur:
		s[i] = cp;
	}

return (s);
}
