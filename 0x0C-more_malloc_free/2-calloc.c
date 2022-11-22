#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for array
 * @nmemb:param 1
 * @size:param 2
 * Return:a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ret;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	ret = malloc(size * nmemb);
	if (ret == NULL)
		return (NULL);
	for (i = 0; i <= nmemb * size; i++)
	{
		ret[i] = 0;
	}
	return (ret);
}
