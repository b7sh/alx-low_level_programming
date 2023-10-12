#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print string followed by new line
 * @separator: hold the argument
 * @n: hold the numbers
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	char *s;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ar, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
