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
	int i = "";
	const char *compare;
	float f = "";
	char c = "";
	char *s = "";

	va_start(ar, format);
	compare = format;

	while (*compare)
	{
		if (*compare == 'i')
		{
			i = va_arg(ar, int);
			printf("%d", i);
		}
		else if (*compare == 'f')
		{
			f = (float)va_arg(ar, int);
			printf("%f", f);
		}
		else if (*compare == 'c')
		{
			c = (char)va_arg(ar, int);
			printf("%c", c);
		}
		else if (*compare == 's')
		{
			s = va_arg(ar, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		compare++;
	}
	printf("\n");
	va_end(ar);
}
