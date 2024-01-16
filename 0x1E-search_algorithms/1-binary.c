#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: Size of the array.
 * @value: The value to search for.
 *
 * Return: index of the value or -1 if array is NULL or value isn't present.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m, i;

	while (array && l <= r)
	{
		m = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}
