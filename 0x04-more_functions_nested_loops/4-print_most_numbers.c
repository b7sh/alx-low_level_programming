#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 - 9
 * Do not print 2 and 4
 * Return: always 0 (success)
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
continue;
_putchar(i + 48);
}
_putchar('\n');
}
