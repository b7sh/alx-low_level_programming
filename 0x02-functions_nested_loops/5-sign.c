#include "main.h"

/**
 * print_sign - print - if n is greater than zero
 *            0 if n is zero and - if n is
 *            less than zero
 * @n: takes integer type from the input
 * Return: 1 or -1 or 0 (seccess)
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
