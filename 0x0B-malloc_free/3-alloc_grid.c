#include <stdlib.h>
#include <stdio.h>
/**
*alloc_grid - function to add a 2D array to memory
*Return: returns pointer to a 2D array
*@width: width of the array
*@height: height of array
*/
int **alloc_grid(int width, int height)
{
int i;
int j;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
i = 0;
while (i < height)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i >= 0)
free(grid[i--]);
free(grid);
return (NULL);
}
j = 0;
while (j < width)
grid[i][j++] = 0;
i++;
}
return (grid);
}
