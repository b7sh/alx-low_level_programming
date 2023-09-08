#include <stdio.h>

/**
 * main - Entry point
 *
 * discripiton: print the hexadecimal in lower case
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int num;

for (num = 0; num <= 15; num++)
{
putchar(num);
}
putchar('\n');

return (0);
}
