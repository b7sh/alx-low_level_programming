#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: hold the array values
 * @size: the size of the array
 * @value: the value we need to check
 * Return:  The index in success or -1 in fail
*/

int jump_search(int *array, size_t size, int value)
{
	size_t s;
	size_t p;
	size_t index;

	if (!array || !size)
	{
		return (-1);
	}
	s = sqrt(size);
	index = p = 0;
	while (p < size && array[p] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", p, array[p]);
		index = p;
		p += s;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", index, p);
	p = p < size - 1 ? p : size - 1;
	while (index < p && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index++;
	}
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	return (array[index] == value ? (int)index : -1);

}
