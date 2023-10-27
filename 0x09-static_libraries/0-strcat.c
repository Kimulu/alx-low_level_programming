#include <stdio.h>
#include "main.h"
/**
*_strcat - function for concatenating two strings
*@dest: destination string
*@src: source string
*Return: return the destination pointer
*/
char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (result);
}
