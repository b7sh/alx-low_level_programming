#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98, followed by a new line
 * @n: print from it
*/

void print_to_98(int n)
{
int first, second;

if (n <= 98)
{
for (first = n; first <= 98; first++)
{
if (first != 98)
printf("%d, ", first);
else if (first == 98)
printf("%d\n", first);
}
}
else if (n >= 98)
{
for (second = n; second >= 98; second--)
{
if (second != 98)
printf("%d, ", second);
else if (second == 98)
printf("%d\n", second);
}
}
}
