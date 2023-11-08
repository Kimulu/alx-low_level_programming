#include <stddef.h>
#include "function_pointers.h"
/**
* array_iterator - Execute a function on each element of an array
* @array: The array to be processed
* @size: The number of elements in the array
* @action: A pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
