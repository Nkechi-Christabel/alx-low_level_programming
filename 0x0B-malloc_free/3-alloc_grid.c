#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - It returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to the concatenated string if successful or
 * NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(*arr));

	for (i = 0; arr != NULL && i < height; i++)
	{
		arr[i] = malloc(sizeof(*arr[i]) * width);
		
		if(arr[i])
		{
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
		else
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
		}

	}

	return (arr);

}
