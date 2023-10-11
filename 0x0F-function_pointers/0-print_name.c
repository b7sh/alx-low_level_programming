#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the string variable
 * @f: the function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
