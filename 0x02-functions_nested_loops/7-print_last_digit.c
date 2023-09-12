#include "main.h"

/**
 * print_last_digit - of the number
 *@n: the int to the last digit
 * Return: the last digit
*/

int print_last_digit(int n)
{
if (n < 0)
n = -n;

a = n % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
