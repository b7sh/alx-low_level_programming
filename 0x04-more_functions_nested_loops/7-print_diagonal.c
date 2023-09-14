#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the integet to print \n
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i < n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar(92); /* is equal to '/' char */
			_putchar('\n');
		}
	}
}
