#include <stdio.h>

/**
 *main - print the sum of the even-valued terms
 *Return: always 0 (success)
*/

int main(void)
{
int first;
int second, third, next, sum;

second = 1;
third = 2;
sum = 0;
for (first = 1; first <= 33; first++)
{
if (second < 4000000 && (second % 2) == 0)
{
sum = sum + second;
}
next = second + third;
second = third;
third = next;
}

printf("%d\n", sum);

return (0);
}
