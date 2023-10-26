#include "main.h"

/**
 * get_bit - return the vlaue of the bit
 * @n: hold the bit
 * @index: the index
 * Return: b or -1 if it long than the memory can hold
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;
	int b;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	m = 1ul << index;
	if (n & m)
		b = 1;
	else
		b = 0;
	return (b);
}
