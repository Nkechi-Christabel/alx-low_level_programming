#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check
 * @index: The index of the number to return
 *
 * Return: The value of the bit at index index or -1 if an error
 * occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int left_shift;
	int val;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	left_shift = 1 << index;

	val = (n & left_shift) != 0 ? 1 : 0;

	return (val);
}


