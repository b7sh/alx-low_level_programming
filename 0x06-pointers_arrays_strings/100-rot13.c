#include "main.h"

/**
 * *rot13 - a function that encodes
 * a string using rot13.
 * @m: the pointer character
 * Return: m
 */

char *rot13(char *m)
{
	int i, j;
	char *encode = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *decode = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; encode[j] != '\0'; j++)
		{
			if (m[i] == encode[j])
			{
				m[i] = decode[j];
				break;
			}
		}
	}
	return (m);
}
