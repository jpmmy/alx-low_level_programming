#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min:min value
 * @max:max value
 * Return:a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i, t;
	int *ret;

	t = min;
	i = 0;
	if (min > max)
		return (NULL);
	ret = malloc(sizeof(int) * (max - min + 1));
	if (!ret)
		return (NULL);
	while (i <= max - min)
		ret[i++] = t++;
	return (ret);
}
