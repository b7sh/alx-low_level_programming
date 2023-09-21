#include "main.h"

/**
 * *cap_string - a function that capitalizes
 * all words of a string
 * @s: the pointer to retutn
 * Return: s
 */

char *cap_string(char *s)
{
int cap = 1;
int i;

for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '.')
	{
		cap = 1;
	}
	else if (cap)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
	cap = 0;
	}
}
return (s);
}
