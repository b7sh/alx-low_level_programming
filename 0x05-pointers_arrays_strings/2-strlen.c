#include "main.h"

/**
 * _strlen - a function return the lenth of string
 * @s: the integer to use
 * Return: always len (success)
 */

int _strlen(char *s)
{
int len;
for (len = 0; *s != '\0'; *s++)
	len++;
return (len);
}
