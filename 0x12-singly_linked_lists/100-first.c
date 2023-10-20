#include "lists.h"

void print() __attribute__ ((constructor));

/**
 * print - print message
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
