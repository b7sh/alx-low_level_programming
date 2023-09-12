#include "main.h"

/**
 * print_times_table - print n times table, string with 0
 * @n: the parameter
*/

void print_times_table(int n)
{
	int first, second, third;

	if (n >= 0 && n <= 15)
	{
		for (first = 0; first <= n; first++)
		{
			for (second = 0; second <= n; second++)
			{
				third = second * first;
				if (second == 0)
				{
					_putchar(third + '0');
				} else if (third < 10 && second != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(third + '0');
				} else if (third >= 10 && third < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((third / 10) + '0');
					_putchar((third % 10) + '0');
				} else if (third >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((third / 100) + '0');
					_putchar(((third / 10) % 10) + '0');
					_putchar((third % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
