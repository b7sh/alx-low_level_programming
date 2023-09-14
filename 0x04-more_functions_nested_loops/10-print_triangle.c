#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: the integer for the parameter for the function
 * Return: always 0 (success)
 */

void print_triangle(int size)
{
int i, j = 0;
int spee;

if (size > 0)
{
while (j < size)
{
spee = size - j - 1;
while (i < size)
{
if (spee > i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
i++;
}
j++;
i = 0;
_putchar ('\n');
}
}
else
_putchar('\n');
}
