#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Function that frees a 2 dimensional grid,
  * previously created by the alloc_grid function
  *
  * @grid: The first parameter
  * @height: The second parameter
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
