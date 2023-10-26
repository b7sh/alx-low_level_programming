#include "main.h"

/**
 * print_binary - convert from decimal to binary
 * @n: the long unsigned int to hold the decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned long int c;
	int l = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	c = 1ul << (sizeof(unsigned long int) * 8 - 1);
	while (c > 0)
	{
		if ((n & c) != 0)
		{
			l = 0;
			printf("1");
		}
		else if (!l)
			printf("0");
		c >>= 1;
	}
}
