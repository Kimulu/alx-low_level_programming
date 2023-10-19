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
if (((*str == 'a' || *str == 'A') && (i == 4)) ||
((*str == 'e' || *str == 'E') && (i == 3)) ||
((*str == 'o' || *str == 'O') && (i == 0)) ||
((*str == 't' || *str == 'T') && (i == 7)) ||
((*str == 'l' || *str == 'L') && (i == 1)))
{
*str = '0' + "43071"[i];
break;
}
}
if (i == 5)
{
str++;
}
}
return (res);
}
