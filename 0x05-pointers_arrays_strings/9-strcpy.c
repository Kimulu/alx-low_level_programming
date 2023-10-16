#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*_strcpy - Function for printing an array
*@dest: buffer variable
*@src: string pointer
*Return: return value
*/
char *_strcpy(char *dest, char *src)
{
strcpy(dest, src);
return (*dest);
}
