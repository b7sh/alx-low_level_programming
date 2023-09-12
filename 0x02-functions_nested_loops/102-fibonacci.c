#include <stdio.h>

/**
 *main - first 50 Fibonacci numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{
int a;
int b = 1;
int c = 2;
int sum;
for (a = 1; a <= 50; a++)
{
if (b != 203650110)
{
printf("%d", b);
}
else
{
printf("%d\n", b);
}
sum = (a + b);
b = c;
c = sum;
}
return (0);
}
