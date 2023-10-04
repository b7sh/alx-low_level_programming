#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two string
 * @s1: hold the first string
 * @s2: hold the second string
 * Return: null or s3
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0, j = 0, index1 = 0, index2 = 0;

	while (s1 && s1[index1])
	{
		index1++;
	}
	while (s2 && s2[index2])
	{
		index2++;
	}
	s3 = malloc(sizeof(char) * (index1 + index2 + 1));
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (i < index1)
		{
			s3[i] = s1[i];
		i++;
		}
	}
	if (s2)
	{
		while (i < (index1 + index2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
