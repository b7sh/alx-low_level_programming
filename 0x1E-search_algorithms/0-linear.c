#include "search_algos.h"

/**
 * linear_search - search for a value in an array of
 * integers using the Linear search algorithm
 * @array: hold the array values
 * @size: the size of the array
 * @value: the value we need to check
 * Return: the index in success or -1 in fail
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
