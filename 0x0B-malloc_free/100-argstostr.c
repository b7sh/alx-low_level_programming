#include <stdlib.h>
#include "main.h"

/**
 * strln - function to find the lenghth of a string
 * @p: the charactar
 * Return: k
 */

int strln(char *p)
{
	int k = 0;

	while (*p != '\0')
	{
		k++;
		p++;
	}
	return (k);
}

/**
 * *argstostr - a function to concatenate the argument
 * @ac: hold the value of the program
 * @av: hold the string
 * Return: null or s
 */

char *argstostr(int ac, char **av)
{
	int sum = 0;
	int i1, i2, j;
	char *s;

	j = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i1 = 0; i1 < ac; i1++)
	{
		sum += strln(av[i1]);
		sum++;
	}
	s = malloc(sizeof(char) * sum + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2] != '\0'; i2++)
		{
			s[j] = av[i1][i2];
			j++;
		}
		s[j] = '\n';
		j++;
	}
	return (s);
}
