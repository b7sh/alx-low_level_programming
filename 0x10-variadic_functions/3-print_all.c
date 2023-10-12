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
				printf("%d", va_arg(ar, int));
				break;
			case 'f':
				printf("%f", va_arg(ar, double));
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
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
