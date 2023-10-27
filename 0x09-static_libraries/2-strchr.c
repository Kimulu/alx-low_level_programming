#include <stdio.h>
#include "main.h"
/**
*_strchr - function for checking occurence of C
*@s: the string to be evaluated
*@c: the character to be checked
*Return: return a pointer to the character
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}

