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
for (int i = 0; i < 10; i++)
{
if ((*str == 'a' || *str == 'A') && (i == 4) ||
(*str == 'e' || *str == 'E') && (i == 3) ||
(*str == 'o' || *str == 'O') && (i == 0) ||
(*str == 't' || *str == 'T') && (i == 7) ||
(*str == 'l' || *str == 'L') && (i == 1))
{
*str = i + '0';
break;
}
}
str++;
}
return (res);
}
