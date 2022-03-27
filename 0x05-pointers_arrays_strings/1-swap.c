#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps the values of two integers
 * @a: pointer to int 1
 * @b: pointer to int 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
