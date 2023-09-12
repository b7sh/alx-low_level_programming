#include <stdio.h>

/**
 *main - first 50 Fibonacci numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{
long int a;
long int b = 1;
long int c = 2;
long int sum;
for (a = 1; a <= 50; a++)
{
if (b != 203650110)
{
printf("%li\n", b);
}
else
{
printf("%li", b);
}
sum = a + b;
b = c;
c = sum;
}
return (0);
}
