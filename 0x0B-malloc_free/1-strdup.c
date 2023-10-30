#include <stdlib.h>
/**
*_strdup - function to duplicate a string
*Return: returns pointer to a string
*@str: string to be used
*/
char *_strdup(char *str)
{
char *newStr;
size_t len;
size_t i;
if (str == NULL)
{
return (NULL);
}
len = 0;
while (str[len] != '\0')
{
len++;
}
newStr = (char *)malloc(len + 1);
if (newStr == NULL)
{
return (NULL);
}
i = 0;
while (i < len)
{
newStr[i] = str[i];
i++;
}
newStr[len] = '\0';
return (newStr);
}
