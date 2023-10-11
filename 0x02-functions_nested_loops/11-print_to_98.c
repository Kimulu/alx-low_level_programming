#include <stdio.h>
#include "main.h"
void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
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
}
}
else
{
for (int i = n; i >= 98; i--)
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
}
}
putchar('\n');
}
