#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string- Function for reversing a string
*@s: variable for the string
*/
void rev_string(char *s)
{
int length = strlen(s);
char *start = s;
char *end = s + length - 1;
while (start < end)
{
if (*start != ' ' && *end != ' ')
{
char temp = *start;
*start = *end;
*end = temp;
}
else if (*start == ' ')
{
start++;
}
else if (*end == ' ')
{
end--;
}
start++;
end--;
}
}
