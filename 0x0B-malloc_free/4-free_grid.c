#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: grid of memories
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
int point;
for (point = 0; point < height; point++)
free(grid[point]);
free(grid);
}
