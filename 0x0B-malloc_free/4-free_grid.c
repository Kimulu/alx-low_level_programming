#include <stdlib.h>
#include <stdio.h>
/**
*free_grid - function to free memory allocated by 2D array
*Return: 0
*@grid: the array
*@height: height of array
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}
i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
i = 0;
while (i < height)
{
grid[i] = NULL;
i++;
}
free(grid);
}
