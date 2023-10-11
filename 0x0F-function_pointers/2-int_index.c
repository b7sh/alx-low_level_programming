#include "function_pointers.h"

/**
 * int_index - function search for an integer
 * @array: the integer variable
 * @size: the size of the array
 * @cmp: the function pointer
 * Return: -1 or index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != '\0')
			return (index);
	}
	return (-1);
}
