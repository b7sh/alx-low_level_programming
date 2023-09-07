#include <stdio.h>

/**
 * main - Entry point
 *
 * discripiton: using sizeof to print the varios types
 *
 * Reaturn: Always 0 (success)
*/

int main(void)
{
printf("size of a char: %u byte(s)\n", 1 sizeof(char));
printf("size of an int: %u byte(s)\n", 4 sizeof(int));
printf("size of a long int: %u byte(s)\n", 4 sizeof(long int));
printf("size of a long long int: %u byte(s)\n", 8 sizeof(long long int));
printf("size of a float: %u byte(s)\n", 4 sizeof(float));
return (0);
}

