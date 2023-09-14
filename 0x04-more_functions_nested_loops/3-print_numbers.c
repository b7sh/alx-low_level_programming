#include "main.h"

/**
 * print_numbers - print numbers, from 0 to 9
 *
 * Return: always 0 (success)
 */
void print_numbers(void)
{
	int num = 0;
do {
_putchar(num + 48);
i++;
} while (num >= 0 && num <= 9);
_putchar('\n');
}
