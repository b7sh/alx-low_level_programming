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
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == i)
putchar(92);
else if (j < i)
putchar(' ');
}
putchar('\n');
}
}
}
