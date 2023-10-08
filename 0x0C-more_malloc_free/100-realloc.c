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
	char *str;
	char *o_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	if (!str)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			str[i] = o_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			str[i] = o_ptr[i];
	}
	free(ptr);
	return (str);
}
