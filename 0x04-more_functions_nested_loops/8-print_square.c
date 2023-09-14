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
int raw, column;
for (raw = 1; raw <= size; raw++)
{
for (column = 1; column <= size; column++)
_putchar(35);
_putchar('\n');
}
}

