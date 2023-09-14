#include "main.h"

/**
 * print_numbers - print numbers, from 0 to 9
 *
 * Return: always 0 (success)
 */
void print_numbers(void)
{
char a = '0';
while (a <= '9')
{
_putchar(a);
a++;
}
_putchar('\n');
}
