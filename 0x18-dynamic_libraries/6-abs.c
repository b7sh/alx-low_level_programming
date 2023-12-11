#include "main.h"

/**
 * _abs - function compute the absolute
 *       value of an integer int
 * @n: take integer input for the function n
 * Return: always 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
