#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: A pointer to the first element of the array to search
 * @size:Size of the array
 * @value: Value to search for
 * Return: Returns first index of the value or -1 if array is NULL
 *         or value isn't present.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%li] = [%i]\n", x, array[x]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
