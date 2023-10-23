#include <stdio.h>
#include "main.h"
/**
*_strspn - function for finding the count characters in two different strings
*@s: the string to be evaluated
*@accept: the bytes to be compared with S
*Return: return bytes in the initial segment of s that are in accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int count;
char current_char;
while (*s)
{
count = 0;
current_char = *s;
char *accept_ptr = accept;
while (*accept_ptr)
{
if (current_char == *accept_ptr)
{
count = 1;
break;
}
accept_ptr++;
}
if (count)
{
count++;
s++;
}
else
{
break;
}
}
return (count);
}
