#include "main.h"

/**
 * _memset - a function that fills memory
 * with a constant byte
 * @s: the return pointer
 * @b: the compare character
 * @n: the count integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		n--;
		s[a] = b;
	}
	return (s);
}
