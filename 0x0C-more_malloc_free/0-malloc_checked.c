#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: the integer to enter the size of memory
 * Return: a
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
	{
		return (NULL);
		exit (98);
	}
	return (s);
}
