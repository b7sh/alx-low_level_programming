#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: the integer to enter the size of memory
 * Return: a
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	while (!s)
		_Exit(98);

	return (s);
}
