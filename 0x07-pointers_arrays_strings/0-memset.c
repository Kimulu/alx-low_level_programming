#include <stdio.h>
#include "main.h"
/**
*_memset - function for setting memory
*@b: variable used to set memory
*@n: the number of times the var b is used
*@s: A pointer to the memory area you want to fill
*Return: return a pointer to the
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
