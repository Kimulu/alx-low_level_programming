#include <stdio.h>
#include "main.h"
/**
*_memset - function for setting memory
*@b: variable used to set memory
*Return: return a pointer to the memory
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return s;
}
