#include"main.h"
/**
 * main - entry point
 *
 * print words
 *
 * Return: return 0
 */
int main(void)
{
	int leng;
	int i;
	char txt[] = "_putchar";

	leng = sizeof(txt) / sizeof(txt[0]);
	for (int i = 0; i < leng; i++)
	{
		if (txt[i] != '\0')
		{
			_putchar(txt[i]);
		}
	}
	_putchar('\n');
	return (0);
}
