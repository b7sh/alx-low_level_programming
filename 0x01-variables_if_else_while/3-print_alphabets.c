#include <stdio.h>

/**
 * main - Entry point
 *
 * discripiton: print the alphabets in lower case and uooer case
 *
 * Return: Always 0 (success)
*/

int main(void)
{

char chr1 = 'a';
char chr2 = 'A';
while (chr1 <= 'z')
{
putchar(chr1);
chr1++;
}
while (chr2 <= 'Z')
{
putchar(chr2);
chr2++;
}
return (0);
}
