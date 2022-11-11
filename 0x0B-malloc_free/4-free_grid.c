#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array of integers
 * @grid: The 2D array of to be freed.
 * @height: The height of the grid.
 *
 * Return: 0.
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);

	free(grid);
}
