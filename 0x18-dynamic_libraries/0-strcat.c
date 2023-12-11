#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: the first pointer
 * @src: the second pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
unsigned int sum = 0, a = 0, sum1 = 0, i = 0;
while (dest[a] != '\0')
{
	sum++;
	a++;
}
while (src[i] != '\0')
{
	sum1++;
	i++;
}
for (a = 0; a < sum1; a++)
{
	dest[sum + a] = src[a];
}
return (dest);
}
