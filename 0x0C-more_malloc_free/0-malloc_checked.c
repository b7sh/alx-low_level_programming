#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: the integer to enter the size of memory
 * Return: a
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		_Exit(98);
	return (a);
}
