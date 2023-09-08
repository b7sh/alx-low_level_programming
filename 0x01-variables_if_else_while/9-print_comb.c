#include <stdio.h>

/**
 * main - Entry point
 *
 * discripition: print the number from 0 to 9
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int number = 0;
while (number <= 9)
{
putchar(number + 0);
if (number != 9)
{
putchar(',');
putchar(' ');
}
number++;
}
putchar('\n');

return (0);
}
