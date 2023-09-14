#include <stdio.h>

/**
 * main - print numbers from 1 - 100 followed by new line
 * the number multiplied by 3 print Fizz
 * the numbers multiplied bu 5 print Buzz
 * the number multiplied by 3 and 5 print FizzBuzz
 *
 * Return: always 0 (success)
 */


int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
