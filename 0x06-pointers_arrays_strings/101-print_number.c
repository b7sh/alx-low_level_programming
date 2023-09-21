#include "main.h"

/**
 * print_number - a function that print an integer
 * @n: the integer to check numbers
 */

void print_number(int n)
{
	unsigned int sign;

	if (n < 0)
	{
		_putchar('-');
		sign = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
