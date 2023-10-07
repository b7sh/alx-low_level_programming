#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers
 * @min: hold the minimum value
 * @max: hold the maximum value
 * Return: null or arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = min++;
	return (arr);
}
