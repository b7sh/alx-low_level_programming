#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: the charactar
 */

void puts_half(char *str)
{
int lastDigit;
for (lastDigit = 0; str[lastDigit] != '\0'; lastDigit++)
	;

for (lastDigit /= 2; str[lastDigit] != '\0'; lastDigit++)
{
	_putchar(str[lastDigit]);
}
_putchar('\n');
}
