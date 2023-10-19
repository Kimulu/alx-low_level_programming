#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
*string_toupper - function for changing a string to uppercase
*@str: the string to be evaluated
*Return: return a string that is uppercase
*/
char *string_toupper(char *str)
{
while (*str)
{
if (islower(*str))
{
return (toupper(*str));
}
str++;
}
return ('\0');
}
