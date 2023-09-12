#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@boshy: the int
 * Return: always boshy
*/

int print_last_digit(int boshy)
{
int a;

	if (boshy < 0)
		boshy = -boshy;

	a = boshy % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
