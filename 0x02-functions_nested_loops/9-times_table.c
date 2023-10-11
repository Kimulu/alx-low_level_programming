#include <stdio.h>
#include "main.h"
/**
*jack_bauer - prints all hours and min in Jack bauer's day
*/
void jack_bauer(void)
{
int x = 0;
while (x <= 9)
{
int y = 0;
while (y <= 9)
{
putchar(x * y);
y++
}
putchar('\n');
x++
}
}
