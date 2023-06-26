#include <stdio.h>

/**
 * swap_int - The program swaps the values of two integers.
 * @a: Integer one to be swapped.
 * @b: Integer two to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
