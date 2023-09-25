#include "main.h"

/**
 * _strchr - a function that locates
 * a character in a string.
 * @s: the main pointer
 * @c: the character pointer
 * Return: s+i
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (i >= '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (s);
}
