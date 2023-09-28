#include "main.h"

/**
* prime - test the number prime or not
* @a: the integer number
* @num: the devidor
* Return: 0 or 1 or prime(a, a - 1)
*/

int prime(int a, int num)
{
	if (a <= 1)
	{
	return (0);
	}
	if (num == 1)
	{
		return (1);
	}
	if (a % num == 0)
	{
		return (0);
	}
		return (prime(a, num - 1));
}

/**
* is_prime_number - return 1 if prime number
* and zero if it's not prime number
* @n: the integer
* Return: the function
*/

int is_prime_number(int n)
{
		return (prime(n, n - 1));
}
