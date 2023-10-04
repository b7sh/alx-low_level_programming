#include <stdlib.h>
#include "main.h"

/**
 * _strdup - rns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the charactar
 * Return: null or s
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; str[j]; j++)
	{
		s = malloc(sizeof(char) * (j + 1));
		if (s == NULL)
			return (NULL);
	}
		while ((s[i] = str[i]) != '\0')
			i++;

		return (s);
}
