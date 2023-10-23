#include <stdio.h>
#include "main.h"
/**
*_memcpy - function for copying memory
*@src: source of the memory area
*@n: the number of bytes
*@dest: destination of the memory area
*Return: return a pointer to the
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

