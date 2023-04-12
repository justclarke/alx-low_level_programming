#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer tp a 2 dimesional array of integers
* @width: width of the array
* @height: height of the array
* Return: a pointer to a 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
	}
	if (grid[i] == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
