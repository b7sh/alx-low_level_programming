#include "main.h"

/**
 * *_strcpy -  a function that copies the string pointed to by
 * src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: the first pointe charactar
 * @src: the second pointer character
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int cp = -1;
do {
	cp++;
	dest[cp] = src[cp];
} while (src[cp] != '\0');
return (dest);
}
