#include "main.h"

/**
 * alloc_grid - allocates a grid, make space and free space
 *
 * @width: takes in width of grid
 *
 * @height: height of grid
 *
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NUL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

