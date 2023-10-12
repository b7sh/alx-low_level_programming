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
	char c;
	float f;
	char *s, *sr = "";
	int i = 0;

	va_start(ar, format);

		while (format && format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sr, va_arg(ar, int));
					break;
				case 'f':
					f = (double)va_arg(ar, int);
					printf("%s%f", sr, f);
					break;
				case 'c':
					c = (char)va_arg(ar, int);
					printf("%s%c", sr, c);
					break;
				case 's':
					s = va_arg(ar, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sr, s);
					break;
				default:
					i++;
					continue;
			}
			sr = ", ";
			i++;
		}
	printf("\n");
	va_end(ar);
}
