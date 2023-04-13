#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees alocated memory
 * @grid: hfhfh
 * @height: hfhdh
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
	}
		free(grid);
}
