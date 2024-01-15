#include "search_algos.h"

/**
 * min - Returns the minimum between value a and b
 *
 * @param a The first value.
 * @param b The second value.
 * @return The minimum of 'a' and 'b'.
 */
int min(int a, int b)
{
	return b > a ? a : b;
}

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0;

	if (array)
	{
		while (array[min(step, value) - 1] < value)
		{
			prev = step;
			step += sqrt(size);
		
			if (prev >= size)
				return (-1);
		}

		while (array[prev] < value)
		{
			prev += 1;
			if (prev == (size_t)min(step, size))
					return (-1);
		}

		if (array[prev] == value)
			return (int)(prev);
	}

	return (-1);
}
