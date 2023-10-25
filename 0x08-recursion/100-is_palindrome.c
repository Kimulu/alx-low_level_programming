#include "main.h"
/**
*str_length- function to be called to check length of the string
*@s: the string
*Return: returns the length of the string
*/
int str_length(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + str_length_recursive(s + 1));
}
/**
*is_palindrome_helper - function to check if the string is a palindrome
*@s: the string
*@start: the start of the string
*@end: the end of the string
*Return: returns 1 if the string is palindrome and 0 otherwise
*/
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
*is_palindrome - function to be called by main
*@s: the string
*Return: returns 1 if the string is palindrome and 0 otherwise
*/

int is_palindrome(char *s)
{
int length = str_length(s);
if (length <= 1)
{
return (1);
}
return (is_palindrome_helper(s, 0, length - 1));
}
