#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value.
 * @max: The maximum value.
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int *result = (int *)malloc((max - min + 1) * sizeof(int));

	if (result == NULL)
		return (NULL);

	int *ptr = result;
	int i = min;

	while (i <= max)
	{
		*ptr = i;
		ptr++;
		i++;
	}

	return (result);
}
