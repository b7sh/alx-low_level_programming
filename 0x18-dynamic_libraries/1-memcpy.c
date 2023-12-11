#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the first pointer to compare
 * @src: the second pointer to compare
 * @n: the count integr
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
