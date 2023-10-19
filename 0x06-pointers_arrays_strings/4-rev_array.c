#include <stdio.h>
#include "main.h"
/**
*reverse_array - function for reversing elements
*@a: pointer to the array
*@n: the size of the array
*/
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
while (start < end)
{
int temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}
