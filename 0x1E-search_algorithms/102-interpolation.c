#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of integers using
 *                        the interpolation search algorithm
 * @array: A pointer to the first element of the array to search
 * @size:Size of the array
 * @value: Value to search for
 *
 * Return: First index of the value or -1 if array is NULL or
 *         value isn't present.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array)
	{
		while (low <= high && value >= array[low] && value <= array[high])
		{
			pos = low + (((double)(high - low) / (array[high] - array[low]))
					* (value - array[low]));

			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

			if (array[pos] == value)
				return (pos);
			else if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
		printf("Value checked array[%lu] is out of range\n", pos);
	}

	return (-1);
}
