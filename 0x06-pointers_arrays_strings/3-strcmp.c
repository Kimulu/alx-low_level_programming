#include <stdio.h>
#include "main.h"
/**
*_strcmp - function for comparing two strings
*@s2: second string
*@s1: first string
*Return: return the difference between the strings
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
