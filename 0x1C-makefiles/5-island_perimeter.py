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
    peri, x = 0, 0
    for row in grid:
        if len(grid) <= x + 1:
            break
        for y in range(0, len(row)):
            if grid[x][y] == 1:
                if grid[x][y + 1] == 0:
                    peri += 1
                if grid[x][y - 1] == 0:
                    peri += 1
                if grid[x + 1][y] == 0:
                    peri += 1
                if grid[x - 1][y] == 0:
                    peri += 1
        x += 1
    return peri
