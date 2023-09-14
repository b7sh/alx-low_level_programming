#include "main.h"

/**
 * print_square - print the square using # character
 *
 * @size: the size of the square
 *
 * return: always 0 (success)
 */

void print_square(int size)
{

if (size <= 0)
{
_putchar('\n');
}
else
{
int bro, sis;

for (bro = 0; bro < size; bro++)
{
for (sis = 0; sis < size; sis++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
