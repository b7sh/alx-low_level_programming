#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * malloc_checked - allocated memory using malloc
 * @b: the integer to enter the size of memory
 * Return: a
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
