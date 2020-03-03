#include <stdlib.h>
/**
 * alloc_grid - allocates a 2x2 grid
 * @width: Holds the width
 * @height: Holds the height
 * Return: returns a pointer to an int pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (j = i - 1; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
