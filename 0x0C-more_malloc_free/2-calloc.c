#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element.
 * Return: A pointer to the allocated and zero-initialized memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	{
		char *cp = (char *)ptr;
		unsigned int total_bytes = nmemb * size;

		while (total_bytes > 0)
		{
			*cp++ = 0;
			total_bytes--;
		}
	}

	return (ptr);
}
