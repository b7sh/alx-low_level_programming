#include "main.h"

/**
 * reverse_array - a function that reverses the
 * content of an array of integers
 * @a: the pointer integer
 * @n: the integer to decrease
 * Reaturn: nothing
 */

void reverse_array(int *a, int n)
{
	int begin = 0;
	int last = n - 1;

	while (begin < last)
	{
		int s = a[begin];

		a[begin] = a[last];
		a[last] = s;

		begin++;
		last--;
	}
}
