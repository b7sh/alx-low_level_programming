#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the struct dog
 * @d: the struct variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("name: %s\n", d->name != NULL ? d->name :"nil");
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner != NULL ? d->owner : "nil");
}
