#include <stdio.h>
#include "main.h"
/**
*_strspn - function for finding the found characters in two different strings
*@s: the string to be evaluated
*@accept: the bytes to be compared with S
*Return: return bytes in the initial segment of s that are in accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count  = 0;
int found;
char current_char;
char *accept_ptr;
while (*s)
{
found = 0;
current_char = *s;
accept_ptr = accept;
while (*accept_ptr)
{
if (current_char == *accept_ptr)
{
found = 1;
break;
}
accept_ptr++;
}
if (found)
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
