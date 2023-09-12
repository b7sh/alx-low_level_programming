#include <stdio.h>

/**
 * main - find and prints the first 98 Fibonacci numbers
 * Return: always 0 (success)
*/

int main(void)
{
	long int a;
	long int b;
	long int c;
	long int d;
	long int e;
	long int f;
	long int g;

	a = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %ld", c);
		c = c + b;
		b = c - b;
	}
	d = b / 1000000000;
	d = b % 1000000000;
	f = c / 1000000000;
	g = c % 1000000000;
	for (a = 92; a < 99; a++)
	{
		printf(", %lu", f + (g / 1000000000));
		printf("%lu", g % 1000000000);
		f = f + d;
		d = f - d;
		g = g + e;
		e = g - e;
	}
	printf("\n");
	return (0);
}
