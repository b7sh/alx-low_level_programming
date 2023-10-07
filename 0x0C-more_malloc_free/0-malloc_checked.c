#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: the integer to enter the size of memory
 * Return: a
 */

void *malloc_checked(unsigned int b)
{
	int *s;

<<<<<<< HEAD
        s = malloc(b);

=======
	s = malloc(b);
	
>>>>>>> e63869df8b3325bff2cf49626af359dd4cc61634
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
