#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialized the struct type
 * @dog *d: the struct variable
 * @*name: the first string
 * @age: the float variable
 * @owner: the second string
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
