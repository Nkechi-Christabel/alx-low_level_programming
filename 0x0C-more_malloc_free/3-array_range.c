#include <stdlib.h>

/**
 * array_range - The program creates an array of integers.
 * @min: Minimum value.
 * @max: Maximum value.
 *
 * Return: Pointer to the allocated memory on success or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc((max + 1) * sizeof(int));

	for (i = 0; arr != NULL && i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
