#include "main.h"

/**
* factorial - print the factorial of numbers
* @n: the integer
* Return: 0 (success) or n * fatorial(n - 1)
*/

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
