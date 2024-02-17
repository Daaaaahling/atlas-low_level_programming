#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocated to two dimensional grid
 * @grid: grid to be freed
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int u;

	for (u = 0; u < height; u++)
		free(grid[u]);
	free(grid);
}
