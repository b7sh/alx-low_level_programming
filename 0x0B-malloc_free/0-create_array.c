#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array
 * of chars, and initializes it with a specific char
 * @size: the unsigned integer
 * @c: the character
 * Return: null or 0 or ptr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	(ptr + i) = '\0';
	return (ptr);
}
