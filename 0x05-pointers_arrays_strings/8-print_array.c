#include <stdio.h>
#include "main.h"
/**
*print_array - Function for printing an array
*@n:  number of elements in array
*@a:  the array
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
