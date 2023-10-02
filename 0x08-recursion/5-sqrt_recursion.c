#include "main.h"

/**
* find_square_root - solve and back to the root function
* @a: the first integer
* @num: the second integer
* Return: -1 or num or find_square_root(a, num + 1)
*/

int find_square_root(int a, int num)
{
	if (a < 0)
	{
		return (-1);
	}
	if (num * num > a)
	{
		return (-1);
	}
	if (num * num == a)
	{
		return (num);
	}
		return (find_square_root(a, num + 1));
}

/**
* _sqrt_recursion - find the square root
* @n: the integer
* Return: the function
*/

int _sqrt_recursion(int n)
{
	return (find_square_root(n, 0));
}
