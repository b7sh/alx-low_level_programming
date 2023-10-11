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
	int n1, n2, r;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = op(n1, n2);
	printf("%d\n", r);
	return (0);
}
