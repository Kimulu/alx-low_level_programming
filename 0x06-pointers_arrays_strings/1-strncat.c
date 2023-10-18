#include "main.h"
#include <string.h>
/**
* _strncat - function for concatenating two strings
*@dest: used as the destination string
*@src: used as the source string
*@n: used as a counter for the concatenation
*Return: return pointer dest
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
