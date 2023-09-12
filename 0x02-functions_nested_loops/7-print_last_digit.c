#include "main.h"

/**
 * print_last_digit - of the number
 *@x: the int to the last digit
 * Return: the last digit
*/

int print_last_digit(int x)
{
if (x < 0)
x = -x;

y = x % 10;
if (y < 0)
y = -y;
_putchar(y + '0');
return (y);
}
