#include <stdio.h>
#include <stdlib.h>

/**
 * main - program print the number of argument
 * @argc: hold value greater than zero
 * @argv: hold the string
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
