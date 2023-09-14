#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charactar c to stdout
 * @c: the charactar to print
 *
 * Return: on seccess 1
 * on error, -1 is returned, and error is set appropiately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
