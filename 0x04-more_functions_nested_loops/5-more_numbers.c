#include "main.h"

/**
 * more_numbers - 10 times the numbers, from 0 - 14
 *
 *Return: always 0 (success)
*/

void more_numbers(void)
{
int a, b, c;
for (b = 1; b <= 10; b++)
{
for (c = 0; c <= 14; c++)
{
a = c;
if (c > 9)
{
_putchar(1 + 48);
a = c % 10;
}
_putchar(a + 48);
}
_putchar('\n');
}
}
