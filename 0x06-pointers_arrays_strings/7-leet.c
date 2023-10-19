#include <stdio.h>
#include "main.h"
/**
*leet - function for encoding a string
*@str: the string to be converted
*Return: return a string that is uppercase
*/
char *leet(char *str)
{
char *res = str;
while (*str)
{
int i;
for (i = 0; i < 5; i++)
{
if (*str == "aeotl"[i] || *str == "AEOTL"[i])
{
*str = "43071"[i];
break;
}
}
str++;
}
return (res);
}
