#include <stdio.h>
#include "main.h"
/**
* print_to_98 - Printd numbers from n to 98
* @n: The number to start with
*/
void print_to_98(int n)
{
if (n <= 98)
{
int i = n;
while (i <= 98)
{
int num = i;
while (num > 0)
{
putchar(num % 10 + '0');
num /= 10;
}
if (i < 98)
{
putchar(',');
putchar(' ');
}
i++;
}
}
else
{
int i = n;
while (i >= 98)
{
int num = i;
while (num > 0)
{
putchar(num % 10 + '0');
num /= 10;
}
if (i > 98)
{
putchar(',');
putchar(' ');
}
i--;
}
}
putchar('\n');
}
