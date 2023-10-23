#include <stdio.h>
#include "main.h"
/**
*print_diagsums - function that prints the sum of the diagonals
*@a: 2d array pointer
*@size: the size of the array
*/
void print_diagsums(int *a, int size)
{
int sum_primary = 0;
int sum_secondary = 0;
int i = 0;
while (i < size)
{
sum_primary += a[i * size + i];
sum_secondary += a[i * size + (size - 1 - i)];
i++;
}
printf("%d, %d\n", sum_primary, sum_secondary);
}
