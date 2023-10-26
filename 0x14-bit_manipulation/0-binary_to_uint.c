#include "main.h"

/**
 * binary_to_unit - convert from binary to decimal
 * @b: our char to hold binary numbers
 * Return: sum or 0 if it NULL and if it not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	size_t sum = 0;
	int i = 0;
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum = (sum << 1) + (b[i] - '0');
		i++;
	}
	return (sum);
}
