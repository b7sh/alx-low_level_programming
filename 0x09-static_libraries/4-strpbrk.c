#include "main.h"

/**
 * _strpbrk - a function that searches a
 * string for any of a set of bytes
 * @s: the first pointer
 * @accept: the second pointer
 * Return: p
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *pr;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				pr = &s[a];
				return (pr);
			}
		}
	}
	return (0);
}
