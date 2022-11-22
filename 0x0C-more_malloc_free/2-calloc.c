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
	void *ret;
	char *membarr;

	if ((nmemb || size) == 0)
		return (NULL);
	i = 0;
	ret = malloc(size * nmemb);
	if (ret == NULL)
		return (NULL);
	membarr = ret;
	while (i <= nmemb)
	{
		membarr[i] = 0;
		i++;
	}
	return (membarr);
}
