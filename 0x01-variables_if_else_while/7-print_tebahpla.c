#include <stdio.h>

/**
 * main - Entry point
 *
 * discripiton: print the alphabets in reverse case
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char cr = 'z';
while (cr >= 'a')
{
putchar(cr);
cr--;
}
putchar('\n');
return (0);
}
