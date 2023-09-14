#include "main.h"

/**
 * print_number -  print an intege
 *
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int anint;
if (n < 0)
{
anint = -n;
_putchar('-');
}
else
{
anint = n;
}
if (anint / 10)
{
print_number(anint / 10);
}
_putchar((anint % 10) + '0');
}
