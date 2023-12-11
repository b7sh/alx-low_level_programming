#include <stdio.h>

/**
 * add - function for add two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of two numbers
*/

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function for subtract two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sub of two numbers
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function for multiply two numbers
 * @a: the first number
 * @b: the second number
 * Return: the mul of two numbers
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function for divide two numbers
 * @a: the first number
 * @b: the second number
 * Return: 0 if the second number is zero or the div otherwise
*/

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error:can't divide by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - function for find the mod of two numbers
 * @a: the first number
 * @b: the second number
 * Return: 0 if the second number is zero or mod otherwise
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error:can't mod by zero\n");
		return (0);
	}
	return (a % b);
}
