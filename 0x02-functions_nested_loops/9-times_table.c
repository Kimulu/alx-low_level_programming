#include <stdio.h>
#include "main.h"
/**
*times_table - prints multiples of 0 to 9
*/
void times_table(void)
{
int x = 0;
int v;
while (x <= 9)
{
int y = 0;
while (y <= 9)
{
v = (x * y);
putchar(v + '0');
y++;
}
putchar('\n');
x++;
}
}
