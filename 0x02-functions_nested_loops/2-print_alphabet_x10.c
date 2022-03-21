#include"main.h"
/**
 * print_alphabet_x10 - prints alphabet
 *
 * prints alphabet 10x
 *
 * Return: return void
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int j = 'a';

	for (; a < 10;)
	{
		for (; j <= 'z' ;)
		{
		_putchar(j);
		j++;
		}
		j = 'a';
		_putchar('\n');
		a++;
	}
}
