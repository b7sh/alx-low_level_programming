#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string charactar
 */

void rev_string(char *s)
{
int a, b;
int temp;
for (a = 0; s[a] != NULL; a++)
	;
for (j = 0; b < a / 2; b++)
{
	temp = s[b];
	s[b] = s[a - 1 - b];
	s[a - 1 - b] = temp;
}
}
