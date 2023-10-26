#include "main.h"

/**
 * set_bit - set a value of the bit to 1
 * @n: hold the value
 * @index: the index
 * Return: -1 if it fail or 1 if it success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	p = 1lu << index;
	*n |= p;
	return (1);
}
