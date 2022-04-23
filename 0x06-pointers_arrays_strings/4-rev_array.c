#include"main.h"

/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 * @a:param a (integer array)
 * @n:param n (number of elements of the array)
 *
 * Return: return nothing
 */
void reverse_array(int *a, int n)
{

	int i;
	int j, temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
