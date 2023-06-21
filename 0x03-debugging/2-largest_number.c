#include "main.h"
#include <stdlib.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest, i = abs(a), j = abs(b), k = abs(c);

	if (i > j && i > k)
	{
		largest = i;
	}
	else if (j > i && j > k)
	{
		largest = j;
	}
	else
	{
		largest = k;
	}

	return (largest);
}
