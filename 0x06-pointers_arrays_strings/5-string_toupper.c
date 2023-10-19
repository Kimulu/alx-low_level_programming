#include <stdio.h>
#include "main.h"
/**
*string_toupper - function for changing a string to uppercase
*@str: the string to be converted
*Return: return a string that is uppercase
*/
char *string_toupper(char *str)
{
char *res = str;
while (*str)
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
str++;
}
return (res);
}
