#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*rev_string- Function for reversing a string
*@s: variable for the string
*/
void rev_string(char *s)
{
char *start = s;
char *end = s + strlen(s) - 1;
char temp;
while (start < end)
{
if (*start != ' ' && *end != ' ')
{
temp = *start;
*start = *end;
*end = temp;
}
if (*start != ' ')
{
end--;
}
if (*end != ' ')
{
start++;
}
}
}
