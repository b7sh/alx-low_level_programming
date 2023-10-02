#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of two numbers
 * @argc: hold value greater than zero
 * @argv: hold the string
 * Return: 1 or 0 (success)
 */

int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];
		int num2 = atoi(num);

		mul = mul * num2;
	}
	printf("%d\n", mul);
	return (0);
}
