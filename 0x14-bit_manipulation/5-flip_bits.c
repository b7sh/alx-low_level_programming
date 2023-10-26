#include "main.h"

/**
 * flip_bits - return the number of bits
 * @n: the first number
 * @m: the second number
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int Xor_op;
	int count = 0;

	Xor_op = n ^ m;
	while (Xor_op > 0)
	{
		count += Xor_op & 1;
		Xor_op >>= 1;
	}
	return (count);
}
