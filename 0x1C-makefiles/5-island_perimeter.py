#!/usr/bin/python3
"""THis module contains the function to find the perimeter of an island
"""


def island_perimeter(grid):
    """Function to find the perimeter of a island

    Args:
        grid (list of lists): Contains the "map" of the island

    Returns:
        int: Perimeter of such island
    """
    peri = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if grid[x][y + 1] == 0:
                    peri += 1
                if grid[x][y - 1] == 0:
                    peri += 1
                if grid[x + 1][y] == 0:
                    peri += 1
                if grid[x - 1][y] == 0:
                    peri += 1
    return peri
