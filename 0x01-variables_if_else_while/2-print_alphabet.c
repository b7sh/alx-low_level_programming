#include <stdio.h>

/**
 * main - Entry point
 *
 * discripiton: print alphapets in lower case
 *
 * Return: Always 0 (success)
*/

#include <stdio.h>
int main(void)
{
char chr = 'a';

for (chr = 'a'; chr <= 'z' ; chr++)
{
putchar(chr);
}
putchar('\n');
return (0);
}
