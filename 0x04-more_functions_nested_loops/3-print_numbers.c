#include "main.h"

/**
 * print_numbers - print numbers, from 0 to 9
 *
 * Return: always 0 (success)
 */
void print_numbers(void)
{
	i;
	for (i = 0; i<= 9; i++)
	{
		_putchar(i + 48);
		_putchar('\n')
	}
}
