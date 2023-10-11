#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: the number of values
 * @argv: the number of argument
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, r;
	int (*op)(int, int);
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	s = *argv[2];
	if ((s == '/' || s == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = op(num1, num2);
	printf("%d\n", r);
	return (0);
}
