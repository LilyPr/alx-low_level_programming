#!/usr/bin/python3
"""Island perimeter program"""


def island_perimeter(grid):
    """Returns the perimeter from a grid"""
    if len(grid) == 0 or len(grid[0]) == 0:
        return 0

    rows_len = len(grid)
    column_len = len(grid[0])
    row_set = set()
    col_set = set()

    for row in range(rows_len):
        for col in range(column_len):
            if grid[row][col] == 1:
                row_set.add(row)
                col_set.add(col)

    total = (len(row_set) * 2) + (len(col_set) * 2)
    return total
