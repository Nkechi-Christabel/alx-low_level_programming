#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: Size of the array.
 * @value: The value to search for.
 *
 * Return: Index of the value or -1 if array is NULL or value isn't present.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), current = 0, prev = 0, i;

	if (array == NULL)
		return (-1);

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			       current, array[current]);

		prev = current;
		current += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev, current);

	for (i = prev; i < size && array[i] <= value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				       i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
