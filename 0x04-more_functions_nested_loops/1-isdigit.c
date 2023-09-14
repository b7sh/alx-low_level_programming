#include "main.h"

/**
 * _isdigit - checks for a digit from 0 - 9
 *
 *@c: character to check
 *
 * Return: 1 is it's digit or 0 if it's not */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
