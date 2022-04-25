#include"main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: string to be converted
 *
 * Return: return s.
 */
char *leet(char *s)
{

	int i, j;

	char chr[] = {'a', 'e', 'o', 't', 'l'};
	char chrr[] = {'A', 'E', 'O', 'T', 'L'};
	char ch2[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == chr[j] || s[i] == chrr[j])
			{
				s[i] = ch2[j];
			}
		}
	}

return (s);
}
