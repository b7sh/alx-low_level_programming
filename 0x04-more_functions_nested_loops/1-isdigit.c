#include "main.h"

/**
 * _isdigit - check if c digit or not
 * @c: the char who will be checked
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}
