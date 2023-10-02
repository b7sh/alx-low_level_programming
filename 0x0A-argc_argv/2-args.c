#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all argument
 * @argc: hold value greater than zero
 * @argv: hold the string
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
