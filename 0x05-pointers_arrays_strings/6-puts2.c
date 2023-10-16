#include <string.h>
#include "main.h"
/**
*puts2 - Function that prints every other letter
*@str: string variable
*/
void puts2(char *str)
{
int length = strlen(str);
int i = 0;
while (i <= length)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
}
