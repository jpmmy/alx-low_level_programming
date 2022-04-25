#include"main.h"

/**
 * rot13 - a function that encodes a string into rot13.
 * @s: string to be converted
 *
 * Return: return s.
 */
char *rot13(char *s)
{
int i, j;
char fr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char ch[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; fr[j] != '\0'; j++)
	{
		if (s[i] == fr[j])
		{
			s[i] = ch[j];
			break;
		}
	}
}
return (s);
}
