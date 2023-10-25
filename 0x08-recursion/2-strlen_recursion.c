#include "main.h"
/**
*_strlen_recursion - function for counting the length of a string
*@s: the string
*Return: returns a count of the string length
*/
int _strlen_recursion(char *s)
{
int count = 0;
if (*s != '\0')
{
count++;
strlen_recursion(s + 1);
}
return (count);
}
