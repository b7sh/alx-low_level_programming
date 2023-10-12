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
	int i;
	char c;
	float f;
	char *s;
	const char *compare;

	compare = format;
	va_start(ar, format);

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
		if ((*compare != *compare + 1) && *compare != 's')
			printf(", ");
		compare++;
	}
	printf("\n");
	va_end(ar);
}
