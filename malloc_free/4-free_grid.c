
#include "main.h"
/**
 * free_grid - free the previous 2d array
 * @grid: 2d array
 * @height: rows of array

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
