#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first pointer we need to compare
 * @s2: the second pointer we need to compare
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i] && s1[i] != s2[i])
{
	i++;
}
return (*s1 - *s2);
}
