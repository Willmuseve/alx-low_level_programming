#!/usr/bin/python3
"""perimeter of an island
"""


def num_water_neighbors(grid, x, y):
    """Returns the perimeter of the island in a grid"""

    z = 0

    if x <= 0 or not grid[x - 1][y]:
        z += 1
    if y <= 0 or not grid[x][y - 1]:
        z += 1
    if y >= len(grid[x]) - 1 or not grid[x][y + 1]:
        z += 1
    if y >= len(grid) - 1 or not grid[x + 1][y]:
        z += 1

    return z


def island_perimeter(grid):
    """Returns the perimeter of the island in the grid."""

    p = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y]:
                p += num_water_neighbors(grid, x, y)

    return p
