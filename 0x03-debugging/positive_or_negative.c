#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Prints a string depending on the number passed.
 * @n: The number to be checked.
 *
 */
void positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

}
