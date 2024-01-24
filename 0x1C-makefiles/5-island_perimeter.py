#!/usr/bin/python3

""" An Island Perimeter """


def island_perimeter(grid):
    """A that returns the perimeter of the island described in grid:
            - grid is a list of list of integers:
                0 represents a water zone
                1 represents a land zone
                One cell is a square with side length 1
                Grid cells connected horizontally/vertically (not diagonally).
                Grid is rectangular, width and height don’t exceed 100
            - Grid is completely surrounded by water, and there is one
                island (or nothing).
            - The island doesn’t have “lakes” (water inside that isn’t
                    connected to the water around the island).
    Args:
         grid (array): An array of lists that represent an island.
    Returns:
            The perimeter of the island
    """

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(1, rows - 1):
        for j in range(1, cols - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
