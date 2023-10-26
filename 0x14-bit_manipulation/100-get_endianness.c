#include "main.h"

/**
 * get_endianness - checks the indianness
 * Return: 1 if it little or 0 if it big
 */

int get_endianness(void)
{
	int num = 1;
	int *ptr = &num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
