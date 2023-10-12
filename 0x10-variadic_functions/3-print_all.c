#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all: print everything using variadic
 * where format is a list of type argument passed the function
 *
 * @format: the only argument
 *
*/
void print_all(const char *const format, ...)
{
	va_list ar;
	int num;
	char c;
	float f;
	char *s;
	int i = 0;

	va_start(ar, format);

	while (format && format[i])
	{
		if (i > 0)
			printf(", ");
		if (format[i] == 'i')
		{
			num = va_arg(ar, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(ar, double);
			printf("%f", f);
		}
		else if (format[i] == 'c')
		{
			c = va_arg(ar, int);
			printf("%c", c);
		}
		else if (format[i] == 's')
		{
			s = va_arg(ar, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
