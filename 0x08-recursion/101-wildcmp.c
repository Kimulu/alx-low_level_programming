#include "main.h"
/**
*wildcmp - function for checking if two strings are the same
*@s1: first string
*@s2: second string
*Return: returns 1 if true and 0 if false
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
{
return (wildcmp(s1, s2 + 1));
}
else if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}
else if (wildcmp(s1, s2 + 1))
{
return (1);
}
else
{
return (wildcmp(s1 + 1, s2));
}
}
if (*s1 == '\0' || *s2 == '\0')
{
return (0);
}
if (*s1 == *s2 || *s2 == '?')
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
