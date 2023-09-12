#include <stdin>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5
 * Return: always 0 (success)
*/

int main(void)
{
	long int my3, my5, sum;
	int i;

my3 = 0;
my5 = 0;
sum = 0;

for (x = 0; x < 1024; x++)
{
if ((x % 3) == 0)
{
my3 = my3 + x;
}
else if ((x % 5) == 0)
{
my5 = my5 + x;
}
}
sum = my3 + my5;
printf("%ld\n", sum);
return (0);
}
