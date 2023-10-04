#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  a function that frees a 2 dimensional array
 * @grid: the first integer
 * @height: the second integer
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	if (grid == NULL || height == 0)
		return;
	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
