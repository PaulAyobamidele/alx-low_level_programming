#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Fress a 2d
 * @grid: The 2d array
 * @height: The height of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
