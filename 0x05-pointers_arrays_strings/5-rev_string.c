#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
*rev_string- Function for reversing a string
*@s: variable for the string
*/
void rev_string(char *s)
{
int length = strlen(s);
char *reversed = (char *)malloc(length + 1);
if (reversed == NULL)
{
return;
}
char *start, *end, *rev;
start = s;
end = s + length - 1;
rev = reversed;
while (start <= end)
{
if (*start != ' ' && *end != ' ')
{
*rev++ = *end;
}
if (*end != ' ')
{
end--;
}
if (*start != ' ')
{
start++;
}
}
*rev = '\0';
strcpy(s, reversed);
free(reversed);
}
