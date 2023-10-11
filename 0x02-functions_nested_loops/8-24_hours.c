#include <stdio.h>
#include "main.h"
/**
*jack_bauer - prints all hours and min in Jack bauer's day
*/
void jack_bauer(void)
{
int hour = 0;
while (hour < 24)
{
int minute = 0;
while (minute < 60)
{
putchar('0' + hour / 10);
putchar('0' + hour % 10);
putchar(':');
putchar('0' + minute / 10);
putchar('0' + minute % 10);
putchar('\n');
minute++;
}
hour++;
}
}
