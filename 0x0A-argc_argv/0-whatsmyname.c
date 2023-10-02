#include <stdio.h>
#include <stdlib.h>

/**
 * main - program print it's name
 * @argc: hold number greater than zero
 * @argv: hold the string
 * Return: succcess
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
