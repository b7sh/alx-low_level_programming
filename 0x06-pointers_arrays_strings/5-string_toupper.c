#include "main.h"

/**
 * *string_toupper - a function that changes all
 * lowercase letters of a string to uppercase
 * @s1: the pointer to return
 * Return: s1
 */

char *string_toupper(char *s1)
{
	char *upper = s1;

	while (*upper != '\0')
	{
		if (*upper >= 'a' && *upper <= 'z')
		{
			*upper = *upper - ('a' - 'A');
		}
		upper++;
	}
	return (s1);
}
