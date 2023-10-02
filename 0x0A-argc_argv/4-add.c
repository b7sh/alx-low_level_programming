#include <stdio.h>
#include <stdlib.h>

/**
 * is_all_digit - function to help
 * @str: pointer to hold the value
 * Return: o or 1
 */

int is_all_digit(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

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

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];
		int num2 = atoi(num);

		if (!is_all_digit(num))
		{
			printf("Error\n");
			return (1);
		}
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
