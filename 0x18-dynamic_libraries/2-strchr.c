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
	int i = 0;

	do {
		i++;
		if (s[i] == c)
		{
			return (s + i);
		}
	} while (s[i] >= '\0');
	return ('\0');
}
