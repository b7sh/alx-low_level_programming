#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function for free the memory
 * @d: the struct variable
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
