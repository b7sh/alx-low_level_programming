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
	char *ptr;
	unsigned int s = 0, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = nmemb * size;
	ptr = malloc(s);

	if (ptr == NULL)
		return (NULL);
	while (i < s)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
