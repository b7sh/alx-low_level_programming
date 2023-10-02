#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * it will use at most n bytes from src, and src does
 * not need to be null-terminated if it contains n
 * or more bytes
 * @dest: the first pointer
 * @src: the second pointer
 * @n: the integer to add alphabet
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int a = 0, sum = 0, i;

	while (dest[a] != '\0')
	{
		sum++;
		a++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];
	}
	return (dest);
}
