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
			if ((s[i] >= 'a' && s[i] <= 'z') && s[i] + 13 <= 'z')
			{
				cp = cp + 13;
			}
			else if ((s[i] >= 'A' && s[i] <= 'Z') && s[i] + 13 <= 'Z')
			{
				cp = cp + 13;
			}
			else if ((s[i] >= 'a' && s[i] <= 'z') && s[i] + 13 > 'z')
			{
				cp = cp - 13;
			}
			else if ((s[i] >= 'A' && s[i] <= 'Z') && s[i] + 13 > 'Z')
			{
				cp = cp - 13;
			}
			s[i] = cp;
	}

return (s);
}
