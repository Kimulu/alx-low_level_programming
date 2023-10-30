#include <stdlib.h>
/**
*str_concat - function to add two strings
*Return: returns pointer to a string
*@s1: string 1
*@s2: strin 2
*/
char *str_concat(char *s1, char *s2)
{
int len1;
int len2;
char *temp1;
char *temp2;
char *result;
char *r;
char *s;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
len1 = 0;
len2 = 0;
temp1 = s1;
temp2 = s2;
while (*temp1)
{
len1++;
temp1++;
}
while (*temp2)
{
len2++;
temp2++;
}
result = (char *)malloc(len1 + len2 + 1);
if (result == NULL)
{
return (NULL);
}
r = result;
s = s1;
while (*s)
{
*r = *s;
r++;
s++;
}
s = s2;
while (*s)
{
*r = *s;
r++;
s++;
}
*r = '\0';
return (result);
}
