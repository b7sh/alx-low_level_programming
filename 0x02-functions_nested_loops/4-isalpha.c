#include "main.h"

/**
 * _isalpha - check if the character is
 *          both lowercase and uppercase
 * @c: take input from other function
 * Return: 1 is c if tru else 0 (success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 102)
		return (1);
			if (c >= 65 && c <= 90)
				return (1);
			return (0);
}
