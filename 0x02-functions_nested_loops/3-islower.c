#include "main.h"

/**
 * _islower - function to check the lowercase
 *
 * @c: character input for the function
 * Return: return 1 if c is lowercase
 *          otherwise always 0 (seccess)
 */

int _islower(int c)
{
if (c >= 97 && c <= 102)
return (1);
return (0);
}
