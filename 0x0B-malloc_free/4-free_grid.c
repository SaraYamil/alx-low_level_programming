#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - zzzzz eeeeee nnnnnn
 * @grid: varible pointer
 * @height: height dimension  ta3 variable
 * Description: free memoire w safe
 * Return: maso9akch
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

