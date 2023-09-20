#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: the pointer we will copy in it
 * @src: the pointer we will copy it
 * @n: the integer for strncpy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
