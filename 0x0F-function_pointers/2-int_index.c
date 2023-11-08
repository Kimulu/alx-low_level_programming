#include <stddef.h>
#include "function_pointers.h"
/**
* int_index - Searches for an integer in an array using a comparison function
* @array: The array to be searched
* @size: The number of elements in the array
* @cmp: A pointer to the comparison function
* Return: Index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
int i = 0;
while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
return (-1);
}
