#include "main.h"
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i < 0)
		printf("%d is negtive", i);
	else
		printf("%d is zero", i);
}
