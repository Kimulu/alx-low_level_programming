#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_rev - Function for reversing a string
*@s: variable for the string
*/
void print_rev(char *s)
{
int length = strlen(s);
for (int i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}

