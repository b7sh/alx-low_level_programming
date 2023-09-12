#include "main.h"

/**
 * print_last_digit - of the number
 *@n: the int to the last digit
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
