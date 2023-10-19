#include <stdio.h>
#include "main.h"
/**
*cap_string - function for changing a string to uppercase
*@str: the string to be converted
*Return: return a string that is uppercase
*/
char *cap_string(char *str)
{
char *res = str;
int capitalize_next = 1;
while (*str)
{
if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' ||
*str == ';' ||
*str == '.' || *str == '!' || *str == '?' || *str == '"' || *str == '(' ||
*str == ')' || *str == '{' || *str == '}')
{
capitalize_next = 1;
}
else if (capitalize_next)
{
if (*str >= 'a' && *str <= 'z')
{
*str -= 32;
}
capitalize_next = 0;
}
str++;
}
return (res);
}
