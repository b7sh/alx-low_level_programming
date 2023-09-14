#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the charactar c
 * @c: the charactar to print
 *
 * Return: 1 (success)
 * on error, -1 is returned, and error is set
 */

int _putchar(char c)
{
return(write(1, &c,1));
}
