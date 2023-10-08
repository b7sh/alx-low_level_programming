#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory
 * block using malloc and free
 * @ptr: the pointer
 * @old_size: first integer
 * @new_size: second integer
 * Return: ptr or str or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *o_ptr;
	unsigned int i;
	char *s;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	s = malloc(new_size)
	if (s == NULL)
		return (NULL);

	o_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			s[i] = o_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			s[i] = o_ptr[i];
	}
	free(ptr);
	return (S);
}
