#include <stdio.h>
#include "main.h"
/**
*_strpbrk - function searches a string for any of a set of bytes
*@s: the string to be searched
*@accept: the bytes to be searched in the string
*Return: return a pointer to the matching s
*/

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *accept_ptr = accept;
while (*accept_ptr)
{
if (*s == *accept_ptr)
{
return (s);
}
accept_ptr++;
}
s++;
}
return (NULL);
}
