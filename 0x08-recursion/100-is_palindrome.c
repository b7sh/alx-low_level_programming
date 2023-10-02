#include "main.h"
int _strl(char *);
int test_palidrome(char *, int, int);

/**
* is_palindrome - check if the steing is palindrome
* @s: the character
* Return: 1 or test_palindrome
*/

int is_palindrome(char *s)
{
if (*s == 0)
{
	return (1);
}
	return (test_palidrome(s, 0, _strl(s)));
}

/**
* _strl - find the string lenghth
* @s: the character
* Return: 0 or 1 + _strl(s + 1)
*/

int _strl(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strl(s + 1));
}

/**
* test_palidrome - test if the string is palidrome
* @s: the character will be tested
* @l: the left side integer
* @r: the right side integer
* Return: 0 or 1 or test_palidrome(s, l + 1, r - 1)
*/

int test_palidrome(char *s, int l, int r)
{
	if (*(s + l) != *(s + r - 1))
	{
		return (0);
	}
	if (l >= r)
	{
		return (1);
	}
		return (test_palidrome(s, l + 1, r - 1));
}
