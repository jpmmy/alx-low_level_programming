#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory and
 * returns a pointer.
 * @b:param b
 * Return:return a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	else
	{
		return (c);
	}
}
