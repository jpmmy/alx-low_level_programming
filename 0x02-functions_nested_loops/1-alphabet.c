#include"main.h"
/**
 * print_alphabet - prints alphabet
 *
 * prints alphabet
 *
 * Return: return void
 */
void print_alphabet(void)
{
	int a = 'a';

	for (; a <= 'z';)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
