#include "main.h"

/**
 * main - Entry point
 *
 * discripiton: using char c to print _putchar
 *
 *@c: using to print _putchar
 *
 * Return: Always 0 (success)
*/

int _putchar(char c)
{
	char str[] = "_putchar"
		int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
