#!/usr/bin/python3
"""return perimeter of an island"""


def island_perimeter(grid):
    """Calculates perimenter of island

    Args:
        grind (list): list of list of integers

    Return:
        returns perimeter of island

    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col-1] == 1:
                    perimeter -= 2
    return perimeter
