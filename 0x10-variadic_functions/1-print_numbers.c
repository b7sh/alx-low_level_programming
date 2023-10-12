#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by new line
 * @separator: hold the argument
 * @n: hold the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list op;
	int num;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		num = va_arg(op, const unsigned int);

		printf("%d", num);
	}
	printf("\n");
	va_end(op);
}
