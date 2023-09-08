#include <stdio.h>

/**
 * main - Entry point
 *
 * discripiton: print the alphabets in lower case exept q and e
 *
 * Return: Always 0 (success)
*/


int main(void)
{
char chr = 'a'
while (chr <= 'z')
{
if (chr == 'q' || chr == 'e')
chr++;
putchar(chr);
chr++;
}
putchar('\n')
return (0);
}
