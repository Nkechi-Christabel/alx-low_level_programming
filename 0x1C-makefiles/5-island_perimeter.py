#!/usr/bin/python3

"""It creates a function def island_perimeter(grid) that returns
the perimeter of the island described in grid."""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (List[List[int]]): A list of lists representing the island grid.
      0 represents a water zone, and 1 represents a land zone.

    Returns:
    - int: The perimeter of the island.

    Constraints:
    - Grid is rectangular, with width and height not exceeding 100.
    - Grid is completely surrounded by water, and there is one island
    (or nothing).
    - The island doesn’t have “lakes” (water inside that isn’t connected to
    the water around the island).
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check left
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                # Check top
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter
