#include "main.h"
#include<stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size:param 1
 *  @c:param 2
 *
 *  Return:a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{

	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		a = malloc(size * sizeof(char));
		if (a == NULL)
			return (0);
		i = 0;
		while (i < size)
		{
			a[i] = c;
			i++;
		}
		return (a);
	}
}
