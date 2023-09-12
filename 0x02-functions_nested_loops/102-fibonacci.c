#include <stdio.h>

/**
 *main - first 50 Fibonacci numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{
unsigned long int a;
unsigned long int b = 1;
unsigned long int c = 2;
unsigned long int sum;
for (a = 1; a <= 50; a++)
{
if (b != 203650110)
{
printf("%lu\n", b);
}
else
{
printf("%lu", b);
}
sum = (a + b);
b = c;
c = sum;
}
return (0);
}
