#include <stdio.h>
/**
* _strncpy - Copy two strings together
*@dest: used as the destination string
*@src: used as the source string
*@n: used as a counter for the concatenation
*Return: return pointer dest
*/
char *_strncpy(char *dest, char *src, int n)
{
char *result = dest;
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (result);
}
