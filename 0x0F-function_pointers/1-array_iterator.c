#include "function_pointers.h"

/**
 * array_iterator - excute a function given as a parameter of  array
 * @array: the integer variable
 * @size: the size_t variable
 * @action: the function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (!array || !action)
		return;
	for (index = 0; index < size; index++)
		action(array[index]);
}
