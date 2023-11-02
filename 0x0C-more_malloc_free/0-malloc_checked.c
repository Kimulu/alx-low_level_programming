#include <stdlib.h>
#include <stdio.h>
/**
*malloc_checked - function to allocate memory
*Return: 0
*@b: the integer to be passed
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
