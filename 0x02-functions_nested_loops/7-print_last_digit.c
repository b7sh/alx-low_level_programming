#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: the int
 * Return: always a
*/

int print_last_digit(int n)
{
if (n < 0)
n = -n;

a = n % 10;

if (a < 0)
a = -a;

_putchar(a + 48);

return (a);
}
