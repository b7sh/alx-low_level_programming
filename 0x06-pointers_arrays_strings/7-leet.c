#include "main.h"

/**
 * *leet - a function that encodes
 * a string into 1337
 * @x: the pointer to return
 * Return: x
 */

char *leet(char *x)
{
	int i, j;
	char *leter = "aAeEoOtTlL";
	char *number = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; leter[j] != '\0'; j++)
		{
			if (x[i] == leter[j])
			{
				x[i] = number[j];
				break;
			}
		}
	}
	return (x);
}
