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
if (n > 0)
{
if (i == n)
{
printf("%d", i);
}
else if (i < n)
{
while (i < n)
{
printf("%d", i);
printf(",");
printf(" ");
i++;
}
}
}
printf("\n");
}
