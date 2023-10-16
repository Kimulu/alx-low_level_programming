#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*puts_half - Function for printing half of a string
*@str: variable for the string
*/
void puts_half(char *str)
{
int length = strlen(str);
int start_index = (length + 1) / 2;
int i = start_index;
while (i < length)
{
putchar(str[i]);
i++;
}
putchar('\n');
}
