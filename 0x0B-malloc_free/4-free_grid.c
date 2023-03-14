#include "main.h"
#include <stdlib.h>

/**
 * free_grid - write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: input pointer to grid
 * @height:input height of array
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int a;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
