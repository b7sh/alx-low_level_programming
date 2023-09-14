#include <stdio.h>
#include <math.h>

/**
 * main - find and print the largest prime factor of
 * the number 612852475143, followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	long int a;
	long int mx;
	long int b;

a = 612852475143;
mx = -1;

while (a % 2 == 0)
{
	mx = 2;
	a /= 2;
}
for (b = 3; b <= sqrt(a); b = b + 2)
{
	while (a % b == 0)
	{
		mx = b;
	a = a / b;
	}
}
if (a > 2)
{
	mx = a;
	printf("%ld", mx);
}
	return (0);
}
