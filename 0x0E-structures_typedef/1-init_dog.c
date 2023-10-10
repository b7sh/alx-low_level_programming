#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialized the struct type
 * @d: the struct variable
 * @name: the first string
 * @age: the float variable
 * @owner: the second string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return (NULL);
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
