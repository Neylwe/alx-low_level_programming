#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - writes a function that returns a pointer to a
 * 2 dimensional array integers
 * @width: input width of array integer
 * @height: input height of array integer
 * Return: return 2D pointer or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int b, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (b = 0; b < height; a++)
	{
		a[b] = (int *)malloc(sizeof(int) * width);
			if (a[b] == NULL)
			{
				for (c = 0; c < b; c++)
				{
					free(a[c]);
				}
				free(a);
			}
	}
	for (b = 0; b < height; b++)
		for (c = 0; c < width; c++)
			a[b][c] = 0;
	return (a);
}
