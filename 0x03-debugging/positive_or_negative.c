#include "main.h"
/**
 *positive_or_negative: to test fot zero
 *description: 'program to return 0'
 *return: always return 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}
}
