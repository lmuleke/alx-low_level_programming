#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d grid allocated memory
 * @grid: 2D grid pointer
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
