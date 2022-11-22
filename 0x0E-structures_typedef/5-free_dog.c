#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees the dogs
 * @d:param d
 *
 * Return: none.
 */
void free_dog(dog_t *d)
{
	free(d);
}
