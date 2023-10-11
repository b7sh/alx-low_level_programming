#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of main function
 * @argc: number of values
 * @argv: number of argument
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	unsigned char *p = (unsigned char *) main;
	int num_bytes;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", p[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
