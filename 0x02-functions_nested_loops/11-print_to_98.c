#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints natural numbers
 * @n:number to start from
 *
 * function prints natural numbers n to 98 in order
 * separated by comma and space
 *
 * Return: returns nothing
 *
*/
void print_to_98(int n)
{
	int i;

	i  = n;
	if (n <= 98)
	{
	for (; i <= 98 ; i++)
		if (i == n)
		{
			printf("%d", n);
		}
		else
		{
		printf(", %d", i);
		}
	} else
	{
	for (; i > 98 ; i--)
		if (i == n)
		{
			printf("%d", n);
		}
		else
		{
		printf(", %d", i);
		}
	}
	printf("\n");
}

