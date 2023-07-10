#include <stdlib.h>

/**
 * free_grid - It frees a 2 dimensional grid
 * @grid: The grid to free up
 * @height: Height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

}
