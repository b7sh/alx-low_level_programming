#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: the array
 * @size: the compare integer
*/

void print_diagsums(int *a, int size)
{
	int firstsum = 0;
	int secondsum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		firstsum += a[i * size + i];
		secondsum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", firstsum, secondsum);
}
