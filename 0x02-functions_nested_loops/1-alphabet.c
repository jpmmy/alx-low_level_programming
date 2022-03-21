#include"main.h"
/**
 * main - entry point
 *
 * prints alphabet
 *
 * Return: return 0
 */
int main(void)
{
	int a = 'a';

	for (; a <= 'z';)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
