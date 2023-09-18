#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: the charactar
*/

void puts2(char *str)
{
int cutt;
for (cutt = 0; str[cutt] != '\0'; cutt++)
{
	if (cutt % 2 == 0)
		_putchar(str[cutt]);
}
_putchar('\n');
}
