#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times \n character
 *          shoud be printed
*/

void print_diagonal(int n)
{

int i = 0, j = 0;

if (n <= 0)
{
while (i < n)
{
while (i > j)
{
_putchar('\n');
j++;
}
i++;
j = 0;
_putchar(92);
_putchar('\n');
}
}
else
_putchar('\n');
}
