#include "main.h"

/**
* _strlen_recursion - print the lenghth using recursion
* @s: the charactar
* Return: 0 (success) or 1 + _strlen_recursion(s + 1)
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}
