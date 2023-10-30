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
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
len2 = 0;
while (s1[len1])
len1++;
while (s2[len2])
len2++;
result = (char *)malloc(len1 + len2 + 1);
if (!result)
return (NULL);
r = result;
while (*s1)
*r++ = *s1++;
while (*s2)
*r++ = *s2++;
*r = '\0';
return (result);
}
