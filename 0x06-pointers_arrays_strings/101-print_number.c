#include "main.h"

/**
 * print_number - a function that print an integer
 * @n: the integer to check numbers
 */

void print_number(int n)
{
	unsigned int sign;

	sign = n;
	if (n < 0)
	{
		_putchar('-');
		sign = -n;
	}
	if (sign / 10 != 0)
	{
		print_number(sign / 10);
	}
	_putchar('0' + (sign % 10));
}
