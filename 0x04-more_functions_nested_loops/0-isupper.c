#include "main.h"

/**
 * _isupper - checks if c is uppercase
 *
 * @c: the charactar to print
 *
 * Return: 1 if it's uppercase or 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return(1);
	else
	return(0);
}
