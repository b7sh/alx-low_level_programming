#include <stdio.h>

/**
 *main - first 50 Fibonacci numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{
long int a, b, c, sum;
b = 1;
c = 2;
for (a = 1; a <= 50; a++)
{
if (b != 20365011074)
{
printf("%li", b);
putchar(',');
putchar(' ');
}
else
{
printf("%li\n", b);
}
sum = b + c;
b = c;
c = sum;
}
return (0);
}
