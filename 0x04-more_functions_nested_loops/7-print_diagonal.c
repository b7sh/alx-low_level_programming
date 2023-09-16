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
for (i = 0; i < 11; i++)
{
for (j = 0; j <= i; j++)
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
