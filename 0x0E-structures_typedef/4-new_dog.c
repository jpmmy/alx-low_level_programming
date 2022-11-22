#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 * @name: param name
 * @age: param age
 * @owner: param owner
 * Return: pointer to the struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	t = malloc(sizeof(dog_t));
	if (t == NULL)
		return (NULL);
	t->name = malloc(sizeof(dog_t));
	if (t->name == NULL)
		return (NULL);
	t->age = age;
	t->owner = malloc(sizeof(dog_t));
	_strcpy(t->name, name);
	_strcpy(t->owner, owner);

	return (t);
}
/**
 * _strcpy - function that copies string.
 * @dest: destination
 * @src: string to be copied
 * Return: Address of desc
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
