#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum of numbers
 * @argc: hold value greater than zero
 * @argv: hold the string
 * Return: 1 or 0 (success)
 */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];
		int num2 = atoi(num);

		if (num2 <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num2;
	}
	printf("%d\n", sum);
	return (0);
}
