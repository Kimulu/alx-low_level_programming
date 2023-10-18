#include <stdio.h>
#include "main.h"
/**
*_strncat - function for concatenation
*@dest: destination string
*@src: source string
*@n: digit for regulating how many characters will be used for src
*Return: return pointer for the destination
*/
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (result);
}
