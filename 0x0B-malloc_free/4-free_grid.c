#include "main.h"
#include <stdlib.h>


/**
 * free_grid - Fress a 2-dimensional array of integers
 * @grid: The 2-dimensional array of integers to be free
 * @height: The height of gid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);


	free(grid);
}
