#include "main.h"

/**
 * *rot13 - a function that encodes
 * a string using rot13.
 * @m: the pointer character
 * Return: m
 */

char *rot13(char *m)
{
	int i;

	for (i = 0; m[i] != '\0'; i++)
	{
		if ((m[i] >= 'a') * (m[i] <= 'm') - (m[i] >= 'A') * (m[i] <= 'Z'))
		{
			m[i] += 13;
		}
		else if ((m[i] >= 'n') * (m[i] <= 'z') - (m[i] >= 'N') * (m[i] <= 'Z'))
		{
			m[i] -= 13;
		}
	}
	return (m);
}
