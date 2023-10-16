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
int i = length - 1;
while (i >= 0)
{
putchar(s[i]);
i--;
}
putchar('\n');
}
