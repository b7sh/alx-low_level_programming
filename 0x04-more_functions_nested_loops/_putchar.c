#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charactar c
 * @c: the charactar
 *
 * Return: 1 (success) or -1 (error)
 */

int _putchar(char c)
{
	return(write(1, &c,1));
}
