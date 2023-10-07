#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: hold the value
 * @size: hold the value
 * Return: null or caloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *caloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	caloc = malloc(nmemb * size);

	if (caloc == NULL)
		return (NULL);
	return (caloc);
}
