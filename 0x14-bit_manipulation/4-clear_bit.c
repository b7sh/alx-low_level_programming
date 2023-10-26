#include "main.h"

/**
 * clear_bit - set the value of bit to 0
 * @n: hold the value
 * @index: the index
 * Return: -1 if it fail or 1 if it seccess
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	p = 1ul << index;
	p = ~p;
	*n &= p;
	return (1);
}
