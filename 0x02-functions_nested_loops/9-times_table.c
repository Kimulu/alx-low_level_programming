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
int product = x * y;
if (y != 0)
{
putchar(',');
putchar(' ');
}
if (product < 10)
{
putchar(' ');
putchar('0' + product);
}
else
{
putchar('0' + product / 10);
putchar('0' + product % 10);
}
y++;
}
putchar('\n');
x++;
}
}
