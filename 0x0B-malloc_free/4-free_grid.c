#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid - a function that frees previous alloc-grid function.
 *@grid:param 1
 *@height:param 2
 *Return: returns none.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);

}
