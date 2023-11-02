#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocate memory block with malloc and free.
 * @ptr: Pointer to the old memory block.
 * @old_size: Size of the old memory block.
 * @new_size: New size for the memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0)
{
if (ptr != NULL)
{
free(ptr);
}
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size > old_size)
{
return (_realloc_large(ptr, old_size, new_size));
}
return (_realloc_small(ptr, old_size, new_size));
}
