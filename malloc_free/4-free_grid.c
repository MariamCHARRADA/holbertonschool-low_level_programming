#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2D grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; i < j; j++)
		{
			free(grid[j]);
		}
	}
	free(grid);
}
