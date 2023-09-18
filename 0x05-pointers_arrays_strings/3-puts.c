#include "main.h"

/**
 * _puts - a function that prints a string, followed 
 * by a new line, to stdout
 * @str: the character we use
 */

void _puts(char *str)
{
	while (*str != NULL)
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
