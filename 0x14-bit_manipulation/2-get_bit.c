#include <stdio.h>
#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number
 * @index: The index of the bit to be retrieved
 * Return: The value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((int)((n >> index) & 1));
}
