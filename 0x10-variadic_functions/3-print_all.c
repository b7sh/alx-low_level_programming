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
		switch (format[i])
		{
			case 'i':
			num = va_arg(ar, int);
			printf("%d", num);
			break;
			case 'f':
			f = va_arg(ar, double);
			printf("%f", f);
			break;
			case 'c':
			c = va_arg(ar, int);
			printf("%c", c);
			break;
			case 's':
			s = va_arg(ar, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			default:
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
