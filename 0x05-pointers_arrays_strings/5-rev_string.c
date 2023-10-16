#include <string.h>
#include "main.h"
/**
*rev_string- Function for reversing a string
*@s: variable for the string
*/
void rev_string(char *s)
{
int length = strlen(s);
int i = 0;
int j = length - 1;
while (i < j)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
