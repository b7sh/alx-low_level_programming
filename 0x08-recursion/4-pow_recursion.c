#include "main.h"

/**
* _pow_recursion - print the power of integer
* @x: the integer to hold the power
* @y: the integer to be the power
* Return: -1 or 1 or x * _pow_recursion(x, y - 1)
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y <= 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
