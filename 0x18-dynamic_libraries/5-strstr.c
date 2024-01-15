#include <stdio.h>
#include "main.h"
/**
*_strstr - function searches for a string in another string
*@haystack: the string to be searched
*@needle: the bytes to be searched in the string
*Return: return a pointer to the start of the matching  needle
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *start = haystack;
char *sub = needle;
while (*haystack && *sub && *haystack == *sub)
{
haystack++;
sub++;
}
if (!*sub)
{
return (start);
}
haystack = start + 1;
}
return (NULL);
}
