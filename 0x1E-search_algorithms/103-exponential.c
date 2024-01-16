#include "search_algos.h"

/**
 * _binary_search - Performs binary search in the given sorted array
 *                  within the specified range.
 * @array: Pointer to the array to be searched.
 * @low: Starting index of the search range.
 * @high:  Ending index of the search range.
 * @value: Value to be searched for.
 *
 * Return: Index of the found value, or -1 if not found.
 */
int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (array && low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");

		for (i = low; i < high; ++i)
			printf("%d, ", array[i]);

		printf("%d\n", array[high]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the exponential search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: Size of the array.
 * @value: The value to search for.
 *
 * Return: Index of the value or -1 if array is NULL or value isn't present.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (i * 2 < size)
			i *= 2;
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					i, size - 1);
			return (_binary_search(array, i, size - 1, value));
		}
	}

	return (_binary_search(array, i / 2, i, value));
}
