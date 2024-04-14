#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: hold the array values
 * @size: the size of the array
 * @value: the value we need to check
 * Return: the index in success or -1 in fail
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;
	size_t index;

	if (!array)
	{
		return (-1);
	}
	while (l <= r)
	{
		m = l + (r - l) / 2;
		printf("Searching in array: ");
		for (index = l; index <= r; index++)
		{
			if (index == r)
			{
				printf("%d\n", array[index]);
			}
			else
			{
				printf("%d, ", array[index]);
			}
		}
		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return (-1);
}
