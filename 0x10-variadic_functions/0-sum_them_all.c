#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all parameters
 * @n: the function argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list count;
	int o;

	va_start(count, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		o = va_arg(count, const unsigned int);
		sum += o;
	}
	va_end(count);
	return (sum);
}
