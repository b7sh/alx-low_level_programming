#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times \n character
 *          shoud be printed
*/

void print_diagonal(int n)
{

if (n <= 0)
{
putchar('\n');
}
else
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
_putchar(92); /* is equal to '/' char *
_putchar(' ');
_putchar('\n');
}
}
}
