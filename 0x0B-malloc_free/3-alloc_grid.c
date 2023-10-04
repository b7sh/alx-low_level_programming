#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - return pointer to 2 dimintional array
 * @width: the integer for width
 * @height: the integer for height
 * Return: null or 0 or array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int index1, index2;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (index1 = 0; index1 < height; index1++)
	{
		array[index1] = (int *)malloc(sizeof(int) * width);
		if (array[index1] == NULL)
		{
			free(array);
		for (index2 = 0; index2 <= index1; index2++)
			free(array[index2]);
		return (NULL);
		}
	}
	for (index1 = 0; index1 < height; index1++)
	{
		for (index2 = 0; index2 < width; index2++)
		{
			array[index1][index2] = 0;
		}
	}
	return (array);
}
