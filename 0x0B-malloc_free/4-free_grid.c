#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Frees a grid
 * @grid: Holds a pointer to a pointer of an int
 * @height: Holds the height
 * Return: none
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
