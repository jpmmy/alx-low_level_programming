#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 * @name: param name
 * @age: param age
 * @owner: param owner
 * Return: pointer to the struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	t = malloc(sizeof(dog_t));
	if (t == NULL)
		return (NULL);
	t->name = name;
	t->age = age;
	t->owner = owner;
	return (t);
}
