#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees 2d array
* @grid: 2d grid
* @height: height dimension of grid
* Description: frees memory of grid
* Return: nothing
*/
void free_grid(int **grid, int height)
{
int i;
int j;
int **x;
x = malloc(sizeof(int*) * height);
if (x == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
x[i] = malloc(sizeof(int*) * grid);
if (x[i] == NULL)
{       
free(x);
}
for (j = 0; j < grid; j++)
x[i][j];
}
return (free_grid);
}
