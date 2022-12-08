#!/usr/bin/python3


def island_perimeter(grid):
    """ Function that returns detail of a grid"""

    peri = 0;
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] == 0 or i == 0:
                        peri += 1
                except IndexError:
                    peri += 1
                    try:
                        if grid[i + 1][j] == 0:
                            peri += 1
                    except IndexError:
                        peri += 1
                        try:
                            if grid[i][j - 1] == 0 or j == 0:
                                peri += 1
                        except IndexError:
                            peri += 1
                            try:
                                if grid[i][j + 1] == 0:
                                    peri += 1
                            except IndexError:
                                peri += 1
return (peri)
