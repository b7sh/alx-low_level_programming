#include "main.h"

/**
 * _isalpha - check if the character is
 *          both lowercase and uppercase
 * @c: take input from other function
 * Return: 1 is c if tru else 0 (success)
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
