#include "main.h"

/**
 * print_line - draw a straight line in the termina
 *
 *@n: integer for print the character _
 */

void print_line(int n)
{
int line;
if (n <= 0)
_putchar('\n');
else
{
for (line = 1; line <= n; line++)
_putchar('_');
_putchar('\n');
}
}
