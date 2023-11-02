#include <stdlib.h>
#include "main.h"
/**
 * _realloc_small - Reallocate memory block with malloc and free for smaller size.
 * @ptr: Pointer to the old memory block.
 * @old_size: Size of the old memory block.
 * @new_size: New size for the memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 */
void *_realloc_small(void *ptr, unsigned int old_size, unsigned int new_size) {
    void *new_ptr = malloc(new_size);

    if (new_ptr == NULL) {
        return NULL;
    }

    unsigned int i = 0;
    while (i < new_size) {
        ((int *)new_ptr)[i] = ((int *)ptr)[i];
        i++;
    }

    free(ptr);
    return new_ptr;
}

