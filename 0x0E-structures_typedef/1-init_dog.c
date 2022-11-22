#include "main.h"
/**
 * init_dog - a function that initialises a struct dog
 * @d: struct dog
 * @name: name member for struct dog
 * @age: age member for struct dog
 * @owner: owner member for struct dog)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
