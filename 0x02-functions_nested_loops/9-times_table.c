#include <stdio.h>
#include "main.h"
/**
*times_table - prints multiples of 0 to 9
*/
void times_table(void)
{
int x = 0;
while (x <= 9)
{
int y = 0;
while (y <= 9)
{
putchar(x * y);
y++;
}
putchar('\n');
x++;
}   
}
